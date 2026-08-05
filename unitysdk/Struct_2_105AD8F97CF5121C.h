#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define STRUCT_2_105AD8F97CF5121C_METHOD_2_42B5664B68A7EA00_OFFSET UNITYSDK_OFFSET(0x83B4C0)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_44584B54E581F643_OFFSET UNITYSDK_OFFSET(0x83B440)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_611DDCBED432BB03_OFFSET UNITYSDK_OFFSET(0x83B4A0)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_6E9C20992CE414CA_1_OFFSET UNITYSDK_OFFSET(0x83B490)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_6E9C20992CE414CA_OFFSET UNITYSDK_OFFSET(0x83B480)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_881933D078074935_OFFSET UNITYSDK_OFFSET(0x83B4D0)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_D404CA8572EFE98F_OFFSET UNITYSDK_OFFSET(0x83B4B0)
#define STRUCT_2_105AD8F97CF5121C_METHOD_2_E53573F25A5CAA75_OFFSET UNITYSDK_OFFSET(0x83B460)
#define STRUCT_2_105AD8F97CF5121C__CTOR_OFFSET UNITYSDK_OFFSET(0x83B400)

inline static constexpr unsigned int Struct_2_105AD8F97CF5121C_TypeDefinitionIndex = 62391;

struct alignas(8) Struct_2_105AD8F97CF5121C
{
	::System::UInt32 Field_2_3; // 0x10
	::System::String* Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_44584B54E581F643(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_44584B54E581F643_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Quaternion Method_2_E53573F25A5CAA75(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_E53573F25A5CAA75_OFFSET))(this, a1);
	}
	*/

	::System::Single Method_2_6E9C20992CE414CA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_6E9C20992CE414CA_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E9C20992CE414CA_1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_6E9C20992CE414CA_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611DDCBED432BB03(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_611DDCBED432BB03_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_2_D404CA8572EFE98F(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_D404CA8572EFE98F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::EntityBodySize Method_2_42B5664B68A7EA00(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_42B5664B68A7EA00_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_881933D078074935(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_105AD8F97CF5121C_METHOD_2_881933D078074935_OFFSET))(this, a1);
	}
};
