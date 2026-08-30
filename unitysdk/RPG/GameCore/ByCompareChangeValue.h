#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_74166146569D8CDE_OFFSET UNITYSDK_OFFSET(0x1CEB5E60)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_94224A6B444E57D5_OFFSET UNITYSDK_OFFSET(0x1CEB60C0)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_968F7800B6A95443_OFFSET UNITYSDK_OFFSET(0x1CEB5EA0)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_B046B52BC06E0C52_OFFSET UNITYSDK_OFFSET(0x1CEB60F0)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChangeValue_TypeDefinitionIndex = 22728;

	class ByCompareChangeValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ChangeValueIndex; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74166146569D8CDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_74166146569D8CDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_968F7800B6A95443(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_968F7800B6A95443_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_94224A6B444E57D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_94224A6B444E57D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B046B52BC06E0C52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_B046B52BC06E0C52_OFFSET))(a1, a2);
		}
	};
}
