#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_36F85EA0EE3A373A_OFFSET UNITYSDK_OFFSET(0x1DB53BA0)
#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_D43243ED791EA3C7_OFFSET UNITYSDK_OFFSET(0x1DB53BE0)
#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAudioEmotionState_TypeDefinitionIndex = 20512;

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

		static ::System::Void Method_3_36F85EA0EE3A373A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAudioEmotionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAudioEmotionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_36F85EA0EE3A373A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D43243ED791EA3C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAudioEmotionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAudioEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_METHOD_3_D43243ED791EA3C7_OFFSET))(a1, a2);
		}
	};
}
