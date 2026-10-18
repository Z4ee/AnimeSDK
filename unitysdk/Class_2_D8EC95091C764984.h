#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_D8EC95091C764984_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD7530C0)
#define CLASS_2_D8EC95091C764984_METHOD_2_58D059534BC46B02_OFFSET UNITYSDK_OFFSET(0xD753010)
#define CLASS_2_D8EC95091C764984_METHOD_2_760FD1B4F7D8B904_OFFSET UNITYSDK_OFFSET(0xD753110)
#define CLASS_2_D8EC95091C764984_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xD7534F0)
#define CLASS_2_D8EC95091C764984_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD753230)
#define CLASS_2_D8EC95091C764984_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xD753460)
#define CLASS_2_D8EC95091C764984_METHOD_2_BC516B11D23A6AF6_OFFSET UNITYSDK_OFFSET(0xD753160)
#define CLASS_2_D8EC95091C764984_METHOD_2_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0xD7532F0)
#define CLASS_2_D8EC95091C764984__CTOR_OFFSET UNITYSDK_OFFSET(0xD753550)
#define CLASS_2_D8EC95091C764984__ONBIND_OFFSET UNITYSDK_OFFSET(0xD752FA0)

inline static constexpr unsigned int Class_2_D8EC95091C764984_TypeDefinitionIndex = 71789;

class Class_2_D8EC95091C764984 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* PENODFJKLGN; // 0x0
	// static const ::System::String* KDODNCFEJFD; // 0x0
	// static const ::System::String* NMHICHPNEHN; // 0x0
	// static const ::System::String* PECBECKJLJA; // 0x0
	// static const ::System::String* PNKIHIGMFON; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x60
	::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x68
	::System::Boolean CHMLELPHHIO; // 0x70
	::RPG::GameCore::StageInvasionMonsterState DLNIGFGLPLJ; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_58D059534BC46B02()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_58D059534BC46B02_OFFSET))(this);
	}

	::System::Void Method_2_BC516B11D23A6AF6(::RPG::GameCore::StageInvasionMonsterState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterState))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_BC516B11D23A6AF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_760FD1B4F7D8B904()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_760FD1B4F7D8B904_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
