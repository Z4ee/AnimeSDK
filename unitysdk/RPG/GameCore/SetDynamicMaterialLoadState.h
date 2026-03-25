#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_140CDA269C42BC97_OFFSET UNITYSDK_OFFSET(0x176B2DE0)
#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_679245ABD34F656A_OFFSET UNITYSDK_OFFSET(0x176B2D10)
#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176B2D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicMaterialLoadState_TypeDefinitionIndex = 21003;

	class SetDynamicMaterialLoadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Load; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_679245ABD34F656A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicMaterialLoadState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicMaterialLoadState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_679245ABD34F656A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_140CDA269C42BC97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicMaterialLoadState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicMaterialLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_140CDA269C42BC97_OFFSET))(a1, a2);
		}
	};
}
