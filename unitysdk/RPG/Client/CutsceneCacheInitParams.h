#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CUTSCENECACHEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x9442140)

namespace RPG::Client
{
	inline static constexpr unsigned int CutsceneCacheInitParams_TypeDefinitionIndex = 48313;

	class CutsceneCacheInitParams : public ::System::Object
	{
	public:
		::System::String* CutsceneName; // 0x10
		::RPG::GameCore::GenderType HeroGender; // 0x18

		::System::Void _ctor(::System::String* cutsceneName, ::RPG::GameCore::GenderType heroGender)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUTSCENECACHEINITPARAMS__CTOR_OFFSET))(this, cutsceneName, heroGender);
		}
	};
}
