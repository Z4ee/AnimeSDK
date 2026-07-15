#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_238357E57DFDB2BA_OFFSET UNITYSDK_OFFSET(0x1B2AF600)
#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_2933C4A8C00EC582_OFFSET UNITYSDK_OFFSET(0x1B2AF840)
#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_A2031675BF4F6A77_OFFSET UNITYSDK_OFFSET(0x1B2AF640)
#define RPG_GAMECORE_BYNPCSTATUS_METHOD_4_BBA89CB53E45618C_OFFSET UNITYSDK_OFFSET(0x1B2AF870)
#define RPG_GAMECORE_BYNPCSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AF630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByNPCStatus_TypeDefinitionIndex = 19262;

	class ByNPCStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::NPCStatus NPCStatus; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_238357E57DFDB2BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNPCStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_238357E57DFDB2BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2031675BF4F6A77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_A2031675BF4F6A77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2933C4A8C00EC582(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_2933C4A8C00EC582_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBA89CB53E45618C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_METHOD_4_BBA89CB53E45618C_OFFSET))(a1, a2);
		}
	};
}
