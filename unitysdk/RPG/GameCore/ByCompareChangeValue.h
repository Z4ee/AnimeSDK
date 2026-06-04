#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_3AA22804DF3F3964_OFFSET UNITYSDK_OFFSET(0x19507BE0)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_968F7800B6A95443_OFFSET UNITYSDK_OFFSET(0x19507940)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_C08C6D791264D2E4_OFFSET UNITYSDK_OFFSET(0x19507B60)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_E891264CFCFDFBCD_OFFSET UNITYSDK_OFFSET(0x19507870)
#define RPG_GAMECORE_BYCOMPARECHANGEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x195078F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChangeValue_TypeDefinitionIndex = 21732;

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

		static ::System::Void Method_4_E891264CFCFDFBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_E891264CFCFDFBCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_968F7800B6A95443(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_968F7800B6A95443_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C08C6D791264D2E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_C08C6D791264D2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3AA22804DF3F3964(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHANGEVALUE_METHOD_4_3AA22804DF3F3964_OFFSET))(a1, a2);
		}
	};
}
