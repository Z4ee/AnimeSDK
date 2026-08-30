#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE_METHOD_2_695C3785DD7A4DD5_OFFSET UNITYSDK_OFFSET(0x1D99EE80)
#define RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D99EFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryAnimState_TypeDefinitionIndex = 15856;

	class ClockParkStoryAnimState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartAnim; // 0x10
		::System::String* LoopAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_695C3785DD7A4DD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE_METHOD_2_695C3785DD7A4DD5_OFFSET))(a1, a2);
		}
	};
}
