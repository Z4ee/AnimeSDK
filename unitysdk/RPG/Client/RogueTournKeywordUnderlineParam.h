#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueKeywordData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA39B080)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xA39AFC0)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA39AF90)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA39AED0)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA39AFB0)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA39AF50)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA39AEC0)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA39B100)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournKeywordUnderlineParam_TypeDefinitionIndex = 55375;

	class RogueTournKeywordUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueKeywordData* _Keyword; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordData* get_Keyword()
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_KEYWORD_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournKeywordUnderlineParam* Create(::RPG::Client::RogueKeywordData* keyword)
		{
			return ((::RPG::Client::RogueTournKeywordUnderlineParam*(*)(::RPG::Client::RogueKeywordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_CREATE_OFFSET))(keyword);
		}
	};
}
