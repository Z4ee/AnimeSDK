#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class DynamicStringList; }

#define RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_METHOD_3_0936BEABD4EE33B0_OFFSET UNITYSDK_OFFSET(0x1D9A52A0)
#define RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_METHOD_3_EEB938451F0CEF84_OFFSET UNITYSDK_OFFSET(0x1D9A5230)
#define RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectionPlayBubbleTalk_TypeDefinitionIndex = 20172;

	class CollectionPlayBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BubbleTalkInfo* BubbleTemplate; // 0x18
		::RPG::GameCore::DynamicStringList* TalkSentenceIdList; // 0x20
		::RPG::GameCore::DynamicStringList* ReplaceParamList; // 0x28
		::RPG::GameCore::BubbleTalkType BubbleTalkType; // 0x30
		::System::Boolean IsLoop; // 0x34
		::System::Single LoopInterval; // 0x38
		::System::Boolean InstantFinish; // 0x3C
		::System::UInt32 UniqueID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EEB938451F0CEF84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectionPlayBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectionPlayBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_METHOD_3_EEB938451F0CEF84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0936BEABD4EE33B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectionPlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectionPlayBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYBUBBLETALK_METHOD_3_0936BEABD4EE33B0_OFFSET))(a1, a2);
		}
	};
}
