#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_METHOD_3_0948C4EF066D6C89_OFFSET UNITYSDK_OFFSET(0x1E0993A0)
#define RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_METHOD_3_CE715D07205757B5_OFFSET UNITYSDK_OFFSET(0x1E099360)
#define RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E099390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupModifierExtraMaxLayer_TypeDefinitionIndex = 22997;

	class SetupModifierExtraMaxLayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsCancel; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* FromTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* ToTargetType; // 0x30
		::RPG::GameCore::TargetEvaluator* SpecifiedModifierSource; // 0x38
		::RPG::GameCore::DynamicFloat* ExtraMaxLayer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE715D07205757B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupModifierExtraMaxLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupModifierExtraMaxLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_METHOD_3_CE715D07205757B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0948C4EF066D6C89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupModifierExtraMaxLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupModifierExtraMaxLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMODIFIEREXTRAMAXLAYER_METHOD_3_0948C4EF066D6C89_OFFSET))(a1, a2);
		}
	};
}
