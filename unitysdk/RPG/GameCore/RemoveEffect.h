#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEEFFECT_METHOD_3_20A8729D24F4BBBC_OFFSET UNITYSDK_OFFSET(0x1DB8CCD0)
#define RPG_GAMECORE_REMOVEEFFECT_METHOD_3_D3A8250A2B51FEE6_OFFSET UNITYSDK_OFFSET(0x1DB8CC60)
#define RPG_GAMECORE_REMOVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8CCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEffect_TypeDefinitionIndex = 22626;

	class RemoveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPathKey; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* UniqueEffectName; // 0x30
		::System::String* AttachPointName; // 0x38
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x40
		::System::Boolean Unbind; // 0x48
		::System::Boolean IsNeedFadeOut; // 0x49
		::System::Boolean ForceImmediateFadeOut; // 0x4A
		::System::Single FadeOutRegionStart; // 0x4C
		::System::Single FadeOutRegionEnd; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D3A8250A2B51FEE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECT_METHOD_3_D3A8250A2B51FEE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20A8729D24F4BBBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECT_METHOD_3_20A8729D24F4BBBC_OFFSET))(a1, a2);
		}
	};
}
