#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_6F4267194BFD198C_OFFSET UNITYSDK_OFFSET(0x19536FD0)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_B150BD843973F232_OFFSET UNITYSDK_OFFSET(0x19536C50)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_CD2CCC72B41C9673_OFFSET UNITYSDK_OFFSET(0x19537070)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_D65C8F8F1838411A_OFFSET UNITYSDK_OFFSET(0x19536D70)
#define RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19536CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSummonUnitCount_TypeDefinitionIndex = 19112;

	class ByCompareSummonUnitCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x20
		::System::UInt32 SummonUnitID; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B150BD843973F232(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_B150BD843973F232_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D65C8F8F1838411A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_D65C8F8F1838411A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F4267194BFD198C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_6F4267194BFD198C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD2CCC72B41C9673(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUMMONUNITCOUNT_METHOD_4_CD2CCC72B41C9673_OFFSET))(a1, a2);
		}
	};
}
