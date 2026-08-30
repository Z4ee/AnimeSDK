#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1099;
class Class_2_A170836FF14A49D0;
class Class_2_C7DFD1DD059BE185;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::Client { class StageInvasionForceKillMarkData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B522C7D62F8B6470_METHOD_2_39CEC1620A646170_OFFSET UNITYSDK_OFFSET(0x16B1A000)
#define CLASS_2_B522C7D62F8B6470_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x16B198A0)
#define CLASS_2_B522C7D62F8B6470_METHOD_2_B6E5FAEA04542937_OFFSET UNITYSDK_OFFSET(0x16B19A60)
#define CLASS_2_B522C7D62F8B6470_METHOD_2_E282AD45A2AD9E9A_OFFSET UNITYSDK_OFFSET(0x16B199C0)
#define CLASS_2_B522C7D62F8B6470_METHOD_2_FFD4497C3B25EFD1_OFFSET UNITYSDK_OFFSET(0x16B1A260)
#define CLASS_2_B522C7D62F8B6470__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1A2F0)
#define CLASS_2_B522C7D62F8B6470__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B19930)

inline static constexpr unsigned int Class_2_B522C7D62F8B6470_TypeDefinitionIndex = 71615;

class Class_2_B522C7D62F8B6470 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* OHJCABBKJHA; // 0x60
	::Class_2_C7DFD1DD059BE185* CNMNFOIDLBL; // 0x68
	::Class_2_A170836FF14A49D0* CCKCPODGIKP; // 0x70
	::System::Boolean KICAHMGNMED; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E282AD45A2AD9E9A(::RPG::Client::ForceKillMarkDataProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470_METHOD_2_E282AD45A2AD9E9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6E5FAEA04542937(::Class_0_16E4307DCC419505_1099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1099*))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470_METHOD_2_B6E5FAEA04542937_OFFSET))(this, a1);
	}

	::System::String* Method_2_FFD4497C3B25EFD1(::RPG::GameCore::ForceKillMarkType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ForceKillMarkType))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470_METHOD_2_FFD4497C3B25EFD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_39CEC1620A646170(::RPG::Client::StageInvasionForceKillMarkData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StageInvasionForceKillMarkData*))((::PBYTE)hIl2Cpp + CLASS_2_B522C7D62F8B6470_METHOD_2_39CEC1620A646170_OFFSET))(this, a1);
	}
};
