#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WheelItemType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BLOCKWHEELITEM_METHOD_3_67F375E0C16935BF_OFFSET UNITYSDK_OFFSET(0x1A401140)
#define RPG_GAMECORE_BLOCKWHEELITEM_METHOD_3_8FB1F95CA9EB9622_OFFSET UNITYSDK_OFFSET(0x1A401100)
#define RPG_GAMECORE_BLOCKWHEELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A401130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockWheelItem_TypeDefinitionIndex = 23421;

	class BlockWheelItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::WheelItemType TutorialGuideWheelItem; // 0x1C
		::RPG::GameCore::ShortCutWheelGotoType TutorialGuideLittleWheelItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKWHEELITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FB1F95CA9EB9622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockWheelItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockWheelItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKWHEELITEM_METHOD_3_8FB1F95CA9EB9622_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67F375E0C16935BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockWheelItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockWheelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKWHEELITEM_METHOD_3_67F375E0C16935BF_OFFSET))(a1, a2);
		}
	};
}
