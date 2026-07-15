#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::Client { class InputDataController; }

#define CLASS_1_4445D31C88F82D1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AE9B80)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_2C56AE4A42D6E217_OFFSET UNITYSDK_OFFSET(0x17AE96A0)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_39E669857F41F800_OFFSET UNITYSDK_OFFSET(0x17AE8590)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x17AE7E10)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_909FC79222B4A1EB_OFFSET UNITYSDK_OFFSET(0x17AE8980)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0x17AE9140)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x17AE8F80)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_CCB1C92E6A241E7C_OFFSET UNITYSDK_OFFSET(0x17AE8D30)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x17AE9C10)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0x17AE9DF0)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x17AE9D30)
#define CLASS_1_4445D31C88F82D1D_TICK_OFFSET UNITYSDK_OFFSET(0x17AE7F30)
#define CLASS_1_4445D31C88F82D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE7D80)

inline static constexpr unsigned int Class_1_4445D31C88F82D1D_TypeDefinitionIndex = 58576;

class Class_1_4445D31C88F82D1D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::RPG::Client::InputDataController* Field_1_2; // 0x10
	::RPG::Client::GamePlayLockTargetFunc* Field_1_3; // 0x18
	::RPG::Client::AdventurePhase* Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x2C
	::System::Boolean Field_1_7; // 0x2D
	::System::Boolean Field_1_8; // 0x2E
	::System::UInt32 Field_1_9; // 0x30
	::UnityEngine::Vector2 Field_1_10; // 0x34

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_39E669857F41F800(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_39E669857F41F800_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_909FC79222B4A1EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_909FC79222B4A1EB_OFFSET))(this);
	}

	::System::Void Method_1_CCB1C92E6A241E7C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_CCB1C92E6A241E7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_90A07D9BC1B409B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_90A07D9BC1B409B9_OFFSET))(this);
	}

	::System::Void Method_1_2C56AE4A42D6E217(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_2C56AE4A42D6E217_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}
};
