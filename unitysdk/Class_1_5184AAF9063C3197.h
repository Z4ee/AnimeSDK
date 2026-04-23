#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5184AAF9063C3197_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91E5220)
#define CLASS_1_5184AAF9063C3197_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x91E5660)
#define CLASS_1_5184AAF9063C3197_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x91E53D0)
#define CLASS_1_5184AAF9063C3197_METHOD_1_D8ECBC347869E733_OFFSET UNITYSDK_OFFSET(0x91E5380)
#define CLASS_1_5184AAF9063C3197_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x91E52D0)
#define CLASS_1_5184AAF9063C3197_TICK_OFFSET UNITYSDK_OFFSET(0x91E5270)
#define CLASS_1_5184AAF9063C3197__CTOR_OFFSET UNITYSDK_OFFSET(0x91E5210)

inline static constexpr unsigned int Class_1_5184AAF9063C3197_TypeDefinitionIndex = 51515;

class Class_1_5184AAF9063C3197 : public ::System::Object
{
public:
	::Class_1_E7811A222424F15E* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8ECBC347869E733(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_METHOD_1_D8ECBC347869E733_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
