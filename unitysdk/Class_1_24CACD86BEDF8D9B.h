#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7250B7BB9413AA62.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6A275AF5305C7AE3;
class Class_1_C84A84118567060F;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24CACD86BEDF8D9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA441F50)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA4437C0)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0xA442320)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_8C4121B64D1B4C8A_OFFSET UNITYSDK_OFFSET(0xA442EC0)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_A65ED85D600FD0BE_OFFSET UNITYSDK_OFFSET(0xA4431A0)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_C1FE64DAEC64B939_OFFSET UNITYSDK_OFFSET(0xA443700)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_E19B203C1E07654A_OFFSET UNITYSDK_OFFSET(0xA442280)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_EDAA61F2FC616B5D_OFFSET UNITYSDK_OFFSET(0xA4433F0)
#define CLASS_1_24CACD86BEDF8D9B__CTOR_OFFSET UNITYSDK_OFFSET(0xA441EC0)

inline static constexpr unsigned int Class_1_24CACD86BEDF8D9B_TypeDefinitionIndex = 39635;

class Class_1_24CACD86BEDF8D9B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6A275AF5305C7AE3*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::Struct_2_7250B7BB9413AA62>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_C84A84118567060F*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E19B203C1E07654A(::Il2CppArray<::Class_1_C84A84118567060F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_E19B203C1E07654A_OFFSET))(this, a1);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_C84A84118567060F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4121B64D1B4C8A(::Class_1_C84A84118567060F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_8C4121B64D1B4C8A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A65ED85D600FD0BE(::Struct_2_7250B7BB9413AA62 a1, ::Struct_2_7250B7BB9413AA62 a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7250B7BB9413AA62, ::Struct_2_7250B7BB9413AA62, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_A65ED85D600FD0BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EDAA61F2FC616B5D(::Struct_2_7250B7BB9413AA62 a1, ::Struct_2_7250B7BB9413AA62 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7250B7BB9413AA62, ::Struct_2_7250B7BB9413AA62, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_EDAA61F2FC616B5D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_7250B7BB9413AA62>* Method_1_C1FE64DAEC64B939(::Struct_2_7250B7BB9413AA62 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_7250B7BB9413AA62>*(*)(::PVOID, ::Struct_2_7250B7BB9413AA62))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_C1FE64DAEC64B939_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
