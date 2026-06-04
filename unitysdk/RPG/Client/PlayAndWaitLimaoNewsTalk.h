#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_A16C5D41AEAC317D_OFFSET UNITYSDK_OFFSET(0x193BC1F0)
#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_FE169169B2FB666C_OFFSET UNITYSDK_OFFSET(0x193BC270)
#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x193BC240)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayAndWaitLimaoNewsTalk_TypeDefinitionIndex = 9923;

	class PlayAndWaitLimaoNewsTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A16C5D41AEAC317D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_A16C5D41AEAC317D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE169169B2FB666C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_METHOD_4_FE169169B2FB666C_OFFSET))(a1, a2);
		}
	};
}
