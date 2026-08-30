#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_0387DE56F252B4D5_OFFSET UNITYSDK_OFFSET(0x1C572FE0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_1E569F2891CD224D_OFFSET UNITYSDK_OFFSET(0x1C571A00)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_5460EBB753DFFE1D_OFFSET UNITYSDK_OFFSET(0x1C5750E0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C575180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointConditionMain_TypeDefinitionIndex = 15303;

	class AssistWayPointConditionMain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AssistWayPointConditionPack*>* ConditionPackList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_5460EBB753DFFE1D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_5460EBB753DFFE1D_OFFSET))(this);
		}

		static ::System::Void Method_2_1E569F2891CD224D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointConditionMain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointConditionMain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_1E569F2891CD224D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0387DE56F252B4D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionMain*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionMain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_0387DE56F252B4D5_OFFSET))(a1, a2);
		}
	};
}
