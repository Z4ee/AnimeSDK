#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_3976BC2F9AD70599_OFFSET UNITYSDK_OFFSET(0x1D4BE240)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_5529FAAE4890EDB6_OFFSET UNITYSDK_OFFSET(0x1D4BE270)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_EFF4598C53629F23_OFFSET UNITYSDK_OFFSET(0x1D4BE0C0)
#define RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_F1799C47B8444EAA_OFFSET UNITYSDK_OFFSET(0x1D4BE080)
#define RPG_GAMECORE_ST_BYALERTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BE0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAlertLevel_TypeDefinitionIndex = 19836;

	class ST_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F1799C47B8444EAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_F1799C47B8444EAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFF4598C53629F23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_EFF4598C53629F23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3976BC2F9AD70599(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_3976BC2F9AD70599_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5529FAAE4890EDB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_METHOD_4_5529FAAE4890EDB6_OFFSET))(a1, a2);
		}
	};
}
