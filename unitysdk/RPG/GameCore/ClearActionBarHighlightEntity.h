#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_METHOD_3_ADDB0D0726F41EB5_OFFSET UNITYSDK_OFFSET(0x170B1400)
#define RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_METHOD_3_C79C01BEDB139444_OFFSET UNITYSDK_OFFSET(0x170B1380)
#define RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x170B13D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearActionBarHighlightEntity_TypeDefinitionIndex = 21486;

	class ClearActionBarHighlightEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C79C01BEDB139444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearActionBarHighlightEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearActionBarHighlightEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_METHOD_3_C79C01BEDB139444_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADDB0D0726F41EB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearActionBarHighlightEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearActionBarHighlightEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONBARHIGHLIGHTENTITY_METHOD_3_ADDB0D0726F41EB5_OFFSET))(a1, a2);
		}
	};
}
