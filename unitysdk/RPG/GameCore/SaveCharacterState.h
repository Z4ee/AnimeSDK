#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SAVECHARACTERSTATE_METHOD_3_300B3941BA02CE6B_OFFSET UNITYSDK_OFFSET(0x18DFCE40)
#define RPG_GAMECORE_SAVECHARACTERSTATE_METHOD_3_A13C35EEB63D5243_OFFSET UNITYSDK_OFFSET(0x18DFCD40)
#define RPG_GAMECORE_SAVECHARACTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFCDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveCharacterState_TypeDefinitionIndex = 21661;

	class SaveCharacterState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SaveKey; // 0x20
		::RPG::GameCore::SaveCharacterStateMask StateMask; // 0x28
		::RPG::GameCore::EnumStatusTypeMask SaveStatusTypeMask; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHARACTERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A13C35EEB63D5243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveCharacterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveCharacterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHARACTERSTATE_METHOD_3_A13C35EEB63D5243_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_300B3941BA02CE6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveCharacterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHARACTERSTATE_METHOD_3_300B3941BA02CE6B_OFFSET))(a1, a2);
		}
	};
}
