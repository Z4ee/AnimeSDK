#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_20CA32EBAFD78B90_OFFSET UNITYSDK_OFFSET(0x1872BF60)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_E5092DD324D38B86_OFFSET UNITYSDK_OFFSET(0x1872C030)
#define RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1872BFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEvolveBuildProperty_TypeDefinitionIndex = 21402;

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

		static ::System::Void Method_4_20CA32EBAFD78B90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_20CA32EBAFD78B90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5092DD324D38B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREEVOLVEBUILDPROPERTY_METHOD_4_E5092DD324D38B86_OFFSET))(a1, a2);
		}
	};
}
