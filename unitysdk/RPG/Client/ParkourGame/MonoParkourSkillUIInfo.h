#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURSKILLUIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F06500)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourSkillUIInfo_TypeDefinitionIndex = 60825;

	class MonoParkourSkillUIInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* Image; // 0x18
		::Il2CppArray<::UnityEngine::Sprite*>* Sprites; // 0x20
		::RPG::Client::LocalizedText* Text; // 0x28
		::Il2CppArray<::System::String*>* Strings; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURSKILLUIINFO__CTOR_OFFSET))(this);
		}
	};
}
