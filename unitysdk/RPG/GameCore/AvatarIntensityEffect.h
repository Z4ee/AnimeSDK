#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_AVATARINTENSITYEFFECT_METHOD_3_A0BC7ACABF026AA5_OFFSET UNITYSDK_OFFSET(0x1A07B4B0)
#define RPG_GAMECORE_AVATARINTENSITYEFFECT_METHOD_3_BBEF33D02676E246_OFFSET UNITYSDK_OFFSET(0x1A07B470)
#define RPG_GAMECORE_AVATARINTENSITYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07B4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarIntensityEffect_TypeDefinitionIndex = 21607;

	class AvatarIntensityEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TargetIntensity; // 0x20
		::System::Single FadeDuration; // 0x24
		::System::Boolean IsSyncGlobalMainIntensity; // 0x28
		::System::Boolean IsGlobalMainIntensityEnable; // 0x29
		::System::Boolean Reset; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINTENSITYEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBEF33D02676E246(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarIntensityEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarIntensityEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINTENSITYEFFECT_METHOD_3_BBEF33D02676E246_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0BC7ACABF026AA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarIntensityEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarIntensityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINTENSITYEFFECT_METHOD_3_A0BC7ACABF026AA5_OFFSET))(a1, a2);
		}
	};
}
