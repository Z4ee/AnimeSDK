#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTeamTalkEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTeamTalkRow; }

#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0xB6C44F0)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xB6C5060)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKCONTENT_OFFSET UNITYSDK_OFFSET(0xB6C4F80)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKID_OFFSET UNITYSDK_OFFSET(0xB6C4F60)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB6C5000)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_SET_TALKID_OFFSET UNITYSDK_OFFSET(0xB6C4F70)
#define RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamTalkRowWrapper_TypeDefinitionIndex = 59386;

	class ChimeraTeamTalkRowWrapper : public ::System::Object
	{
	public:
		::System::UInt32 _TalkID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraTeamTalkRowWrapper* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraTeamTalkRowWrapper*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_TalkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_GET_TALKID_OFFSET))(this);
		}

		::System::Void set_TalkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMTALKROWWRAPPER_SET_TALKID_OFFSET))(this, a1);
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
