#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWWORLDSHOP_METHOD_3_10E6634EAB57D6D4_OFFSET UNITYSDK_OFFSET(0x17708040)
#define RPG_GAMECORE_SHOWWORLDSHOP_METHOD_3_BE8191741A29BB63_OFFSET UNITYSDK_OFFSET(0x177080C0)
#define RPG_GAMECORE_SHOWWORLDSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x17708090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWorldShop_TypeDefinitionIndex = 19227;

	class ShowWorldShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ShopType; // 0x18
		::System::UInt32 ShopID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10E6634EAB57D6D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWorldShop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWorldShop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP_METHOD_3_10E6634EAB57D6D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE8191741A29BB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowWorldShop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowWorldShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWORLDSHOP_METHOD_3_BE8191741A29BB63_OFFSET))(a1, a2);
		}
	};
}
