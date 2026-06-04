#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_4EF1C3C3C503D216_OFFSET UNITYSDK_OFFSET(0x19C29730)
#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_D43243ED791EA3C7_OFFSET UNITYSDK_OFFSET(0x19C297B0)
#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C29780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAudioEmotionState_TypeDefinitionIndex = 19606;

	class SetAudioEmotionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean ResetToFloorDefault; // 0x20
		::System::UInt32 SubMissionID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EF1C3C3C503D216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAudioEmotionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAudioEmotionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_4EF1C3C3C503D216_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D43243ED791EA3C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAudioEmotionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAudioEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_D43243ED791EA3C7_OFFSET))(a1, a2);
		}
	};
}
