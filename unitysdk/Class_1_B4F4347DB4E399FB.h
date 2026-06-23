#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B4F4347DB4E399FB_METHOD_1_3485F36717E2986E_OFFSET UNITYSDK_OFFSET(0x127CFC80)
#define CLASS_1_B4F4347DB4E399FB_METHOD_1_50DE06748159125F_OFFSET UNITYSDK_OFFSET(0x127CFB10)
#define CLASS_1_B4F4347DB4E399FB_METHOD_1_6935A862C2B15995_OFFSET UNITYSDK_OFFSET(0x127CF990)
#define CLASS_1_B4F4347DB4E399FB_METHOD_1_743407F59D62F9C7_OFFSET UNITYSDK_OFFSET(0x127CFE30)
#define CLASS_1_B4F4347DB4E399FB_METHOD_1_9CB6C44B0A05CC81_OFFSET UNITYSDK_OFFSET(0x127D0170)
#define CLASS_1_B4F4347DB4E399FB_METHOD_1_E884823DAF4CAADB_OFFSET UNITYSDK_OFFSET(0x127CED60)
#define CLASS_1_B4F4347DB4E399FB_METHOD_1_F626853E80BB5E5B_OFFSET UNITYSDK_OFFSET(0x127CF3B0)

inline static constexpr unsigned int Class_1_B4F4347DB4E399FB_TypeDefinitionIndex = 78407;

class Class_1_B4F4347DB4E399FB : public ::System::Object
{
public:
	static ::Struct_2_9F85650CFFBE9F44 Method_1_E884823DAF4CAADB(::UnityEngine::Collider* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_E884823DAF4CAADB_OFFSET))(a1);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_6935A862C2B15995(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_6935A862C2B15995_OFFSET))(a1);
	}

	static ::Struct_2_9F85650CFFBE9F44 Method_1_F626853E80BB5E5B(::UnityEngine::Bounds a1, ::UnityEngine::Transform* a2)
	{
		return ((::Struct_2_9F85650CFFBE9F44(*)(::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_F626853E80BB5E5B_OFFSET))(a1, a2);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_743407F59D62F9C7(::Nap::NapECS::EcsEntity* a1, ::System::String* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_743407F59D62F9C7_OFFSET))(a1, a2);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_9CB6C44B0A05CC81(::Nap::NapECS::EcsEntity* a1, ::System::String* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_9CB6C44B0A05CC81_OFFSET))(a1, a2);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_50DE06748159125F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_50DE06748159125F_OFFSET))(a1);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> Method_1_3485F36717E2986E(::Nap::NapECS::EcsEntity* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_METHOD_1_3485F36717E2986E_OFFSET))(a1, a2);
	}
};
