#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_4D6A6D15249F2093_OFFSET UNITYSDK_OFFSET(0x17466220)
#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_6F6CD1488DA8FC02_OFFSET UNITYSDK_OFFSET(0x174662A0)
#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x17466270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmEventListener_TypeDefinitionIndex = 20247;

	class MusicRhythmEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnlockSkipTutorial; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRestart; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D6A6D15249F2093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_4D6A6D15249F2093_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F6CD1488DA8FC02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_6F6CD1488DA8FC02_OFFSET))(a1, a2);
		}
	};
}
