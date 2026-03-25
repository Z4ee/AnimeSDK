#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenHintWeightConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMEMAINCONFIG_METHOD_2_6BE199BAACB19B1C_OFFSET UNITYSDK_OFFSET(0x172ACCD0)
#define RPG_GAMECORE_HIPPLENGAMEMAINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172AD490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameMainConfig_TypeDefinitionIndex = 15367;

	class HipplenGameMainConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AIConfigPath; // 0x10
		::System::String* StartAnchorName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* AreaPath; // 0x28
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 IdleMotionID; // 0x34
		::Il2CppArray<::RPG::GameCore::HipplenHintWeightConfig*>* ChimeraGameHintWeightConfigs; // 0x38
		::System::Single AutoMovingGoodsInterval; // 0x40
		::System::Single AutoPickingGoodsInterval; // 0x44
		::System::Single AutoPickingGoodsWaitingBubbleRatio; // 0x48
		::System::String* ShowerBubbleEffectPath; // 0x50
		::System::String* HipplenUniqueName; // 0x58
		::System::String* QuizChimeraUniqueName; // 0x60
		::System::String* CountingChimeraGameJsonPath; // 0x68
		::System::String* MovingGoodsGameJsonPath; // 0x70
		::System::String* PickingGoodsGameJsonPath; // 0x78
		::RPG::MVector3 NPCBubbleDefaultOffset; // 0x80
		::System::String* CustomHoyoTagName; // 0x90
		::System::String* ChimeraStoryCharacterID; // 0x98
		::System::String* QuizChimeraStoryCharacterID; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMainPage; // 0xA8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRoutinePage; // 0xB0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeExam; // 0xB8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettlePage; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEMAINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6BE199BAACB19B1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameMainConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameMainConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEMAINCONFIG_METHOD_2_6BE199BAACB19B1C_OFFSET))(a1, a2);
		}
	};
}
