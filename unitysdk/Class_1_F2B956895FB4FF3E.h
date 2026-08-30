#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F2B956895FB4FF3E_Struct_2_6CB9AA3EEB0B700F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_37D832480CB327E1;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_F2B956895FB4FF3E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19882800)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_0FF913F1F32D82F8_OFFSET UNITYSDK_OFFSET(0x19882D30)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_23C04170074C35DC_OFFSET UNITYSDK_OFFSET(0x19884A10)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_29F4B2F5B18EFC27_OFFSET UNITYSDK_OFFSET(0x19882BA0)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_4B2E2B61CE404D2A_OFFSET UNITYSDK_OFFSET(0x19883340)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_4F1A9E39CBA40EF5_OFFSET UNITYSDK_OFFSET(0x19882C10)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_8199447A6134C5E2_OFFSET UNITYSDK_OFFSET(0x19882910)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_84F909E452A94A32_OFFSET UNITYSDK_OFFSET(0x19882E40)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_93CB59B69C867D17_1_OFFSET UNITYSDK_OFFSET(0x19885170)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_93CB59B69C867D17_OFFSET UNITYSDK_OFFSET(0x19884F30)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_985942FB06957FF2_OFFSET UNITYSDK_OFFSET(0x198839B0)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_AF98EB440E8C97AC_OFFSET UNITYSDK_OFFSET(0x19883FA0)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_B7C70F127625A7B5_OFFSET UNITYSDK_OFFSET(0x19884E60)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_BF11CBFA0D89EDEF_OFFSET UNITYSDK_OFFSET(0x19884020)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_C87395D4215ED771_1_OFFSET UNITYSDK_OFFSET(0x19884BF0)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_C87395D4215ED771_OFFSET UNITYSDK_OFFSET(0x19884410)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_D667649EFD732EAD_OFFSET UNITYSDK_OFFSET(0x19884680)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_F5A8FCABBA1240A5_OFFSET UNITYSDK_OFFSET(0x198848A0)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_F6F8677413173B00_OFFSET UNITYSDK_OFFSET(0x19884180)
#define CLASS_1_F2B956895FB4FF3E_METHOD_1_FF3E2D13CAD3B5F6_OFFSET UNITYSDK_OFFSET(0x19883C40)
#define CLASS_1_F2B956895FB4FF3E__CTOR_OFFSET UNITYSDK_OFFSET(0x19882730)

inline static constexpr unsigned int Class_1_F2B956895FB4FF3E_TypeDefinitionIndex = 76406;

class Class_1_F2B956895FB4FF3E : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x10
	::Class_2_F47F7A3F5E97970D* EEFMDEHLLFI; // 0x18
	::Class_1_F2B956895FB4FF3E_Struct_2_6CB9AA3EEB0B700F IALMHOAGKIK; // 0x20

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8199447A6134C5E2(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_8199447A6134C5E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_29F4B2F5B18EFC27(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_29F4B2F5B18EFC27_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_84F909E452A94A32(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_84F909E452A94A32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4B2E2B61CE404D2A(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_4B2E2B61CE404D2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF3E2D13CAD3B5F6(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_FF3E2D13CAD3B5F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF98EB440E8C97AC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_AF98EB440E8C97AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF11CBFA0D89EDEF(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_BF11CBFA0D89EDEF_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_4F1A9E39CBA40EF5(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_4F1A9E39CBA40EF5_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1* Method_1_0FF913F1F32D82F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_37D832480CB327E1*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_0FF913F1F32D82F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6F8677413173B00(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_F6F8677413173B00_OFFSET))(this, a1);
	}

	::System::Void Method_1_D667649EFD732EAD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_D667649EFD732EAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A8FCABBA1240A5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_F5A8FCABBA1240A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_23C04170074C35DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_23C04170074C35DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7C70F127625A7B5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_B7C70F127625A7B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_985942FB06957FF2(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_985942FB06957FF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87395D4215ED771(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_C87395D4215ED771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87395D4215ED771_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_C87395D4215ED771_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93CB59B69C867D17(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_93CB59B69C867D17_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_93CB59B69C867D17_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2B956895FB4FF3E_METHOD_1_93CB59B69C867D17_1_OFFSET))(this, a1, a2, a3);
	}
};
