#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x1D69E7F0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_AUTOENABLEDISABLE_OFFSET UNITYSDK_OFFSET(0x1D69E810)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_COUNTADJUSTMENTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1D69E870)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_INITIALIZECOUNTCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1D69E7D0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_MAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1D69E850)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_MINIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1D69E830)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_MINITEMS_OFFSET UNITYSDK_OFFSET(0x1D69E8B0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0x1D69E890)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1D69E8F0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1D69E8D0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D69E940)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1D69E910)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x1D69E800)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_AUTOENABLEDISABLE_OFFSET UNITYSDK_OFFSET(0x1D69E820)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_COUNTADJUSTMENTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1D69E880)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_INITIALIZECOUNTCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1D69E7E0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_MAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1D69E860)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_MINIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1D69E840)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_MINITEMS_OFFSET UNITYSDK_OFFSET(0x1D69E8C0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_PREWARM_OFFSET UNITYSDK_OFFSET(0x1D69E8A0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1D69E900)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1D69E8E0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D69D280)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D69E170)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E7A0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PoolSettings_TypeDefinitionIndex = 28350;

	class PoolSettings : public ::System::Object
	{
	public:
		::System::Boolean m_AutoCreate; // 0x10
		::System::Boolean m_AutoEnableDisable; // 0x11
		::System::Boolean Debug; // 0x12
		::System::Int32 minimumCount; // 0x14
		::System::Int32 maximumCount; // 0x18
		::System::Single countAdjustmentInterval; // 0x1C
		::System::Boolean initializeCountConstrained; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::DevTools::PoolSettings* src)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::PoolSettings*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS__CTOR_1_OFFSET))(this, src);
		}

		::System::Boolean get_InitializeCountConstrained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_INITIALIZECOUNTCONSTRAINED_OFFSET))(this);
		}

		::System::Void set_InitializeCountConstrained(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_INITIALIZECOUNTCONSTRAINED_OFFSET))(this, value);
		}

		::System::Boolean get_AutoCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_AUTOCREATE_OFFSET))(this);
		}

		::System::Void set_AutoCreate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_AUTOCREATE_OFFSET))(this, value);
		}

		::System::Boolean get_AutoEnableDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_AUTOENABLEDISABLE_OFFSET))(this);
		}

		::System::Void set_AutoEnableDisable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_AUTOENABLEDISABLE_OFFSET))(this, value);
		}

		::System::Int32 get_MinimumCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_MINIMUMCOUNT_OFFSET))(this);
		}

		::System::Void set_MinimumCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_MINIMUMCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_MaximumCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_MAXIMUMCOUNT_OFFSET))(this);
		}

		::System::Void set_MaximumCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_MAXIMUMCOUNT_OFFSET))(this, value);
		}

		::System::Single get_CountAdjustmentInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_COUNTADJUSTMENTINTERVAL_OFFSET))(this);
		}

		::System::Void set_CountAdjustmentInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_COUNTADJUSTMENTINTERVAL_OFFSET))(this, value);
		}

		::System::Boolean get_Prewarm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_PREWARM_OFFSET))(this);
		}

		::System::Void set_Prewarm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_PREWARM_OFFSET))(this, value);
		}

		::System::Int32 get_MinItems()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_MINITEMS_OFFSET))(this);
		}

		::System::Void set_MinItems(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_MINITEMS_OFFSET))(this, value);
		}

		::System::Int32 get_Threshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_THRESHOLD_OFFSET))(this);
		}

		::System::Void set_Threshold(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_THRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SET_SPEED_OFFSET))(this, value);
		}

		::System::Void SetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_SETTODEFAULT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLSETTINGS_VALIDATE_OFFSET))(this);
		}
	};
}
