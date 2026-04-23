#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_6F8A72DC2D05A154_Class_1_3F628EDA3EB81EE5;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F8A72DC2D05A154_METHOD_1_21BCC6962EAF0867_OFFSET UNITYSDK_OFFSET(0x17D0E930)
#define CLASS_1_6F8A72DC2D05A154_METHOD_1_47568803C94865D8_OFFSET UNITYSDK_OFFSET(0x17D0D4C0)
#define CLASS_1_6F8A72DC2D05A154_METHOD_1_5C7A2D99090B8F8A_OFFSET UNITYSDK_OFFSET(0x17D0D140)
#define CLASS_1_6F8A72DC2D05A154_METHOD_1_AEF085E6C83B79B3_OFFSET UNITYSDK_OFFSET(0x17D0EB40)
#define CLASS_1_6F8A72DC2D05A154_METHOD_1_B486009F58B5E809_OFFSET UNITYSDK_OFFSET(0x17D0E3C0)
#define CLASS_1_6F8A72DC2D05A154_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x17D0D640)
#define CLASS_1_6F8A72DC2D05A154__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0D030)

inline static constexpr unsigned int Class_1_6F8A72DC2D05A154_TypeDefinitionIndex = 34688;

class Class_1_6F8A72DC2D05A154 : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::Class_1_6F8A72DC2D05A154_Class_1_3F628EDA3EB81EE5*>* Field_1_0; // 0x10
	::System::Collections::Generic::SortedDictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>>*>* Field_1_1; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C7A2D99090B8F8A(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_METHOD_1_5C7A2D99090B8F8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_47568803C94865D8(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_METHOD_1_47568803C94865D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_1_21BCC6962EAF0867(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_METHOD_1_21BCC6962EAF0867_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_6F8A72DC2D05A154_Class_1_3F628EDA3EB81EE5* Method_1_B486009F58B5E809(::System::UInt32 a1)
	{
		return ((::Class_1_6F8A72DC2D05A154_Class_1_3F628EDA3EB81EE5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_METHOD_1_B486009F58B5E809_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_AEF085E6C83B79B3()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8A72DC2D05A154_METHOD_1_AEF085E6C83B79B3_OFFSET))(this);
	}
};
