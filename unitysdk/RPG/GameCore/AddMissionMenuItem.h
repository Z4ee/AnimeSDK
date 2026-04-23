#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDMISSIONMENUITEM_METHOD_3_6EBA08D46D0F51D2_OFFSET UNITYSDK_OFFSET(0x186410A0)
#define RPG_GAMECORE_ADDMISSIONMENUITEM_METHOD_3_D6691F3D56C5DFED_OFFSET UNITYSDK_OFFSET(0x18641010)
#define RPG_GAMECORE_ADDMISSIONMENUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18641070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMissionMenuItem_TypeDefinitionIndex = 20105;

	class AddMissionMenuItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* MenuIconType; // 0x20
		::System::UInt32 MenuItemID; // 0x28
		::RPG::Client::TextID MenuItemTextID; // 0x30
		::System::String* DialoguePath; // 0x40
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x48
		::System::UInt32 PerformanceID; // 0x4C
		::System::Boolean Important; // 0x50
		::System::UInt32 ExtraInfo; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMISSIONMENUITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6691F3D56C5DFED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMissionMenuItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMissionMenuItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMISSIONMENUITEM_METHOD_3_D6691F3D56C5DFED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6EBA08D46D0F51D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMissionMenuItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMissionMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMISSIONMENUITEM_METHOD_3_6EBA08D46D0F51D2_OFFSET))(a1, a2);
		}
	};
}
