#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_4303E76083E6321A_OFFSET UNITYSDK_OFFSET(0x17774710)
#define RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_F2D1A1C30CFD26AD_OFFSET UNITYSDK_OFFSET(0x17774690)
#define RPG_GAMECORE_STARTEFFECTAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x177746E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartEffectAim_TypeDefinitionIndex = 20638;

	class StartEffectAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::Single Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTEFFECTAIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F2D1A1C30CFD26AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartEffectAim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartEffectAim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_F2D1A1C30CFD26AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4303E76083E6321A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartEffectAim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartEffectAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_4303E76083E6321A_OFFSET))(a1, a2);
		}
	};
}
