#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E7CE7203DFFA724.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrainCakeCatchGameModule; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_E620C0D36AB36D8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9D3650)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0xB9D3410)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB9D37D0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_1_OFFSET UNITYSDK_OFFSET(0xB9D3710)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_OFFSET UNITYSDK_OFFSET(0xB9D36A0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_D56DAA96379ECAB9_1_OFFSET UNITYSDK_OFFSET(0xB9D3D90)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_D56DAA96379ECAB9_OFFSET UNITYSDK_OFFSET(0xB9D3C10)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_1_OFFSET UNITYSDK_OFFSET(0xB9D3B90)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_OFFSET UNITYSDK_OFFSET(0xB9D3A30)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_E01406ED37757F06_OFFSET UNITYSDK_OFFSET(0xB9D3AB0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB9D3780)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xB9D33C0)
#define CLASS_1_E620C0D36AB36D8A__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D3340)

inline static constexpr unsigned int Class_1_E620C0D36AB36D8A_TypeDefinitionIndex = 56269;

class Class_1_E620C0D36AB36D8A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::RPG::Client::TrainCakeCatchGameModule* Field_1_3; // 0x10
	::Struct_2_6E7CE7203DFFA724 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_8; // 0x34

	::System::Void _ctor(::RPG::Client::TrainCakeCatchGameModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchGameModule*))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A5CB745FCEAC9303(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5CB745FCEAC9303_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_1_E01406ED37757F06(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_E01406ED37757F06_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_DB6AE91A68719504()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_DB6AE91A68719504_1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_1_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_1_D56DAA96379ECAB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_D56DAA96379ECAB9_OFFSET))(this);
	}

	::System::Void Method_1_D56DAA96379ECAB9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_D56DAA96379ECAB9_1_OFFSET))(this);
	}
};
