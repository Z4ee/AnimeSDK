#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueDLCBlockType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECHESTGRIDITEM_METHOD_2_C2566674CAB44A5E_OFFSET UNITYSDK_OFFSET(0x19B199A0)
#define RPG_GAMECORE_ROGUECHESTGRIDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestGridItem_TypeDefinitionIndex = 17019;

	class RogueChestGridItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PosX; // 0x10
		::System::UInt32 PosY; // 0x14
		::Il2CppArray<::RPG::GameCore::RogueDLCBlockType>* BlockTypeList; // 0x18
		::System::Boolean ExportToJson; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTGRIDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C2566674CAB44A5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueChestGridItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueChestGridItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTGRIDITEM_METHOD_2_C2566674CAB44A5E_OFFSET))(a1, a2);
		}
	};
}
