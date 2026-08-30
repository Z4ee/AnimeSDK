#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_79ED0A52DF225781_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x154BBA20)
#define CLASS_1_79ED0A52DF225781_GET_ISNEWBESTRECORD_OFFSET UNITYSDK_OFFSET(0x154BBA30)
#define CLASS_1_79ED0A52DF225781_METHOD_1_50658C4E86BBB859_OFFSET UNITYSDK_OFFSET(0x154BBA50)
#define CLASS_1_79ED0A52DF225781__CTOR_OFFSET UNITYSDK_OFFSET(0x154BBA40)

inline static constexpr unsigned int Class_1_79ED0A52DF225781_TypeDefinitionIndex = 80125;

class Class_1_79ED0A52DF225781 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* HDNGGBAIMPP; // 0x10
	::System::Boolean _HasReward_k__BackingField; // 0x18
	::System::Boolean _IsNewBestRecord_k__BackingField; // 0x19

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_79ED0A52DF225781__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_HasReward()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79ED0A52DF225781_GET_HASREWARD_OFFSET))(this);
	}

	::System::Boolean get_IsNewBestRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79ED0A52DF225781_GET_ISNEWBESTRECORD_OFFSET))(this);
	}

	::System::Int32 Method_1_50658C4E86BBB859(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_79ED0A52DF225781_METHOD_1_50658C4E86BBB859_OFFSET))(this, a1, a2);
	}
};
