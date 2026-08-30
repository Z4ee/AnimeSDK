#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartySimpleTalkBgData; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xE277A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_BGDATA_OFFSET UNITYSDK_OFFSET(0xE277B80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_NEEDLOADAVATARPREFAB_OFFSET UNITYSDK_OFFSET(0xE277B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_REPLACEPARAMS_OFFSET UNITYSDK_OFFSET(0xE277BA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0xE277B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_SET_BGDATA_OFFSET UNITYSDK_OFFSET(0xE277B90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_SET_REPLACEPARAMS_OFFSET UNITYSDK_OFFSET(0xE277BB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_SET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0xE277B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE277990)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySimpleTalkInfo_TypeDefinitionIndex = 74222;

	class TrainPartySimpleTalkInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _ReplaceParams_k__BackingField; // 0x10
		::RPG::Client::TrainParty::TrainPartySimpleTalkBgData* _BgData_k__BackingField; // 0x18
		::RPG::Client::TextID _TalkContent_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::TrainParty::TrainPartySimpleTalkInfo* Create(::System::UInt32 a1, ::RPG::Client::TextID a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::RPG::Client::TrainParty::TrainPartySimpleTalkInfo*(*)(::System::UInt32, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::TextID get_TalkContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_TALKCONTENT_OFFSET))(this);
		}

		::System::Void set_TalkContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_SET_TALKCONTENT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedLoadAvatarPrefab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_NEEDLOADAVATARPREFAB_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartySimpleTalkBgData* get_BgData()
		{
			return ((::RPG::Client::TrainParty::TrainPartySimpleTalkBgData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_BGDATA_OFFSET))(this);
		}

		::System::Void set_BgData(::RPG::Client::TrainParty::TrainPartySimpleTalkBgData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySimpleTalkBgData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_SET_BGDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_ReplaceParams()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_GET_REPLACEPARAMS_OFFSET))(this);
		}

		::System::Void set_ReplaceParams(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKINFO_SET_REPLACEPARAMS_OFFSET))(this, a1);
		}
	};
}
