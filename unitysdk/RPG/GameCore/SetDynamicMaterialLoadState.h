#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_140CDA269C42BC97_OFFSET UNITYSDK_OFFSET(0x1C2DCD00)
#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_93A0EB626180EA73_OFFSET UNITYSDK_OFFSET(0x1C2DCC60)
#define RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DCCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicMaterialLoadState_TypeDefinitionIndex = 21987;

	class SetDynamicMaterialLoadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Load; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93A0EB626180EA73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicMaterialLoadState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicMaterialLoadState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_93A0EB626180EA73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_140CDA269C42BC97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicMaterialLoadState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicMaterialLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICMATERIALLOADSTATE_METHOD_3_140CDA269C42BC97_OFFSET))(a1, a2);
		}
	};
}
