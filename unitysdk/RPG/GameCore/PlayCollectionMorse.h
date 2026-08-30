#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYCOLLECTIONMORSE_METHOD_3_5E3FD75EA286338F_OFFSET UNITYSDK_OFFSET(0x1D347B10)
#define RPG_GAMECORE_PLAYCOLLECTIONMORSE_METHOD_3_8BD8A254E2477C09_OFFSET UNITYSDK_OFFSET(0x1D347AD0)
#define RPG_GAMECORE_PLAYCOLLECTIONMORSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D347B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayCollectionMorse_TypeDefinitionIndex = 20175;

	class PlayCollectionMorse : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* StartEvent; // 0x20
		::RPG::GameCore::DynamicString* StopEvent; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PlayerMorse; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStop; // 0x38
		::System::Single MinTime; // 0x40
		::System::Single MaxTime; // 0x44
		::System::Single BubbleSkipTime; // 0x48
		::RPG::GameCore::DynamicStringList* TalkSentenceIdList; // 0x50
		::System::Single GapMinTime; // 0x58
		::System::Single GapMaxTime; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCOLLECTIONMORSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BD8A254E2477C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayCollectionMorse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayCollectionMorse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCOLLECTIONMORSE_METHOD_3_8BD8A254E2477C09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E3FD75EA286338F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayCollectionMorse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayCollectionMorse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCOLLECTIONMORSE_METHOD_3_5E3FD75EA286338F_OFFSET))(a1, a2);
		}
	};
}
