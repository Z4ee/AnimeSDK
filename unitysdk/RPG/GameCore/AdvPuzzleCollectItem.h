#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVPUZZLECOLLECTITEM_METHOD_3_15E344992C5651E9_OFFSET UNITYSDK_OFFSET(0x16F3CD00)
#define RPG_GAMECORE_ADVPUZZLECOLLECTITEM_METHOD_3_960826E85A1C9C2F_OFFSET UNITYSDK_OFFSET(0x16F3CD80)
#define RPG_GAMECORE_ADVPUZZLECOLLECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3CD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPuzzleCollectItem_TypeDefinitionIndex = 20327;

	class AdvPuzzleCollectItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PuzzleID; // 0x18
		::System::UInt32 ItemType; // 0x1C
		::System::UInt32 ItemX; // 0x20
		::System::UInt32 ItemY; // 0x24
		::System::UInt32 ItemInitDirection; // 0x28
		::System::UInt32 ItemDirection; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPUZZLECOLLECTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15E344992C5651E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPuzzleCollectItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPuzzleCollectItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPUZZLECOLLECTITEM_METHOD_3_15E344992C5651E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_960826E85A1C9C2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPuzzleCollectItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPuzzleCollectItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPUZZLECOLLECTITEM_METHOD_3_960826E85A1C9C2F_OFFSET))(a1, a2);
		}
	};
}
