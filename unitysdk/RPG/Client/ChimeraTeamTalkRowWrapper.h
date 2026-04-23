#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTeamTalkEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTeamTalkRow; }

#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0xA084E80)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA0859E0)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0xA085900)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKID_OFFSET UNITYSDK_OFFSET(0xA0858E0)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA085980)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_SET_TALKID_OFFSET UNITYSDK_OFFSET(0xA0858F0)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0858D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamTalkRowWrapper_TypeDefinitionIndex = 58456;

	class ChimeraTeamTalkRowWrapper : public ::System::Object
	{
	public:
		::System::UInt32 _TalkID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraTeamTalkRowWrapper* Create(::System::UInt32 talkID)
		{
			return ((::RPG::Client::ChimeraTeamTalkRowWrapper*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_CREATE_OFFSET))(talkID);
		}

		::System::UInt32 get_TalkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKID_OFFSET))(this);
		}

		::System::Void set_TalkID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_SET_TALKID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TalkContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKCONTENT_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTeamTalkEffectType get_EffectType()
		{
			return ((::RPG::GameCore::ChimeraTeamTalkEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_EFFECTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTeamTalkRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraTeamTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET__ROW_OFFSET))(this);
		}
	};
}
