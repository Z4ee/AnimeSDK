#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_B765DBF21AEA54A0_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1A6C22F0)
#define CLASS_1_B765DBF21AEA54A0_METHOD_1_30A974A8F3C5C7D7_OFFSET UNITYSDK_OFFSET(0x1A6C2200)
#define CLASS_1_B765DBF21AEA54A0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A6C2120)
#define CLASS_1_B765DBF21AEA54A0_METHOD_1_6AF841D9A565729D_OFFSET UNITYSDK_OFFSET(0x1A6C2160)
#define CLASS_1_B765DBF21AEA54A0_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1A6C20D0)
#define CLASS_1_B765DBF21AEA54A0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A6C22B0)
#define CLASS_1_B765DBF21AEA54A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C23C0)

inline static constexpr unsigned int Class_1_B765DBF21AEA54A0_TypeDefinitionIndex = 63934;

class Class_1_B765DBF21AEA54A0 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::GameCore::BaseExpeditionBattleAction*>* FEICCPBBIHG; // 0x10
	::System::Boolean HDPLEHFEOFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_6AF841D9A565729D(::RPG::GameCore::BaseExpeditionBattleAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0_METHOD_1_6AF841D9A565729D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_30A974A8F3C5C7D7(::RPG::GameCore::BaseExpeditionBattleAction*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*&))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0_METHOD_1_30A974A8F3C5C7D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765DBF21AEA54A0_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
