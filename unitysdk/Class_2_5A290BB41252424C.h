#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1212;
class Class_2_A170836FF14A49D0;
class Class_2_E24BE1A4CB564432;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::Client { class MechanicThresholdHPMarkDataContainer; }
namespace RPG::Client { class StageInvasionForceKillMarkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5A290BB41252424C_METHOD_2_1208BC757583C114_OFFSET UNITYSDK_OFFSET(0xB9D7F10)
#define CLASS_2_5A290BB41252424C_METHOD_2_39CEC1620A646170_OFFSET UNITYSDK_OFFSET(0xB9D7CF0)
#define CLASS_2_5A290BB41252424C_METHOD_2_B69A793A1891CE2E_OFFSET UNITYSDK_OFFSET(0xB9D77A0)
#define CLASS_2_5A290BB41252424C_METHOD_2_B9C85E7E133D26C0_OFFSET UNITYSDK_OFFSET(0xB9D7700)
#define CLASS_2_5A290BB41252424C_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xB9D7600)
#define CLASS_2_5A290BB41252424C_METHOD_2_FFD4497C3B25EFD1_OFFSET UNITYSDK_OFFSET(0xB9D84D0)
#define CLASS_2_5A290BB41252424C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D8550)
#define CLASS_2_5A290BB41252424C__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9D7670)

inline static constexpr unsigned int Class_2_5A290BB41252424C_TypeDefinitionIndex = 71666;

class Class_2_5A290BB41252424C : public ::Class_1_34917908B7833130
{
public:
	::Class_2_E24BE1A4CB564432* CNMNFOIDLBL; // 0x60
	::System::Collections::Generic::List_1<::Class_2_A170836FF14A49D0*>* ACFLJIOGAFJ; // 0x68
	::UnityEngine::Transform* OHJCABBKJHA; // 0x70
	::Class_2_A170836FF14A49D0* CCKCPODGIKP; // 0x78
	::System::Boolean KICAHMGNMED; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B9C85E7E133D26C0(::RPG::Client::ForceKillMarkDataProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C_METHOD_2_B9C85E7E133D26C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_B69A793A1891CE2E(::Class_0_16E4307DCC419505_1212* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1212*))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C_METHOD_2_B69A793A1891CE2E_OFFSET))(this, a1);
	}

	::System::String* Method_2_FFD4497C3B25EFD1(::RPG::GameCore::ForceKillMarkType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ForceKillMarkType))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C_METHOD_2_FFD4497C3B25EFD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_39CEC1620A646170(::RPG::Client::StageInvasionForceKillMarkData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StageInvasionForceKillMarkData*))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C_METHOD_2_39CEC1620A646170_OFFSET))(this, a1);
	}

	::System::Void Method_2_1208BC757583C114(::RPG::Client::MechanicThresholdHPMarkDataContainer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechanicThresholdHPMarkDataContainer*))((::PBYTE)hIl2Cpp + CLASS_2_5A290BB41252424C_METHOD_2_1208BC757583C114_OFFSET))(this, a1);
	}
};
