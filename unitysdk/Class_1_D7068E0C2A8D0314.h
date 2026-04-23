#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::Client { class InputDataController; }

#define CLASS_1_D7068E0C2A8D0314_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11F1DDC0)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_40E2FE338DC5FBAB_OFFSET UNITYSDK_OFFSET(0x11F1D850)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x11F1BD10)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x11F1DE50)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0x11F1C9D0)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_84D45023C09529C2_OFFSET UNITYSDK_OFFSET(0x11F1C4B0)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x11F1D080)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_CCB1C92E6A241E7C_OFFSET UNITYSDK_OFFSET(0x11F1CE30)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x11F1D240)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0x11F1E020)
#define CLASS_1_D7068E0C2A8D0314_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x11F1DF60)
#define CLASS_1_D7068E0C2A8D0314_TICK_OFFSET UNITYSDK_OFFSET(0x11F1BDF0)
#define CLASS_1_D7068E0C2A8D0314__CTOR_OFFSET UNITYSDK_OFFSET(0x11F1BC80)

inline static constexpr unsigned int Class_1_D7068E0C2A8D0314_TypeDefinitionIndex = 56539;

class Class_1_D7068E0C2A8D0314 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	::RPG::Client::InputDataController* Field_1_10; // 0x10
	::RPG::Client::AdventurePhase* Field_1_8; // 0x18
	::RPG::Client::GamePlayLockTargetFunc* Field_1_9; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x2C
	::System::Boolean Field_1_3; // 0x2D
	::System::Boolean Field_1_2; // 0x2E
	::UnityEngine::Vector2 Field_1_0; // 0x30
	::System::UInt32 Field_1_5; // 0x38

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_84D45023C09529C2(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_84D45023C09529C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_71227BBBB7D3D8E0_OFFSET))(this);
	}

	::System::Void Method_1_CCB1C92E6A241E7C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_CCB1C92E6A241E7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D68547FF19A170E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_D68547FF19A170E2_OFFSET))(this);
	}

	::System::Void Method_1_40E2FE338DC5FBAB(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_40E2FE338DC5FBAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7068E0C2A8D0314_METHOD_1_C982C8295D29DA97_OFFSET))(this);
	}
};
