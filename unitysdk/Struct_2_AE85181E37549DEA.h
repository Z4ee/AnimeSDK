#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Collider; }

#define STRUCT_2_AE85181E37549DEA_METHOD_2_0329BAA83B3ADB3B_1_OFFSET UNITYSDK_OFFSET(0x7E6120)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_0329BAA83B3ADB3B_OFFSET UNITYSDK_OFFSET(0x7E6080)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_42B5664B68A7EA00_OFFSET UNITYSDK_OFFSET(0x7E6020)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_44584B54E581F643_OFFSET UNITYSDK_OFFSET(0x7E6100)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_611DDCBED432BB03_OFFSET UNITYSDK_OFFSET(0x7E6000)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_6E9C20992CE414CA_1_OFFSET UNITYSDK_OFFSET(0x7E5FF0)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_6E9C20992CE414CA_OFFSET UNITYSDK_OFFSET(0x7E5FE0)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_881933D078074935_OFFSET UNITYSDK_OFFSET(0x7E6030)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_D404CA8572EFE98F_OFFSET UNITYSDK_OFFSET(0x7E6010)
#define STRUCT_2_AE85181E37549DEA_METHOD_2_E53573F25A5CAA75_OFFSET UNITYSDK_OFFSET(0x7E5FC0)
#define STRUCT_2_AE85181E37549DEA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x397210)
#define STRUCT_2_AE85181E37549DEA__CTOR_OFFSET UNITYSDK_OFFSET(0x7E5FA0)

inline static constexpr unsigned int Struct_2_AE85181E37549DEA_TypeDefinitionIndex = 43914;

struct alignas(4) Struct_2_AE85181E37549DEA
{
	::System::UInt32 Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA__CTOR_1_OFFSET))(this, a1, a2);
	}

	/*
	::UnityEngine::Quaternion Method_2_E53573F25A5CAA75(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_E53573F25A5CAA75_OFFSET))(this, a1);
	}
	*/

	::System::Single Method_2_6E9C20992CE414CA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_6E9C20992CE414CA_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E9C20992CE414CA_1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_6E9C20992CE414CA_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611DDCBED432BB03(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_611DDCBED432BB03_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_2_D404CA8572EFE98F(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_D404CA8572EFE98F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::EntityBodySize Method_2_42B5664B68A7EA00(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_42B5664B68A7EA00_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_881933D078074935(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_881933D078074935_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_0329BAA83B3ADB3B(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_0329BAA83B3ADB3B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_44584B54E581F643(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_44584B54E581F643_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_0329BAA83B3ADB3B_1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_AE85181E37549DEA_METHOD_2_0329BAA83B3ADB3B_1_OFFSET))(this, a1);
	}
};
