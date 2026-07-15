#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_2059D817E1570EF1_OFFSET UNITYSDK_OFFSET(0x1BAEB960)
#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_5855D2CF0923DF84_OFFSET UNITYSDK_OFFSET(0x1BAEB9A0)
#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEB990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmEventListener_TypeDefinitionIndex = 21257;

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

		static ::System::Void Method_3_2059D817E1570EF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_2059D817E1570EF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5855D2CF0923DF84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_METHOD_3_5855D2CF0923DF84_OFFSET))(a1, a2);
		}
	};
}
