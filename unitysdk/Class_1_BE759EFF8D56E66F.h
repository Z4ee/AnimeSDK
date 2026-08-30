#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersPerformanceRow; }

#define CLASS_1_BE759EFF8D56E66F_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17241510)
#define CLASS_1_BE759EFF8D56E66F_GET_ISFIRSTDRINKONDAY_OFFSET UNITYSDK_OFFSET(0x17241530)
#define CLASS_1_BE759EFF8D56E66F_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x17241550)
#define CLASS_1_BE759EFF8D56E66F_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17241520)
#define CLASS_1_BE759EFF8D56E66F_SET_ISFIRSTDRINKONDAY_OFFSET UNITYSDK_OFFSET(0x17241540)
#define CLASS_1_BE759EFF8D56E66F_SET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x17241560)
#define CLASS_1_BE759EFF8D56E66F__CTOR_OFFSET UNITYSDK_OFFSET(0x172414E0)

inline static constexpr unsigned int Class_1_BE759EFF8D56E66F_TypeDefinitionIndex = 63686;

class Class_1_BE759EFF8D56E66F : public ::System::Object
{
public:
	::System::UInt32 _GroupId_k__BackingField; // 0x10
	::System::Boolean _IsFirstDrinkOnDay_k__BackingField; // 0x14
	::System::UInt32 _PerformanceId_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::DrinkMakerCheersPerformanceRow* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_GroupId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFirstDrinkOnDay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_GET_ISFIRSTDRINKONDAY_OFFSET))(this);
	}

	::System::Void set_IsFirstDrinkOnDay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_SET_ISFIRSTDRINKONDAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_PerformanceId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_GET_PERFORMANCEID_OFFSET))(this);
	}

	::System::Void set_PerformanceId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE759EFF8D56E66F_SET_PERFORMANCEID_OFFSET))(this, a1);
	}
};
