#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_54A2EB293CF77FFF;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DB0D8C97EC270D19_GET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0xB9E2690)
#define CLASS_1_DB0D8C97EC270D19_GET_SUPPORTINGAVATARS_OFFSET UNITYSDK_OFFSET(0xB9E26B0)
#define CLASS_1_DB0D8C97EC270D19_METHOD_1_0D62FC38CC5C1E0E_OFFSET UNITYSDK_OFFSET(0xB9E26D0)
#define CLASS_1_DB0D8C97EC270D19_METHOD_1_2871EFCBDC3186E7_OFFSET UNITYSDK_OFFSET(0xB9E2790)
#define CLASS_1_DB0D8C97EC270D19_SET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0xB9E26A0)
#define CLASS_1_DB0D8C97EC270D19_SET_SUPPORTINGAVATARS_OFFSET UNITYSDK_OFFSET(0xB9E26C0)
#define CLASS_1_DB0D8C97EC270D19__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E2780)

inline static constexpr unsigned int Class_1_DB0D8C97EC270D19_TypeDefinitionIndex = 82097;

class Class_1_DB0D8C97EC270D19 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>* _SupportingAvatars_k__BackingField; // 0x10
	::System::UInt32 _LeadingRoleID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_LeadingRoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19_GET_LEADINGROLEID_OFFSET))(this);
	}

	::System::Void set_LeadingRoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19_SET_LEADINGROLEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>* get_SupportingAvatars()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19_GET_SUPPORTINGAVATARS_OFFSET))(this);
	}

	::System::Void set_SupportingAvatars(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19_SET_SUPPORTINGAVATARS_OFFSET))(this, a1);
	}

	static ::Class_1_DB0D8C97EC270D19* Method_1_0D62FC38CC5C1E0E(::System::UInt32 a1)
	{
		return ((::Class_1_DB0D8C97EC270D19*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19_METHOD_1_0D62FC38CC5C1E0E_OFFSET))(a1);
	}

	static ::Class_1_DB0D8C97EC270D19* Method_1_2871EFCBDC3186E7(::System::UInt32 a1, ::Class_1_54A2EB293CF77FFF* a2)
	{
		return ((::Class_1_DB0D8C97EC270D19*(*)(::System::UInt32, ::Class_1_54A2EB293CF77FFF*))((::PBYTE)hIl2Cpp + CLASS_1_DB0D8C97EC270D19_METHOD_1_2871EFCBDC3186E7_OFFSET))(a1, a2);
	}
};
