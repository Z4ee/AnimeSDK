#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATALKCONDITION_METHOD_2_A27D255D892C69D6_OFFSET UNITYSDK_OFFSET(0x1CFD3330)
#define RPG_GAMECORE_CHIMERATALKCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD3480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkCondition_TypeDefinitionIndex = 15679;

	class ChimeraTalkCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraTalkConditionType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A27D255D892C69D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONDITION_METHOD_2_A27D255D892C69D6_OFFSET))(a1, a2);
		}
	};
}
