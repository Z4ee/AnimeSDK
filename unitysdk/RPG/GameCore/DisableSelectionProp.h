#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLESELECTIONPROP_METHOD_3_015B6A38CC85D217_OFFSET UNITYSDK_OFFSET(0x196BCF10)
#define RPG_GAMECORE_DISABLESELECTIONPROP_METHOD_3_7769F819DE2D2659_OFFSET UNITYSDK_OFFSET(0x196BD060)
#define RPG_GAMECORE_DISABLESELECTIONPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x196BCFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableSelectionProp_TypeDefinitionIndex = 20801;

	class DisableSelectionProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESELECTIONPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_015B6A38CC85D217(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableSelectionProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableSelectionProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESELECTIONPROP_METHOD_3_015B6A38CC85D217_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7769F819DE2D2659(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableSelectionProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESELECTIONPROP_METHOD_3_7769F819DE2D2659_OFFSET))(a1, a2);
		}
	};
}
