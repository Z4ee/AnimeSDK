#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_CF830FB1517E01B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0D4CC0)
#define CLASS_1_CF830FB1517E01B8_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xC0D4F70)
#define CLASS_1_CF830FB1517E01B8_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xC0D51C0)
#define CLASS_1_CF830FB1517E01B8_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0xC0D4D10)
#define CLASS_1_CF830FB1517E01B8_METHOD_1_53DF179B77BE1602_OFFSET UNITYSDK_OFFSET(0xC0D4DB0)
#define CLASS_1_CF830FB1517E01B8_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xC0D4D60)
#define CLASS_1_CF830FB1517E01B8_TICK_OFFSET UNITYSDK_OFFSET(0xC0D4E60)
#define CLASS_1_CF830FB1517E01B8__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D4C80)

inline static constexpr unsigned int Class_1_CF830FB1517E01B8_TypeDefinitionIndex = 51506;

class Class_1_CF830FB1517E01B8 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x10
	::Class_1_E7811A222424F15E* Field_1_1; // 0x18
	::RPG::GameCore::FreeStyleComponent* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_53DF179B77BE1602(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_METHOD_1_53DF179B77BE1602_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF830FB1517E01B8_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
