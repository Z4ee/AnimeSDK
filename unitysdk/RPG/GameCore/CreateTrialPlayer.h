#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_37157B4A27469102_OFFSET UNITYSDK_OFFSET(0x19685E30)
#define RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_935B4D0CD84E5342_OFFSET UNITYSDK_OFFSET(0x19685DA0)
#define RPG_GAMECORE_CREATETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19685E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateTrialPlayer_TypeDefinitionIndex = 20386;

	class CreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_935B4D0CD84E5342(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_935B4D0CD84E5342_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37157B4A27469102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_37157B4A27469102_OFFSET))(a1, a2);
		}
	};
}
