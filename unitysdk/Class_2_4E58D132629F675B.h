#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_2_20B6963C31BED713;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_4E58D132629F675B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E3DA70)
#define CLASS_2_4E58D132629F675B_DOONENTER_OFFSET UNITYSDK_OFFSET(0x18E3DAC0)
#define CLASS_2_4E58D132629F675B_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x18E3DB40)
#define CLASS_2_4E58D132629F675B__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3D970)

inline static constexpr unsigned int Class_2_4E58D132629F675B_TypeDefinitionIndex = 60692;

class Class_2_4E58D132629F675B : public ::Class_1_29B23DDF98AF43AC
{
public:
	::System::String* LOHNGOHDLEK; // 0x98
	::Class_2_20B6963C31BED713* NLOIFCLPHAC; // 0xA0
	::System::UInt32 JGGDKOCIEGH; // 0xA8
	::System::UInt32 PEEFHNHDBMF; // 0xAC
	::System::UInt32 JAGLDFFBENK; // 0xB0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
