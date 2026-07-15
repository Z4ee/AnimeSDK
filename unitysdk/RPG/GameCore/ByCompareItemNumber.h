#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_0B46BEB5000EBD87_OFFSET UNITYSDK_OFFSET(0x19CEEB80)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_47F94D18D4AC2FBA_OFFSET UNITYSDK_OFFSET(0x19CEEE20)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_63CC97329D3E7286_OFFSET UNITYSDK_OFFSET(0x19CEEBD0)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_9C72A2D14CF8589D_OFFSET UNITYSDK_OFFSET(0x19CEEE60)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEEBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemNumber_TypeDefinitionIndex = 20010;

	class ByCompareItemNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ItemID; // 0x20
		::RPG::GameCore::DynamicFloat* Number; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B46BEB5000EBD87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_0B46BEB5000EBD87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63CC97329D3E7286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_63CC97329D3E7286_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47F94D18D4AC2FBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_47F94D18D4AC2FBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C72A2D14CF8589D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_9C72A2D14CF8589D_OFFSET))(a1, a2);
		}
	};
}
