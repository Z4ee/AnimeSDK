#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DESTROYTRIALPLAYER_METHOD_3_7C4E76762F1CEF60_OFFSET UNITYSDK_OFFSET(0x17155050)
#define RPG_GAMECORE_DESTROYTRIALPLAYER_METHOD_3_E37A690631833D00_OFFSET UNITYSDK_OFFSET(0x17154FC0)
#define RPG_GAMECORE_DESTROYTRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x17155020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyTrialPlayer_TypeDefinitionIndex = 19768;

	class DestroyTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYTRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E37A690631833D00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYTRIALPLAYER_METHOD_3_E37A690631833D00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C4E76762F1CEF60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYTRIALPLAYER_METHOD_3_7C4E76762F1CEF60_OFFSET))(a1, a2);
		}
	};
}
