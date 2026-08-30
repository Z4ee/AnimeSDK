#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_069FA155AF1EE24A_OFFSET UNITYSDK_OFFSET(0x1D6A7160)
#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_5C34DE4FF7ED1C01_OFFSET UNITYSDK_OFFSET(0x1D6A7120)
#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A7150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicCompositionStageStartEvent_TypeDefinitionIndex = 21811;

	class WaitMusicCompositionStageStartEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C34DE4FF7ED1C01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_5C34DE4FF7ED1C01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_069FA155AF1EE24A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_069FA155AF1EE24A_OFFSET))(a1, a2);
		}
	};
}
