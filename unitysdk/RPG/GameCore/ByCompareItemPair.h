#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREITEMPAIR_METHOD_2_ED80A333B12D7CB3_OFFSET UNITYSDK_OFFSET(0x1700D2A0)
#define RPG_GAMECORE_BYCOMPAREITEMPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1700D3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemPair_TypeDefinitionIndex = 19393;

	class ByCompareItemPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ED80A333B12D7CB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMPAIR_METHOD_2_ED80A333B12D7CB3_OFFSET))(a1, a2);
		}
	};
}
