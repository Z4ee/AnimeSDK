#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_ADDMENUITEM_METHOD_3_C86D5AAF1AAF8C66_OFFSET UNITYSDK_OFFSET(0x1D6A2400)
#define RPG_GAMECORE_ADDMENUITEM_METHOD_3_CD6D5387EBB33FA8_OFFSET UNITYSDK_OFFSET(0x1D6A22A0)
#define RPG_GAMECORE_ADDMENUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A23F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMenuItem_TypeDefinitionIndex = 20882;

	class AddMenuItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* MenuIconType; // 0x18
		::System::UInt32 MenuItemID; // 0x20
		::RPG::Client::TextID MenuItemTextID; // 0x28
		::System::String* DialoguePath; // 0x38
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x40
		::System::UInt32 PerformanceID; // 0x44
		::System::Boolean Important; // 0x48
		::System::UInt32 ExtraInfo; // 0x4C
		::System::UInt32 MissionID; // 0x50
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMENUITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD6D5387EBB33FA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMenuItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMenuItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMENUITEM_METHOD_3_CD6D5387EBB33FA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C86D5AAF1AAF8C66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMenuItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMENUITEM_METHOD_3_C86D5AAF1AAF8C66_OFFSET))(a1, a2);
		}
	};
}
