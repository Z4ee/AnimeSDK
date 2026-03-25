#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_344EBF2097F86C15_Struct_2_2AB2652083820705.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_344EBF2097F86C15_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11805620)
#define CLASS_1_344EBF2097F86C15_METHOD_1_112E16C9E5D22E4D_OFFSET UNITYSDK_OFFSET(0x11805C10)
#define CLASS_1_344EBF2097F86C15_METHOD_1_2B4537F30AAE252B_OFFSET UNITYSDK_OFFSET(0x11805720)
#define CLASS_1_344EBF2097F86C15_METHOD_1_2D9AB4699173BFEF_1_OFFSET UNITYSDK_OFFSET(0x118086E0)
#define CLASS_1_344EBF2097F86C15_METHOD_1_2D9AB4699173BFEF_OFFSET UNITYSDK_OFFSET(0x118083B0)
#define CLASS_1_344EBF2097F86C15_METHOD_1_37C4B6900A47EEF0_OFFSET UNITYSDK_OFFSET(0x118074F0)
#define CLASS_1_344EBF2097F86C15_METHOD_1_3D6BB57D656BFCA1_OFFSET UNITYSDK_OFFSET(0x11805B20)
#define CLASS_1_344EBF2097F86C15_METHOD_1_41A891CB95D6C306_OFFSET UNITYSDK_OFFSET(0x11807370)
#define CLASS_1_344EBF2097F86C15_METHOD_1_420D0F4EA7E183CD_OFFSET UNITYSDK_OFFSET(0x11806D00)
#define CLASS_1_344EBF2097F86C15_METHOD_1_4F1A9E39CBA40EF5_OFFSET UNITYSDK_OFFSET(0x11805A00)
#define CLASS_1_344EBF2097F86C15_METHOD_1_677A37B95450707E_OFFSET UNITYSDK_OFFSET(0x118079C0)
#define CLASS_1_344EBF2097F86C15_METHOD_1_6B4ECDC9C9B21298_OFFSET UNITYSDK_OFFSET(0x11806330)
#define CLASS_1_344EBF2097F86C15_METHOD_1_7E08EFCEB28F37EA_OFFSET UNITYSDK_OFFSET(0x11805990)
#define CLASS_1_344EBF2097F86C15_METHOD_1_9F29B0C379622937_OFFSET UNITYSDK_OFFSET(0x118072F0)
#define CLASS_1_344EBF2097F86C15_METHOD_1_B37E1EEE95BB5119_OFFSET UNITYSDK_OFFSET(0x11808270)
#define CLASS_1_344EBF2097F86C15_METHOD_1_C87395D4215ED771_1_OFFSET UNITYSDK_OFFSET(0x11808050)
#define CLASS_1_344EBF2097F86C15_METHOD_1_C87395D4215ED771_OFFSET UNITYSDK_OFFSET(0x118077A0)
#define CLASS_1_344EBF2097F86C15_METHOD_1_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0x11807C40)
#define CLASS_1_344EBF2097F86C15_METHOD_1_F5A8FCABBA1240A5_OFFSET UNITYSDK_OFFSET(0x11807E00)
#define CLASS_1_344EBF2097F86C15_METHOD_1_FF3E2D13CAD3B5F6_OFFSET UNITYSDK_OFFSET(0x11806F30)
#define CLASS_1_344EBF2097F86C15__CTOR_OFFSET UNITYSDK_OFFSET(0x11805570)

inline static constexpr unsigned int Class_1_344EBF2097F86C15_TypeDefinitionIndex = 62577;

class Class_1_344EBF2097F86C15 : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x10
	::Class_1_344EBF2097F86C15_Struct_2_2AB2652083820705 Field_1_2; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2B4537F30AAE252B(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_2B4537F30AAE252B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7E08EFCEB28F37EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_7E08EFCEB28F37EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_112E16C9E5D22E4D(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_112E16C9E5D22E4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6B4ECDC9C9B21298(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_6B4ECDC9C9B21298_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF3E2D13CAD3B5F6(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_FF3E2D13CAD3B5F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F29B0C379622937(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_9F29B0C379622937_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A891CB95D6C306(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_41A891CB95D6C306_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_4F1A9E39CBA40EF5(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_4F1A9E39CBA40EF5_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1* Method_1_3D6BB57D656BFCA1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_37D832480CB327E1*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_3D6BB57D656BFCA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_37C4B6900A47EEF0(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_37C4B6900A47EEF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_677A37B95450707E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_677A37B95450707E_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_EA9B142E5A847C05_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A8FCABBA1240A5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_F5A8FCABBA1240A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B37E1EEE95BB5119(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_B37E1EEE95BB5119_OFFSET))(this, a1);
	}

	::System::Void Method_1_420D0F4EA7E183CD(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_420D0F4EA7E183CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87395D4215ED771(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_C87395D4215ED771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87395D4215ED771_1(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_C87395D4215ED771_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D9AB4699173BFEF(::Class_2_9DD8A46984F1AFFD* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_2D9AB4699173BFEF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2D9AB4699173BFEF_1(::Class_2_9DD8A46984F1AFFD* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15_METHOD_1_2D9AB4699173BFEF_1_OFFSET))(this, a1, a2, a3);
	}
};
