#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_METHOD_3_3568876E9B39B206_OFFSET UNITYSDK_OFFSET(0x1D5F0C40)
#define RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_METHOD_3_B8AD0A3A3842B9EF_OFFSET UNITYSDK_OFFSET(0x1D5F0BF0)
#define RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F0C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBlendShapesEmotion_TypeDefinitionIndex = 21642;

	class TriggerBlendShapesEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EmotionName; // 0x20
		::System::Single TransitTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8AD0A3A3842B9EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBlendShapesEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBlendShapesEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_METHOD_3_B8AD0A3A3842B9EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3568876E9B39B206(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBlendShapesEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBLENDSHAPESEMOTION_METHOD_3_3568876E9B39B206_OFFSET))(a1, a2);
		}
	};
}
