#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOADCHARACTERSTATE_METHOD_3_2AD78D88B39F803C_OFFSET UNITYSDK_OFFSET(0x17363C80)
#define RPG_GAMECORE_LOADCHARACTERSTATE_METHOD_3_514857E556AAEC98_OFFSET UNITYSDK_OFFSET(0x17363B90)
#define RPG_GAMECORE_LOADCHARACTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17363C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadCharacterState_TypeDefinitionIndex = 20951;

	class LoadCharacterState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SaveKey; // 0x20
		::System::Boolean RemoveUnrecordedStatus; // 0x28
		::System::Boolean DeleteRecord; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADCHARACTERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_514857E556AAEC98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadCharacterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadCharacterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADCHARACTERSTATE_METHOD_3_514857E556AAEC98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2AD78D88B39F803C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadCharacterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADCHARACTERSTATE_METHOD_3_2AD78D88B39F803C_OFFSET))(a1, a2);
		}
	};
}
