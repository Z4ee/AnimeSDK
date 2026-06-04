#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB460AD0)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB460920)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB460910)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xB460C30)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET UNITYSDK_OFFSET(0xB460C90)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB460D80)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB460D20)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchActivityData_TypeDefinitionIndex = 57597;

	class CakeCatchActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET))(this, a1);
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
