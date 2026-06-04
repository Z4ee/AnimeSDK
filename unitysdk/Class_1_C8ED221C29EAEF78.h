#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_A89E800BD673F128;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C8ED221C29EAEF78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138B5FE0)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0x138B6080)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_189A1787B0797738_OFFSET UNITYSDK_OFFSET(0x138B6870)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x138B6D60)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x138B65C0)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x138B6030)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x138B6A00)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_91D3CB93F7D3A697_OFFSET UNITYSDK_OFFSET(0x138B6430)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x138B6930)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x138B64D0)
#define CLASS_1_C8ED221C29EAEF78_TICK_OFFSET UNITYSDK_OFFSET(0x138B6100)
#define CLASS_1_C8ED221C29EAEF78__CTOR_OFFSET UNITYSDK_OFFSET(0x138B5FD0)

inline static constexpr unsigned int Class_1_C8ED221C29EAEF78_TypeDefinitionIndex = 52178;

class Class_1_C8ED221C29EAEF78 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_1_A89E800BD673F128* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_A89E800BD673F128* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_A89E800BD673F128*))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_0986B6F765C6D4BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_91D3CB93F7D3A697(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_91D3CB93F7D3A697_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_189A1787B0797738(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_189A1787B0797738_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_289F28027FF47717_OFFSET))(this);
	}
};
