#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_METHOD_3_DFCF1393B81B3F91_OFFSET UNITYSDK_OFFSET(0x188F3BD0)
#define RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_METHOD_3_F393BB5F3EC5694E_OFFSET UNITYSDK_OFFSET(0x188FB4A0)
#define RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F3BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCreateMascotFakePlayerAction_TypeDefinitionIndex = 17744;

	class FiveDimCreateMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 BornEntityID; // 0x10
		::System::UInt32 LegalAreaTriggerID; // 0x14
		::System::Boolean MirrorInput; // 0x18
		::RPG::GameCore::LittleGameEvent* OnCaught; // 0x20
		::RPG::GameCore::LittleGameEvent* OnCaughtLeft; // 0x28
		::RPG::GameCore::LittleGameEvent* OnCaughtRight; // 0x30
		::RPG::GameCore::LittleGameEvent* OnQuit; // 0x38
		::RPG::GameCore::FiveDimEffectItem* QuitEffectPath; // 0x40
		::System::String* CaughtEffectPath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F393BB5F3EC5694E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_METHOD_3_F393BB5F3EC5694E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFCF1393B81B3F91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_METHOD_3_DFCF1393B81B3F91_OFFSET))(a1, a2);
		}
	};
}
