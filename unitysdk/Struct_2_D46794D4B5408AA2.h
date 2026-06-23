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
namespace UnityEngine { class Transform; }

#define STRUCT_2_D46794D4B5408AA2_METHOD_2_42B5664B68A7EA00_OFFSET UNITYSDK_OFFSET(0x7EDCC0)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_44584B54E581F643_OFFSET UNITYSDK_OFFSET(0x7EDC40)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_52C3C9080E421858_OFFSET UNITYSDK_OFFSET(0x14DC14E0)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_611DDCBED432BB03_OFFSET UNITYSDK_OFFSET(0x7EDCA0)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_6E9C20992CE414CA_OFFSET UNITYSDK_OFFSET(0x7EDC90)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_84835E3516CCADB9_OFFSET UNITYSDK_OFFSET(0x14DC1150)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_84906EC687839B39_OFFSET UNITYSDK_OFFSET(0x7EDC80)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_881933D078074935_OFFSET UNITYSDK_OFFSET(0x7EDCD0)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_902D14AD93B36CC0_OFFSET UNITYSDK_OFFSET(0x14DC0FE0)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_D404CA8572EFE98F_OFFSET UNITYSDK_OFFSET(0x7EDCB0)
#define STRUCT_2_D46794D4B5408AA2_METHOD_2_E53573F25A5CAA75_OFFSET UNITYSDK_OFFSET(0x7EDC60)
#define STRUCT_2_D46794D4B5408AA2__CTOR_OFFSET UNITYSDK_OFFSET(0x7EDBC0)

inline static constexpr unsigned int Struct_2_D46794D4B5408AA2_TypeDefinitionIndex = 65541;

struct alignas(8) Struct_2_D46794D4B5408AA2
{
	::System::UInt32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x38
	::System::Single Field_2_6; // 0x3C
	::UnityEngine::Vector3 Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x4C
	::System::Single Field_2_9; // 0x50

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::System::String* a5, ::System::Collections::Generic::List_1<::System::String*>* a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::System::Single a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::UnityEngine::Vector3 Method_2_44584B54E581F643(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_44584B54E581F643_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Quaternion Method_2_E53573F25A5CAA75(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_E53573F25A5CAA75_OFFSET))(this, a1);
	}
	*/

	::System::Single Method_2_84906EC687839B39(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_84906EC687839B39_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E9C20992CE414CA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_6E9C20992CE414CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611DDCBED432BB03(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_611DDCBED432BB03_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_2_D404CA8572EFE98F(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_D404CA8572EFE98F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::EntityBodySize Method_2_42B5664B68A7EA00(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_42B5664B68A7EA00_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_881933D078074935(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_881933D078074935_OFFSET))(this, a1);
	}

	/*
	static ::System::Void Method_2_902D14AD93B36CC0(::UnityEngine::Transform* a1, ::Struct_2_D46794D4B5408AA2_Struct_2_FD8E1D4014EE315F_9& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::Struct_2_D46794D4B5408AA2_Struct_2_FD8E1D4014EE315F_9&))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_902D14AD93B36CC0_OFFSET))(a1, a2);
	}
	*/

	static ::UnityEngine::Vector3 Method_2_84835E3516CCADB9(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::System::String* a5, ::System::Collections::Generic::List_1<::System::String*>* a6, ::System::Single a7, ::System::Single a8)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_84835E3516CCADB9_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Single Method_2_52C3C9080E421858(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D46794D4B5408AA2_METHOD_2_52C3C9080E421858_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
