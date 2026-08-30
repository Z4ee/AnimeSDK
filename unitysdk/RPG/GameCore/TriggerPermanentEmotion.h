#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERPERMANENTEMOTION_METHOD_3_C2F8AD851E53B56D_OFFSET UNITYSDK_OFFSET(0x1D293260)
#define RPG_GAMECORE_TRIGGERPERMANENTEMOTION_METHOD_3_CEDEB75CDB80F4F8_OFFSET UNITYSDK_OFFSET(0x1D293210)
#define RPG_GAMECORE_TRIGGERPERMANENTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D293250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPermanentEmotion_TypeDefinitionIndex = 21640;

	class TriggerPermanentEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EmotionName; // 0x20
		::System::Single TransitTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERMANENTEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEDEB75CDB80F4F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPermanentEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPermanentEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERMANENTEMOTION_METHOD_3_CEDEB75CDB80F4F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2F8AD851E53B56D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerPermanentEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERMANENTEMOTION_METHOD_3_C2F8AD851E53B56D_OFFSET))(a1, a2);
		}
	};
}
