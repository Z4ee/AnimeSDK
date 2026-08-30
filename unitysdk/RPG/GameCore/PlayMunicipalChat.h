#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonList; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYMUNICIPALCHAT_METHOD_3_57FC0E0339F82884_OFFSET UNITYSDK_OFFSET(0x1D3492C0)
#define RPG_GAMECORE_PLAYMUNICIPALCHAT_METHOD_3_D2CA1F4389B4ABD9_OFFSET UNITYSDK_OFFSET(0x1D349280)
#define RPG_GAMECORE_PLAYMUNICIPALCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3492B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMunicipalChat_TypeDefinitionIndex = 20530;

	class PlayMunicipalChat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NewMunicipalChatConfigPath; // 0x18
		::RPG::GameCore::DynamicString* NewMunicipalChatConfigPathDS; // 0x20
		::RPG::GameCore::DynamicJsonList* NewMunicipalChatEntityInfos; // 0x28
		::System::String* MunicipalChatName; // 0x30
		::RPG::GameCore::DynamicString* MunicipalChatNameDS; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUNICIPALCHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2CA1F4389B4ABD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMunicipalChat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMunicipalChat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUNICIPALCHAT_METHOD_3_D2CA1F4389B4ABD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57FC0E0339F82884(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUNICIPALCHAT_METHOD_3_57FC0E0339F82884_OFFSET))(a1, a2);
		}
	};
}
