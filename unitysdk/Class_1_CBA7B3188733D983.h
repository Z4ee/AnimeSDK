#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27BF03260043F18F;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CBA7B3188733D983_GET_SELECTEDENTITYID_OFFSET UNITYSDK_OFFSET(0xB60A2F0)
#define CLASS_1_CBA7B3188733D983_METHOD_1_6DE186DDA4E6C74B_OFFSET UNITYSDK_OFFSET(0xB60A300)
#define CLASS_1_CBA7B3188733D983_METHOD_1_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0xB60A610)
#define CLASS_1_CBA7B3188733D983_METHOD_1_825352E01A0009D5_OFFSET UNITYSDK_OFFSET(0xB60A470)
#define CLASS_1_CBA7B3188733D983__CTOR_OFFSET UNITYSDK_OFFSET(0xB60A7A0)
#define CLASS_1_CBA7B3188733D983__GET_ACTIVETITLESTREAM_B__5_0_OFFSET UNITYSDK_OFFSET(0xB60A850)

inline static constexpr unsigned int Class_1_CBA7B3188733D983_TypeDefinitionIndex = 50394;

class Class_1_CBA7B3188733D983 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Int32>* _SelectedEntityId_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_27BF03260043F18F*>* IPKBBIPCICJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBA7B3188733D983__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_SelectedEntityId()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBA7B3188733D983_GET_SELECTEDENTITYID_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_6DE186DDA4E6C74B()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBA7B3188733D983_METHOD_1_6DE186DDA4E6C74B_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_825352E01A0009D5(::System::Int32 a1)
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBA7B3188733D983_METHOD_1_825352E01A0009D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6F865C6BBBA8DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CBA7B3188733D983_METHOD_1_6E6F865C6BBBA8DD_OFFSET))(this, a1);
	}

	::R3::Observable_1<::System::String*>* _get_ActiveTitleStream_b__5_0(::System::Int32 a1)
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBA7B3188733D983__GET_ACTIVETITLESTREAM_B__5_0_OFFSET))(this, a1);
	}
};
