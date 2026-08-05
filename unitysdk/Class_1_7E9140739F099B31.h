#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7E9140739F099B31_METHOD_1_33E3568DFDEEDA8E_OFFSET UNITYSDK_OFFSET(0x169F4DE0)
#define CLASS_1_7E9140739F099B31_METHOD_1_3485F36717E2986E_OFFSET UNITYSDK_OFFSET(0x169F5120)
#define CLASS_1_7E9140739F099B31_METHOD_1_50DE06748159125F_OFFSET UNITYSDK_OFFSET(0x169F5450)
#define CLASS_1_7E9140739F099B31_METHOD_1_6935A862C2B15995_OFFSET UNITYSDK_OFFSET(0x169F52D0)
#define CLASS_1_7E9140739F099B31_METHOD_1_9CB6C44B0A05CC81_OFFSET UNITYSDK_OFFSET(0x169F3F50)
#define CLASS_1_7E9140739F099B31_METHOD_1_E884823DAF4CAADB_OFFSET UNITYSDK_OFFSET(0x169F4170)
#define CLASS_1_7E9140739F099B31_METHOD_1_F626853E80BB5E5B_OFFSET UNITYSDK_OFFSET(0x169F4810)

inline static constexpr unsigned int Class_1_7E9140739F099B31_TypeDefinitionIndex = 51215;

class Class_1_7E9140739F099B31 : public ::System::Object
{
public:
	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_9CB6C44B0A05CC81(::Nap::NapECS::EcsEntity* a1, ::System::String* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_9CB6C44B0A05CC81_OFFSET))(a1, a2);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_E884823DAF4CAADB(::UnityEngine::Collider* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_E884823DAF4CAADB_OFFSET))(a1);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_33E3568DFDEEDA8E(::Nap::NapECS::EcsEntity* a1, ::System::String* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_33E3568DFDEEDA8E_OFFSET))(a1, a2);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_3485F36717E2986E(::Nap::NapECS::EcsEntity* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_3485F36717E2986E_OFFSET))(a1, a2);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_6935A862C2B15995(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_6935A862C2B15995_OFFSET))(a1);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_50DE06748159125F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_50DE06748159125F_OFFSET))(a1);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_F626853E80BB5E5B(::UnityEngine::Bounds a1, ::UnityEngine::Transform* a2)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_METHOD_1_F626853E80BB5E5B_OFFSET))(a1, a2);
	}
};
