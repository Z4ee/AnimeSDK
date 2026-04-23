#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistWayPointConditionPack; }

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_5460EBB753DFFE1D_OFFSET UNITYSDK_OFFSET(0x186AC0C0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_CBAA757A6FC4AB90_OFFSET UNITYSDK_OFFSET(0x186AAAC0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x186AC0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointConditionMain_TypeDefinitionIndex = 18025;

	class AssistWayPointConditionMain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AssistWayPointConditionPack*>* ConditionPackList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CBAA757A6FC4AB90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointConditionMain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointConditionMain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_CBAA757A6FC4AB90_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_5460EBB753DFFE1D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONMAIN_METHOD_2_5460EBB753DFFE1D_OFFSET))(this);
		}
	};
}
