#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_METHOD_3_6166C3265151D626_OFFSET UNITYSDK_OFFSET(0x189290E0)
#define RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_METHOD_3_C4F7591E8F1659F0_OFFSET UNITYSDK_OFFSET(0x18929160)
#define RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18929130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceMakeCharacterActionable_TypeDefinitionIndex = 22256;

	class ForceMakeCharacterActionable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ForceActionable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6166C3265151D626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceMakeCharacterActionable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceMakeCharacterActionable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_METHOD_3_6166C3265151D626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4F7591E8F1659F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceMakeCharacterActionable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceMakeCharacterActionable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEMAKECHARACTERACTIONABLE_METHOD_3_C4F7591E8F1659F0_OFFSET))(a1, a2);
		}
	};
}
