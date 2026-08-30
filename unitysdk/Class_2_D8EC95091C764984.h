#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"

namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_D8EC95091C764984_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A0CB350)
#define CLASS_2_D8EC95091C764984_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A0CAFB0)
#define CLASS_2_D8EC95091C764984_METHOD_2_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x1A0CAED0)
#define CLASS_2_D8EC95091C764984_METHOD_2_760FD1B4F7D8B904_OFFSET UNITYSDK_OFFSET(0x1A0CB000)
#define CLASS_2_D8EC95091C764984_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1A0CB400)
#define CLASS_2_D8EC95091C764984_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A0CB120)
#define CLASS_2_D8EC95091C764984_METHOD_2_BC516B11D23A6AF6_OFFSET UNITYSDK_OFFSET(0x1A0CB050)
#define CLASS_2_D8EC95091C764984_METHOD_2_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x1A0CB1E0)
#define CLASS_2_D8EC95091C764984__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CB460)
#define CLASS_2_D8EC95091C764984__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A0CAE60)

inline static constexpr unsigned int Class_2_D8EC95091C764984_TypeDefinitionIndex = 71732;

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
	::RPG::GameCore::StageInvasionMonsterState DLNIGFGLPLJ; // 0x70
	::System::Boolean CHMLELPHHIO; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_5739CCCE693D1FCB_OFFSET))(this);
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

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EC95091C764984_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
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
