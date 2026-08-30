#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_C055C8D412427A27_OFFSET UNITYSDK_OFFSET(0x1D313000)
#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_FE169169B2FB666C_OFFSET UNITYSDK_OFFSET(0x1D313040)
#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D313030)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayAndWaitLimaoNewsTalk_TypeDefinitionIndex = 10226;

	class PlayAndWaitLimaoNewsTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C055C8D412427A27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_C055C8D412427A27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE169169B2FB666C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_FE169169B2FB666C_OFFSET))(a1, a2);
		}
	};
}
