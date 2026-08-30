#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_2FD5AE5AAFF6E92A_OFFSET UNITYSDK_OFFSET(0x1C317AA0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_49852EB9AFC4E1CD_OFFSET UNITYSDK_OFFSET(0x1C317AD0)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_6516626E26FFED3B_OFFSET UNITYSDK_OFFSET(0x1C317800)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_E5092DD324D38B86_OFFSET UNITYSDK_OFFSET(0x1C317840)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C317830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEvolveBuildProperty_TypeDefinitionIndex = 22269;

	class ByCompareEvolveBuildProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EvolveBuildPropertyType ValueType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6516626E26FFED3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_6516626E26FFED3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5092DD324D38B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_E5092DD324D38B86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FD5AE5AAFF6E92A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_2FD5AE5AAFF6E92A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49852EB9AFC4E1CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_49852EB9AFC4E1CD_OFFSET))(a1, a2);
		}
	};
}
