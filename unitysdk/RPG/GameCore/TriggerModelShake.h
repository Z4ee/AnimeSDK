#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMODELSHAKE_METHOD_3_4E8CBE6D378E8143_OFFSET UNITYSDK_OFFSET(0x1D601480)
#define RPG_GAMECORE_TRIGGERMODELSHAKE_METHOD_3_517FE5AA8A675291_OFFSET UNITYSDK_OFFSET(0x1D601540)
#define RPG_GAMECORE_TRIGGERMODELSHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6014F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModelShake_TypeDefinitionIndex = 22204;

	class TriggerModelShake : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Amplitude; // 0x20
		::System::Single Duration; // 0x24
		::System::String* CurveName; // 0x28
		::RPG::MVector3 Direction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODELSHAKE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E8CBE6D378E8143(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModelShake*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModelShake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODELSHAKE_METHOD_3_4E8CBE6D378E8143_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_517FE5AA8A675291(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModelShake* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModelShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODELSHAKE_METHOD_3_517FE5AA8A675291_OFFSET))(a1, a2);
		}
	};
}
