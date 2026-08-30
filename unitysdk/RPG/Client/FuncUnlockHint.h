#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FuncUnlockPromptType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FuncUnlockHintRow; }
namespace System { class String; }

#define RPG_CLIENT_FUNCUNLOCKHINT_CREATE_OFFSET UNITYSDK_OFFSET(0xD0EC3E0)
#define RPG_CLIENT_FUNCUNLOCKHINT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD0EC790)
#define RPG_CLIENT_FUNCUNLOCKHINT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD0EC800)
#define RPG_CLIENT_FUNCUNLOCKHINT_GET_SUBTITLE_OFFSET UNITYSDK_OFFSET(0xD0EC720)
#define RPG_CLIENT_FUNCUNLOCKHINT_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD0EC6B0)
#define RPG_CLIENT_FUNCUNLOCKHINT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD0EC660)
#define RPG_CLIENT_FUNCUNLOCKHINT_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xD0EC610)
#define RPG_CLIENT_FUNCUNLOCKHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xD0EC850)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncUnlockHint_TypeDefinitionIndex = 68011;

	class FuncUnlockHint : public ::System::Object
	{
	public:
		::RPG::GameCore::FuncUnlockHintRow* _Meta; // 0x10

		::System::Void _ctor(::RPG::GameCore::FuncUnlockHintRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FuncUnlockHintRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_GET_UNLOCKID_OFFSET))(this);
		}

		::RPG::GameCore::FuncUnlockPromptType get_Type()
		{
			return ((::RPG::GameCore::FuncUnlockPromptType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_GET_SUBTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_GET_ICONPATH_OFFSET))(this);
		}

		static ::RPG::Client::FuncUnlockHint* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FuncUnlockHint*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKHINT_CREATE_OFFSET))(a1);
		}
	};
}
