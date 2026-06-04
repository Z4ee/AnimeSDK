#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_576E08067ED778DE_OFFSET UNITYSDK_OFFSET(0x19AA2600)
#define RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_69DF8C042D29ACD3_OFFSET UNITYSDK_OFFSET(0x19AA2580)
#define RPG_GAMECORE_QTECATCHGHOSTREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA25D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostRewind_TypeDefinitionIndex = 20823;

	class QteCatchGhostRewind : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Monster; // 0x18
		::RPG::GameCore::TargetEvaluator* TimeCrack; // 0x20
		::RPG::GameCore::TargetEvaluator* ShadowBox; // 0x28
		::RPG::GameCore::DynamicFloat* GoodRadius; // 0x30
		::RPG::GameCore::DynamicFloat* StruggleDuration; // 0x38
		::RPG::GameCore::DynamicFloat* InteractRadius; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69DF8C042D29ACD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostRewind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostRewind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_69DF8C042D29ACD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_576E08067ED778DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostRewind* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostRewind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_576E08067ED778DE_OFFSET))(a1, a2);
		}
	};
}
