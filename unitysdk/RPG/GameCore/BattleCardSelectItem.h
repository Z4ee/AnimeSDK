#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLECARDSELECTITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2F1410)
#define RPG_GAMECORE_BATTLECARDSELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F15D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCardSelectItem_TypeDefinitionIndex = 22293;

	class BattleCardSelectItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* UseTarget; // 0x10
		::RPG::GameCore::DynamicFloat* MazeBuffID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* InjectDynamicValues; // 0x20
		::System::UInt32 EntityRuntimeID; // 0x28
		::System::UInt32 RealMazeBuffID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDSELECTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleCardSelectItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCardSelectItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDSELECTITEM_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
