#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_054F781189F1B26F_OFFSET UNITYSDK_OFFSET(0x19516A00)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_456639A9F315CF12_OFFSET UNITYSDK_OFFSET(0x19516740)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_7E2080CEA49D282C_OFFSET UNITYSDK_OFFSET(0x19516660)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_A2C8FC6D5FC91ADF_OFFSET UNITYSDK_OFFSET(0x19516980)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x195166E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupProperty_TypeDefinitionIndex = 19586;

	class ByCompareGroupProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::RPG::GameCore::DynamicString* DynamicName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Int16 CompareValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E2080CEA49D282C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_7E2080CEA49D282C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_456639A9F315CF12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_456639A9F315CF12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2C8FC6D5FC91ADF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_A2C8FC6D5FC91ADF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_054F781189F1B26F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_054F781189F1B26F_OFFSET))(a1, a2);
		}
	};
}
