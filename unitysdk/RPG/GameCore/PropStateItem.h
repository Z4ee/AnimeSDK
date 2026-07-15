#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPSTATEITEM_METHOD_2_19B7F005AC2C531F_OFFSET UNITYSDK_OFFSET(0x1B9A42A0)
#define RPG_GAMECORE_PROPSTATEITEM_METHOD_2_6F11A4C72F237863_OFFSET UNITYSDK_OFFSET(0x1B9A4090)
#define RPG_GAMECORE_PROPSTATEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A4290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateItem_TypeDefinitionIndex = 20405;

	class PropStateItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* PropKey; // 0x10
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::RPG::GameCore::PropState TargetState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6F11A4C72F237863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEITEM_METHOD_2_6F11A4C72F237863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_19B7F005AC2C531F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropStateItem*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropStateItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEITEM_METHOD_2_19B7F005AC2C531F_OFFSET))(a1, a2);
		}
	};
}
