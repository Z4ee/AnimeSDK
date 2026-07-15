#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_METHOD_3_5470AC31AA545700_OFFSET UNITYSDK_OFFSET(0x1BB09710)
#define RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_METHOD_3_C3D33FDB07E99209_OFFSET UNITYSDK_OFFSET(0x1BB09750)
#define RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB09740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideWaveMonsterPerform_TypeDefinitionIndex = 22566;

	class OverrideWaveMonsterPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OverrideTemplateName; // 0x18
		::RPG::GameCore::TargetEvaluator* ParamEntity; // 0x20
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::System::Boolean EffectInAllWaves; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5470AC31AA545700(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideWaveMonsterPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideWaveMonsterPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_METHOD_3_5470AC31AA545700_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3D33FDB07E99209(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideWaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideWaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEWAVEMONSTERPERFORM_METHOD_3_C3D33FDB07E99209_OFFSET))(a1, a2);
		}
	};
}
