#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_METHOD_3_616D40E82BE4E7BB_OFFSET UNITYSDK_OFFSET(0x1D549150)
#define RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_METHOD_3_C845E7175ED4E2DA_OFFSET UNITYSDK_OFFSET(0x1D549190)
#define RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D549180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCableProceduralEffect_TypeDefinitionIndex = 23364;

	class TriggerCableProceduralEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::RPG::GameCore::TargetEvaluator* StartTarget; // 0x30
		::System::String* StartAttachPoint; // 0x38
		::RPG::GameCore::TargetEvaluator* EndTarget; // 0x40
		::System::String* EndAttachPoint; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_616D40E82BE4E7BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCableProceduralEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCableProceduralEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_METHOD_3_616D40E82BE4E7BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C845E7175ED4E2DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCableProceduralEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCableProceduralEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCABLEPROCEDURALEFFECT_METHOD_3_C845E7175ED4E2DA_OFFSET))(a1, a2);
		}
	};
}
