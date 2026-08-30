#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WheelItemType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSELECTWHEELITEM_METHOD_3_B783F9EFD0A422E6_OFFSET UNITYSDK_OFFSET(0x1D6AC2B0)
#define RPG_GAMECORE_WAITSELECTWHEELITEM_METHOD_3_E10B459EB601228B_OFFSET UNITYSDK_OFFSET(0x1D6AC2F0)
#define RPG_GAMECORE_WAITSELECTWHEELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSelectWheelItem_TypeDefinitionIndex = 24002;

	class WaitSelectWheelItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WheelItemType TutorialGuideWheelItem; // 0x18
		::RPG::GameCore::ShortCutWheelGotoType TutorialGuideLittleWheelItem; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSELECTWHEELITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B783F9EFD0A422E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSelectWheelItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSelectWheelItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSELECTWHEELITEM_METHOD_3_B783F9EFD0A422E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E10B459EB601228B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSelectWheelItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSelectWheelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSELECTWHEELITEM_METHOD_3_E10B459EB601228B_OFFSET))(a1, a2);
		}
	};
}
