#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_METHOD_3_346CAAA4BB71CA1E_OFFSET UNITYSDK_OFFSET(0x1A404D00)
#define RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_METHOD_3_943960C470B6D444_OFFSET UNITYSDK_OFFSET(0x1A404CA0)
#define RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A404CF0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int PlayVoiceStepConfig_TypeDefinitionIndex = 24113;

	class PlayVoiceStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SentenceIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_943960C470B6D444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_METHOD_3_943960C470B6D444_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_346CAAA4BB71CA1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::PlayVoiceStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_METHOD_3_346CAAA4BB71CA1E_OFFSET))(a1, a2);
		}
	};
}
