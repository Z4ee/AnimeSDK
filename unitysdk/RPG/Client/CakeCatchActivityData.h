#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9EC44D0)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9EC4280)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC4270)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x9EC4630)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET UNITYSDK_OFFSET(0x9EC4690)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9EC4960)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9EC48F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchActivityData_TypeDefinitionIndex = 56811;

	class CakeCatchActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET))(this, panelID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsCatGodCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET))(this);
		}

		::System::Boolean _IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}
	};
}
