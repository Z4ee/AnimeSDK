#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_4303E76083E6321A_OFFSET UNITYSDK_OFFSET(0x1CAF4CE0)
#define RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_AD1D42E32DAADFC3_OFFSET UNITYSDK_OFFSET(0x1CAF4CA0)
#define RPG_GAMECORE_STARTEFFECTAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF4CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartEffectAim_TypeDefinitionIndex = 22205;

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

		static ::System::Void Method_3_AD1D42E32DAADFC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartEffectAim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartEffectAim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_AD1D42E32DAADFC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4303E76083E6321A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartEffectAim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartEffectAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTEFFECTAIM_METHOD_3_4303E76083E6321A_OFFSET))(a1, a2);
		}
	};
}
