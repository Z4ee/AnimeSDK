#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_METHOD_3_11EE0A141A7CD021_OFFSET UNITYSDK_OFFSET(0x1D309920)
#define RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_METHOD_3_743EBDA6E21BB303_OFFSET UNITYSDK_OFFSET(0x1D309880)
#define RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3098E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsLimaoIconOptionTalkInfo_TypeDefinitionIndex = 10230;

	class LimaoNewsLimaoIconOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::Il2CppArray<::System::UInt32>* UserIDList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743EBDA6E21BB303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_METHOD_3_743EBDA6E21BB303_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11EE0A141A7CD021(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsLimaoIconOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSLIMAOICONOPTIONTALKINFO_METHOD_3_11EE0A141A7CD021_OFFSET))(a1, a2);
		}
	};
}
