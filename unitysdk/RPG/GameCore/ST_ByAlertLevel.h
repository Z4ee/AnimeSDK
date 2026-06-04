#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_4B3DD297E60427E9_OFFSET UNITYSDK_OFFSET(0x19C0F830)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_6FED1BC65BD3B40D_OFFSET UNITYSDK_OFFSET(0x19C0F560)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_CCCDCB399DE10870_OFFSET UNITYSDK_OFFSET(0x19C0F7B0)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_EFF4598C53629F23_OFFSET UNITYSDK_OFFSET(0x19C0F630)
#define RPG_GAMECORE_ST_BYALERTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0F5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAlertLevel_TypeDefinitionIndex = 18945;

	class ST_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6FED1BC65BD3B40D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_6FED1BC65BD3B40D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFF4598C53629F23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_EFF4598C53629F23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCCDCB399DE10870(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_CCCDCB399DE10870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B3DD297E60427E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_4B3DD297E60427E9_OFFSET))(a1, a2);
		}
	};
}
