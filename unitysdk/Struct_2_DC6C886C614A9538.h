#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define STRUCT_2_DC6C886C614A9538_METHOD_2_42B5664B68A7EA00_OFFSET UNITYSDK_OFFSET(0x74F900)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_44584B54E581F643_OFFSET UNITYSDK_OFFSET(0x74F880)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_611DDCBED432BB03_OFFSET UNITYSDK_OFFSET(0x74F8E0)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_6E9C20992CE414CA_1_OFFSET UNITYSDK_OFFSET(0x74F8D0)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_6E9C20992CE414CA_OFFSET UNITYSDK_OFFSET(0x74F8C0)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_881933D078074935_OFFSET UNITYSDK_OFFSET(0x74F910)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_A4B0994C46308D45_OFFSET UNITYSDK_OFFSET(0x11833550)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_D404CA8572EFE98F_OFFSET UNITYSDK_OFFSET(0x74F8F0)
#define STRUCT_2_DC6C886C614A9538_METHOD_2_E53573F25A5CAA75_OFFSET UNITYSDK_OFFSET(0x74F8A0)
#define STRUCT_2_DC6C886C614A9538__CTOR_OFFSET UNITYSDK_OFFSET(0x74F830)

inline static constexpr unsigned int Struct_2_DC6C886C614A9538_TypeDefinitionIndex = 82985;

struct alignas(8) Struct_2_DC6C886C614A9538
{
	::System::UInt32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C
	::UnityEngine::Vector3 Field_2_5; // 0x30

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_2_44584B54E581F643(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_44584B54E581F643_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Quaternion Method_2_E53573F25A5CAA75(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_E53573F25A5CAA75_OFFSET))(this, a1);
	}
	*/

	::System::Single Method_2_6E9C20992CE414CA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_6E9C20992CE414CA_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E9C20992CE414CA_1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_6E9C20992CE414CA_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611DDCBED432BB03(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_611DDCBED432BB03_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_2_D404CA8572EFE98F(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_D404CA8572EFE98F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::EntityBodySize Method_2_42B5664B68A7EA00(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_42B5664B68A7EA00_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_881933D078074935(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_881933D078074935_OFFSET))(this, a1);
	}

	/*
	static ::System::Nullable_1<::UnityEngine::Vector3> Method_2_A4B0994C46308D45(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DC6C886C614A9538_METHOD_2_A4B0994C46308D45_OFFSET))(a1, a2, a3, a4);
	}
	*/
};
