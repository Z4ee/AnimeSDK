#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMPAIR_METHOD_2_9ABC19BD93FF9C73_OFFSET UNITYSDK_OFFSET(0x19CEF5E0)
#define RPG_GAMECORE_BYCOMPAREITEMPAIR_METHOD_2_ED80A333B12D7CB3_OFFSET UNITYSDK_OFFSET(0x19CEF4B0)
#define RPG_GAMECORE_BYCOMPAREITEMPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEF5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemPair_TypeDefinitionIndex = 20296;

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

		static ::System::Void Method_2_9ABC19BD93FF9C73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemPair*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMPAIR_METHOD_2_9ABC19BD93FF9C73_OFFSET))(a1, a2);
		}
	};
}
