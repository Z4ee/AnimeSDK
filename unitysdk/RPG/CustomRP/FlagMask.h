#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CUSTOMRP_FLAGMASK_ADDFLAG_1_OFFSET UNITYSDK_OFFSET(0x1813D000)
#define RPG_CUSTOMRP_FLAGMASK_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x22B8F00)
#define RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_1_OFFSET UNITYSDK_OFFSET(0x1813CFE0)
#define RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_OFFSET UNITYSDK_OFFSET(0x22B8EF0)
#define RPG_CUSTOMRP_FLAGMASK_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x1813CFC0)
#define RPG_CUSTOMRP_FLAGMASK_HASFLAG_OFFSET UNITYSDK_OFFSET(0x22B8EE0)
#define RPG_CUSTOMRP_FLAGMASK_RESETFLAG_OFFSET UNITYSDK_OFFSET(0x299E0)
#define RPG_CUSTOMRP_FLAGMASK_RESET_OFFSET UNITYSDK_OFFSET(0x16697D0)
#define RPG_CUSTOMRP_FLAGMASK_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x1813CF90)
#define RPG_CUSTOMRP_FLAGMASK_SETFLAG_OFFSET UNITYSDK_OFFSET(0x22B8EC0)
#define RPG_CUSTOMRP_FLAGMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x299E0)
#define RPG_CUSTOMRP_FLAGMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x16697D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FlagMask_TypeDefinitionIndex = 35252;

	struct alignas(4) FlagMask
	{
		::System::UInt32 _Flag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 f)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK__CTOR_1_OFFSET))(this, f);
		}

		::System::Void SetFlag(::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_SETFLAG_OFFSET))(this, f, enable);
		}

		::System::Boolean HasFlag(::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASFLAG_OFFSET))(this, f);
		}

		::System::Boolean HasAllFlag(::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_OFFSET))(this, f);
		}

		::System::Void AddFlag(::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_ADDFLAG_OFFSET))(this, f, enable);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_RESET_OFFSET))(this);
		}

		::System::Void ResetFlag(::System::UInt32 f)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_RESETFLAG_OFFSET))(this, f);
		}

		static ::System::Void SetFlag_1(::System::UInt32& srcFlag, ::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_SETFLAG_1_OFFSET))(srcFlag, f, enable);
		}

		static ::System::Void AddFlag_1(::System::UInt32& srcFlag, ::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_ADDFLAG_1_OFFSET))(srcFlag, f, enable);
		}

		static ::System::Boolean HasFlag_1(::System::UInt32 srcFlag, ::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASFLAG_1_OFFSET))(srcFlag, f);
		}

		static ::System::Boolean HasAllFlag_1(::System::UInt32 srcFlag, ::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_1_OFFSET))(srcFlag, f);
		}
	};
}
