#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5184AAF9063C3197_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x952A680)
#define CLASS_1_5184AAF9063C3197_1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x952A8C0)
#define CLASS_1_5184AAF9063C3197_1_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x952A6D0)
#define CLASS_1_5184AAF9063C3197_1_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x952A870)
#define CLASS_1_5184AAF9063C3197_1_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x952A720)
#define CLASS_1_5184AAF9063C3197_1_METHOD_1_D8ECBC347869E733_OFFSET UNITYSDK_OFFSET(0x952A770)
#define CLASS_1_5184AAF9063C3197_1_TICK_OFFSET UNITYSDK_OFFSET(0x952A7C0)
#define CLASS_1_5184AAF9063C3197_1__CTOR_OFFSET UNITYSDK_OFFSET(0x952A670)

inline static constexpr unsigned int Class_1_5184AAF9063C3197_1_TypeDefinitionIndex = 51505;

class Class_1_5184AAF9063C3197_1 : public ::System::Object
{
public:
	::Class_1_E7811A222424F15E* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8ECBC347869E733(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_METHOD_1_D8ECBC347869E733_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
