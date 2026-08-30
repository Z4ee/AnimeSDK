#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_36805A5C805CEEF1_OFFSET UNITYSDK_OFFSET(0x1C320890)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_456639A9F315CF12_OFFSET UNITYSDK_OFFSET(0x1C320610)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_61B78DF61E9DAFEE_OFFSET UNITYSDK_OFFSET(0x1C320850)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_FF5B0DFF8AD19A37_OFFSET UNITYSDK_OFFSET(0x1C3205C0)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C320600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupProperty_TypeDefinitionIndex = 20492;

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

		static ::System::Void Method_4_FF5B0DFF8AD19A37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_FF5B0DFF8AD19A37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_456639A9F315CF12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_456639A9F315CF12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_61B78DF61E9DAFEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_61B78DF61E9DAFEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36805A5C805CEEF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPERTY_METHOD_4_36805A5C805CEEF1_OFFSET))(a1, a2);
		}
	};
}
