#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_128;
class Class_0_16E4307DCC419505_1489;
class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_08D77EF97AF2D399_GET_AVAILABLECHIPMOLDS_OFFSET UNITYSDK_OFFSET(0xB2707F0)
#define CLASS_1_08D77EF97AF2D399_GET_FILTERSESSION_OFFSET UNITYSDK_OFFSET(0xB270800)
#define CLASS_1_08D77EF97AF2D399_GET_REQUIREMENTCONFIG_OFFSET UNITYSDK_OFFSET(0xB2707E0)
#define CLASS_1_08D77EF97AF2D399__CTOR_OFFSET UNITYSDK_OFFSET(0xB270780)

inline static constexpr unsigned int Class_1_08D77EF97AF2D399_TypeDefinitionIndex = 79528;

class Class_1_08D77EF97AF2D399 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_128* _RequirementConfig_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1489* _FilterSession_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* _AvailableChipMolds_k__BackingField; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_128* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_128*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>*))((::PBYTE)hIl2Cpp + CLASS_1_08D77EF97AF2D399__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_128* get_RequirementConfig()
	{
		return ((::Class_0_16E4307DCC419505_128*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08D77EF97AF2D399_GET_REQUIREMENTCONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* get_AvailableChipMolds()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08D77EF97AF2D399_GET_AVAILABLECHIPMOLDS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1489* get_FilterSession()
	{
		return ((::Class_0_16E4307DCC419505_1489*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08D77EF97AF2D399_GET_FILTERSESSION_OFFSET))(this);
	}
};
