#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5184AAF9063C3197_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B09BA0)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10B0A530)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x10B09CB0)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x10B09BF0)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_6852A4B2493D79D0_OFFSET UNITYSDK_OFFSET(0x10B09F60)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x10B0A150)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_E4DDC118595D11DF_OFFSET UNITYSDK_OFFSET(0x10B09C40)
#define CLASS_1_5184AAF9063C3197_2_TICK_OFFSET UNITYSDK_OFFSET(0x10B0A040)
#define CLASS_1_5184AAF9063C3197_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B09B90)

inline static constexpr unsigned int Class_1_5184AAF9063C3197_2_TypeDefinitionIndex = 44762;

class Class_1_5184AAF9063C3197_2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_1_E7811A222424F15E* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_E4DDC118595D11DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_E4DDC118595D11DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_6852A4B2493D79D0(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_6852A4B2493D79D0_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_289F28027FF47717_OFFSET))(this);
	}
};
