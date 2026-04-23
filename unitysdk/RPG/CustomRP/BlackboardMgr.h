#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_BLACKBOARDMGR_CREATECPP_OFFSET UNITYSDK_OFFSET(0x18103CF0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEDIRBLUR_OFFSET UNITYSDK_OFFSET(0x18103DD0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEDOF_OFFSET UNITYSDK_OFFSET(0x18103DB0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEGAUSSBLUR_OFFSET UNITYSDK_OFFSET(0x18103DF0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEMOTIONBLUR_OFFSET UNITYSDK_OFFSET(0x18103E10)
#define RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLERADIALBLUR_OFFSET UNITYSDK_OFFSET(0x18103E30)
#define RPG_CUSTOMRP_BLACKBOARDMGR_RELEASE_OFFSET UNITYSDK_OFFSET(0x18103DA0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEDIRBLUR_OFFSET UNITYSDK_OFFSET(0x18103DE0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEDOF_OFFSET UNITYSDK_OFFSET(0x18103DC0)
#define RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEGAUSSBLUR_OFFSET UNITYSDK_OFFSET(0x18103E00)
#define RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEMOTIONBLUR_OFFSET UNITYSDK_OFFSET(0x18103E20)
#define RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLERADIALBLUR_OFFSET UNITYSDK_OFFSET(0x18103E40)
#define RPG_CUSTOMRP_BLACKBOARDMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x18103D80)
#define RPG_CUSTOMRP_BLACKBOARDMGR__INITCPP_OFFSET UNITYSDK_OFFSET(0x18103D90)
#define RPG_CUSTOMRP_BLACKBOARDMGR__INITPROFILE_OFFSET UNITYSDK_OFFSET(0x18103E50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BlackboardMgr_TypeDefinitionIndex = 34918;

	class BlackboardMgr : public ::System::Object
	{
	public:
		::System::Boolean _GlobalEnableGaussBlur_k__BackingField; // 0x10
		::System::Boolean _GlobalEnableMotionBlur_k__BackingField; // 0x11
		::System::Boolean _GlobalEnableRadialBlur_k__BackingField; // 0x12
		::System::Boolean _GlobalEnableDirBlur_k__BackingField; // 0x13
		::System::Boolean _GlobalEnableDOF_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void CreateCPP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_CREATECPP_OFFSET))();
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_RELEASE_OFFSET))(this);
		}

		::System::Boolean get_GlobalEnableDOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEDOF_OFFSET))(this);
		}

		::System::Void set_GlobalEnableDOF(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEDOF_OFFSET))(this, value);
		}

		::System::Boolean get_GlobalEnableDirBlur()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEDIRBLUR_OFFSET))(this);
		}

		::System::Void set_GlobalEnableDirBlur(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEDIRBLUR_OFFSET))(this, value);
		}

		::System::Boolean get_GlobalEnableGaussBlur()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEGAUSSBLUR_OFFSET))(this);
		}

		::System::Void set_GlobalEnableGaussBlur(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEGAUSSBLUR_OFFSET))(this, value);
		}

		::System::Boolean get_GlobalEnableMotionBlur()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLEMOTIONBLUR_OFFSET))(this);
		}

		::System::Void set_GlobalEnableMotionBlur(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLEMOTIONBLUR_OFFSET))(this, value);
		}

		::System::Boolean get_GlobalEnableRadialBlur()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_GET_GLOBALENABLERADIALBLUR_OFFSET))(this);
		}

		::System::Void set_GlobalEnableRadialBlur(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR_SET_GLOBALENABLERADIALBLUR_OFFSET))(this, value);
		}

		::System::Void _InitProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR__INITPROFILE_OFFSET))(this);
		}

		::System::Void _InitCpp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLACKBOARDMGR__INITCPP_OFFSET))(this);
		}
	};
}
