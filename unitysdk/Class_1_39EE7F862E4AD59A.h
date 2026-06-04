#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6A275AF5305C7AE3;
class Class_1_C84A84118567060F;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_39EE7F862E4AD59A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA97DA60)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_036E673406CC4416_OFFSET UNITYSDK_OFFSET(0xA97DDD0)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA97F0A0)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_1A0D3B20C2CC55DC_OFFSET UNITYSDK_OFFSET(0xA97E7B0)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_22634FDB09480019_OFFSET UNITYSDK_OFFSET(0xA97ECE0)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_96DDBBA013BECF44_OFFSET UNITYSDK_OFFSET(0xA97EAA0)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_C1FE64DAEC64B939_OFFSET UNITYSDK_OFFSET(0xA97EFE0)
#define CLASS_1_39EE7F862E4AD59A_METHOD_1_D061697D1AFE802A_OFFSET UNITYSDK_OFFSET(0xA97DD40)
#define CLASS_1_39EE7F862E4AD59A__CTOR_OFFSET UNITYSDK_OFFSET(0xA97D9D0)

inline static constexpr unsigned int Class_1_39EE7F862E4AD59A_TypeDefinitionIndex = 46127;

class Class_1_39EE7F862E4AD59A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6A275AF5305C7AE3*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Struct_2_A143022D1701BC76>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_C84A84118567060F*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D061697D1AFE802A(::Il2CppArray<::Class_1_C84A84118567060F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_D061697D1AFE802A_OFFSET))(this, a1);
	}

	::System::Void Method_1_036E673406CC4416(::Class_1_C84A84118567060F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_036E673406CC4416_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A0D3B20C2CC55DC(::Class_1_C84A84118567060F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_1A0D3B20C2CC55DC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_96DDBBA013BECF44(::Struct_2_A143022D1701BC76 a1, ::Struct_2_A143022D1701BC76 a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A143022D1701BC76, ::Struct_2_A143022D1701BC76, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_96DDBBA013BECF44_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_22634FDB09480019(::Struct_2_A143022D1701BC76 a1, ::Struct_2_A143022D1701BC76 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A143022D1701BC76, ::Struct_2_A143022D1701BC76, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_22634FDB09480019_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_A143022D1701BC76>* Method_1_C1FE64DAEC64B939(::Struct_2_A143022D1701BC76 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_A143022D1701BC76>*(*)(::PVOID, ::Struct_2_A143022D1701BC76))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_C1FE64DAEC64B939_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39EE7F862E4AD59A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
