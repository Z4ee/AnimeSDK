#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CUSTOMRP_FLAGMASK_ADDFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CC01720)
#define RPG_CUSTOMRP_FLAGMASK_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x3C34F80)
#define RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CC01700)
#define RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_OFFSET UNITYSDK_OFFSET(0x3C34F70)
#define RPG_CUSTOMRP_FLAGMASK_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CC016E0)
#define RPG_CUSTOMRP_FLAGMASK_HASFLAG_OFFSET UNITYSDK_OFFSET(0x3C34F60)
#define RPG_CUSTOMRP_FLAGMASK_RESETFLAG_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CUSTOMRP_FLAGMASK_RESET_OFFSET UNITYSDK_OFFSET(0x2F9E7F0)
#define RPG_CUSTOMRP_FLAGMASK_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CC016B0)
#define RPG_CUSTOMRP_FLAGMASK_SETFLAG_OFFSET UNITYSDK_OFFSET(0x3C34F40)
#define RPG_CUSTOMRP_FLAGMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CUSTOMRP_FLAGMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x2F9E7F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FlagMask_TypeDefinitionIndex = 37885;

	struct alignas(4) FlagMask
	{
		::System::UInt32 _Flag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void SetFlag(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_SETFLAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasFlag(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASFLAG_OFFSET))(this, a1);
		}

		::System::Boolean HasAllFlag(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_OFFSET))(this, a1);
		}

		::System::Void AddFlag(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_ADDFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_RESET_OFFSET))(this);
		}

		::System::Void ResetFlag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_RESETFLAG_OFFSET))(this, a1);
		}

		static ::System::Void SetFlag_1(::System::UInt32& a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_SETFLAG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddFlag_1(::System::UInt32& a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_ADDFLAG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasFlag_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASFLAG_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasAllFlag_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_1_OFFSET))(a1, a2);
		}
	};
}
