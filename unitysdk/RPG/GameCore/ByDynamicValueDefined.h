#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_CC15A78F8703892E_OFFSET UNITYSDK_OFFSET(0x18745AC0)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_F386CA00352A972E_OFFSET UNITYSDK_OFFSET(0x18745B90)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED__CTOR_OFFSET UNITYSDK_OFFSET(0x18745B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDynamicValueDefined_TypeDefinitionIndex = 21812;

	class ByDynamicValueDefined : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC15A78F8703892E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicValueDefined*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicValueDefined*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_CC15A78F8703892E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F386CA00352A972E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_F386CA00352A972E_OFFSET))(a1, a2);
		}
	};
}
