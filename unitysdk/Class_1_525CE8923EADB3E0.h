#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04BD1C2CDF52B30A;
class Class_1_06EF49E17999C143;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class Action; }

#define CLASS_1_525CE8923EADB3E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A48F70)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_001C635C7912DE1E_OFFSET UNITYSDK_OFFSET(0x13A49970)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_0B416A12FCF16B91_OFFSET UNITYSDK_OFFSET(0x13A4A7C0)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_0BB9E46BEEF25AB9_OFFSET UNITYSDK_OFFSET(0x13A495D0)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_189803FFC1D3100D_OFFSET UNITYSDK_OFFSET(0x13A49410)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_29C11D833CB3661E_OFFSET UNITYSDK_OFFSET(0x13A4AD20)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_2CE73D40757B59E3_OFFSET UNITYSDK_OFFSET(0x13A49010)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_4DF747ECD2ECF833_OFFSET UNITYSDK_OFFSET(0x13A49320)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_7243ADD7DCCD2F93_OFFSET UNITYSDK_OFFSET(0x13A4AE40)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_C576345BA9F3B38E_1_OFFSET UNITYSDK_OFFSET(0x13A4A360)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_C576345BA9F3B38E_OFFSET UNITYSDK_OFFSET(0x13A4A240)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_DDE450932F333E49_OFFSET UNITYSDK_OFFSET(0x13A4A520)
#define CLASS_1_525CE8923EADB3E0_METHOD_1_EB55E4EE192B3F0D_OFFSET UNITYSDK_OFFSET(0x13A4A930)
#define CLASS_1_525CE8923EADB3E0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A48EB0)

inline static constexpr unsigned int Class_1_525CE8923EADB3E0_TypeDefinitionIndex = 56783;

class Class_1_525CE8923EADB3E0 : public ::System::Object
{
public:
	::RPG::Client::PerformanceManager* Field_1_0; // 0x10
	::Class_1_04BD1C2CDF52B30A* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_2; // 0x20
	::RPG::Client::AdventurePhase* Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1, ::RPG::Client::PerformanceManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_2CE73D40757B59E3(::Class_1_06EF49E17999C143* a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_06EF49E17999C143*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_2CE73D40757B59E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_189803FFC1D3100D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_189803FFC1D3100D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BB9E46BEEF25AB9(::RPG::GameCore::StoryCharacterRow* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterRow*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_0BB9E46BEEF25AB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B416A12FCF16B91(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StoryCharacterRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_0B416A12FCF16B91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_001C635C7912DE1E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_001C635C7912DE1E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_29C11D833CB3661E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_29C11D833CB3661E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4DF747ECD2ECF833(::Class_1_04BD1C2CDF52B30A* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_04BD1C2CDF52B30A*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_4DF747ECD2ECF833_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB55E4EE192B3F0D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StoryCharacterRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_EB55E4EE192B3F0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C576345BA9F3B38E(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_C576345BA9F3B38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C576345BA9F3B38E_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_C576345BA9F3B38E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7243ADD7DCCD2F93(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_7243ADD7DCCD2F93_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDE450932F333E49(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0_METHOD_1_DDE450932F333E49_OFFSET))(this, a1, a2);
	}
};
