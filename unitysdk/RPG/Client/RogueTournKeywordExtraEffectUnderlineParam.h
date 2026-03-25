#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueKeywordData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA39AE30)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xA39AC60)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA39AC30)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA39AB70)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA39AC50)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA39ABF0)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA39AB60)
#define RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA39AEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournKeywordExtraEffectUnderlineParam_TypeDefinitionIndex = 55376;

	class RogueTournKeywordExtraEffectUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueKeywordData* _Keyword; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordData* get_Keyword()
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_GET_KEYWORD_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournKeywordExtraEffectUnderlineParam* Create(::RPG::Client::RogueKeywordData* keyword)
		{
			return ((::RPG::Client::RogueTournKeywordExtraEffectUnderlineParam*(*)(::RPG::Client::RogueKeywordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDEXTRAEFFECTUNDERLINEPARAM_CREATE_OFFSET))(keyword);
		}
	};
}
