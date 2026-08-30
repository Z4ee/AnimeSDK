#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM_METHOD_2_0BE6D4350F150E1B_OFFSET UNITYSDK_OFFSET(0x1D9BB7D0)
#define RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BB940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CountToModifierMapRangeItem_TypeDefinitionIndex = 15891;

	class CountToModifierMapRangeItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MinValue; // 0x10
		::System::UInt32 MaxValue; // 0x14
		::System::UInt32 ModifierID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0BE6D4350F150E1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CountToModifierMapRangeItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CountToModifierMapRangeItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM_METHOD_2_0BE6D4350F150E1B_OFFSET))(a1, a2);
		}
	};
}
