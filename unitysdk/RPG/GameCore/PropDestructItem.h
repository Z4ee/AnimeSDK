#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPDESTRUCTITEM_METHOD_2_0D0FA21AF5BF8B02_OFFSET UNITYSDK_OFFSET(0x1D3643A0)
#define RPG_GAMECORE_PROPDESTRUCTITEM_METHOD_2_C853717DEE2015B8_OFFSET UNITYSDK_OFFSET(0x1D364180)
#define RPG_GAMECORE_PROPDESTRUCTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D364390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestructItem_TypeDefinitionIndex = 20958;

	class PropDestructItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* PropKey; // 0x10
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::System::Boolean IsDestructed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C853717DEE2015B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestructItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestructItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTITEM_METHOD_2_C853717DEE2015B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0D0FA21AF5BF8B02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropDestructItem*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropDestructItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTITEM_METHOD_2_0D0FA21AF5BF8B02_OFFSET))(a1, a2);
		}
	};
}
