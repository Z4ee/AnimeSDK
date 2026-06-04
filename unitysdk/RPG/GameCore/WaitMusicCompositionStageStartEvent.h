#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_069FA155AF1EE24A_OFFSET UNITYSDK_OFFSET(0x19E5AD90)
#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_DE230F168A4DC693_OFFSET UNITYSDK_OFFSET(0x19E5AD10)
#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicCompositionStageStartEvent_TypeDefinitionIndex = 20836;

	class WaitMusicCompositionStageStartEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE230F168A4DC693(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_DE230F168A4DC693_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_069FA155AF1EE24A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_METHOD_3_069FA155AF1EE24A_OFFSET))(a1, a2);
		}
	};
}
