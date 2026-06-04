#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FE552D20FCAFE464_Struct_2_6CB9AA3EEB0B700F.h"
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

#define CLASS_1_FE552D20FCAFE464_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAECE80)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_19D9795AB3407006_1_OFFSET UNITYSDK_OFFSET(0xAAEF0C0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_19D9795AB3407006_OFFSET UNITYSDK_OFFSET(0xAAEE990)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_23C04170074C35DC_1_OFFSET UNITYSDK_OFFSET(0xAAEEEE0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_23C04170074C35DC_OFFSET UNITYSDK_OFFSET(0xAAEEDB0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_29F4B2F5B18EFC27_OFFSET UNITYSDK_OFFSET(0xAAED200)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_2B4537F30AAE252B_OFFSET UNITYSDK_OFFSET(0xAAECF90)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_3D6BB57D656BFCA1_OFFSET UNITYSDK_OFFSET(0xAAED390)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_420D0F4EA7E183CD_OFFSET UNITYSDK_OFFSET(0xAAEDFF0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_4B2E2B61CE404D2A_OFFSET UNITYSDK_OFFSET(0xAAED980)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_4F1A9E39CBA40EF5_OFFSET UNITYSDK_OFFSET(0xAAED270)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_4F30F611993DFFDF_OFFSET UNITYSDK_OFFSET(0xAAEE220)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_84F909E452A94A32_OFFSET UNITYSDK_OFFSET(0xAAED480)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_93CB59B69C867D17_1_OFFSET UNITYSDK_OFFSET(0xAAEF5F0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_93CB59B69C867D17_OFFSET UNITYSDK_OFFSET(0xAAEF3B0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_AF98EB440E8C97AC_OFFSET UNITYSDK_OFFSET(0xAAEE550)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_B7C70F127625A7B5_OFFSET UNITYSDK_OFFSET(0xAAEF2E0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_BF11CBFA0D89EDEF_OFFSET UNITYSDK_OFFSET(0xAAEE5D0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_F90AE8CF6B1FAF12_OFFSET UNITYSDK_OFFSET(0xAAEEBB0)
#define CLASS_1_FE552D20FCAFE464_METHOD_1_FD460C2B5F69BC86_OFFSET UNITYSDK_OFFSET(0xAAEE730)
#define CLASS_1_FE552D20FCAFE464__CTOR_OFFSET UNITYSDK_OFFSET(0xAAECDB0)

inline static constexpr unsigned int Class_1_FE552D20FCAFE464_TypeDefinitionIndex = 71408;

class Class_1_FE552D20FCAFE464 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x18
	::Class_1_FE552D20FCAFE464_Struct_2_6CB9AA3EEB0B700F Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2B4537F30AAE252B(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_2B4537F30AAE252B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_29F4B2F5B18EFC27(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_29F4B2F5B18EFC27_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_84F909E452A94A32(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_84F909E452A94A32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4B2E2B61CE404D2A(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_4B2E2B61CE404D2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F30F611993DFFDF(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_4F30F611993DFFDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF98EB440E8C97AC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_AF98EB440E8C97AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF11CBFA0D89EDEF(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_BF11CBFA0D89EDEF_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_4F1A9E39CBA40EF5(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_4F1A9E39CBA40EF5_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1* Method_1_3D6BB57D656BFCA1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_37D832480CB327E1*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_3D6BB57D656BFCA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD460C2B5F69BC86(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_FD460C2B5F69BC86_OFFSET))(this, a1);
	}

	::System::Void Method_1_F90AE8CF6B1FAF12(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_F90AE8CF6B1FAF12_OFFSET))(this, a1);
	}

	::System::Void Method_1_23C04170074C35DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_23C04170074C35DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_23C04170074C35DC_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_23C04170074C35DC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7C70F127625A7B5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_B7C70F127625A7B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_420D0F4EA7E183CD(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_420D0F4EA7E183CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19D9795AB3407006(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_19D9795AB3407006_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19D9795AB3407006_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_19D9795AB3407006_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93CB59B69C867D17(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_93CB59B69C867D17_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_93CB59B69C867D17_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464_METHOD_1_93CB59B69C867D17_1_OFFSET))(this, a1, a2, a3);
	}
};
