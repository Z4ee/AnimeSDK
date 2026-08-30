#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"

class Class_1_D26322A0A5D2FA93;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A0F7052F7BEDB7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED7D9D0)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_41BCBD63D863EBC7_OFFSET UNITYSDK_OFFSET(0xED7DCD0)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_4BED6B3C2E3B03B2_OFFSET UNITYSDK_OFFSET(0xED7DF00)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_4BFEF37B95753ADB_OFFSET UNITYSDK_OFFSET(0xED7DC20)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_84477C74B966316D_OFFSET UNITYSDK_OFFSET(0xED7E000)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_93AD5FDF788A0CCA_OFFSET UNITYSDK_OFFSET(0xED7E250)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_C6C47C9FFA92653C_1_OFFSET UNITYSDK_OFFSET(0xED7E1B0)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0xED7DB80)
#define CLASS_1_0A0F7052F7BEDB7E_METHOD_1_F072550329FC7079_OFFSET UNITYSDK_OFFSET(0xED7E100)
#define CLASS_1_0A0F7052F7BEDB7E__CTOR_OFFSET UNITYSDK_OFFSET(0xED7D930)

inline static constexpr unsigned int Class_1_0A0F7052F7BEDB7E_TypeDefinitionIndex = 60867;

class Class_1_0A0F7052F7BEDB7E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D26322A0A5D2FA93*>* MLHPHHBNHGN; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ScreenTransferReason, ::Class_1_D26322A0A5D2FA93*>* JHMOGMLKONE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C6C47C9FFA92653C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_C6C47C9FFA92653C_OFFSET))(this);
	}

	::System::Void Method_1_4BFEF37B95753ADB(::RPG::GameCore::ScreenTransferReason a1, ::System::Action* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_4BFEF37B95753ADB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4BED6B3C2E3B03B2(::RPG::GameCore::ScreenTransferReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::Func_1<::System::Boolean>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_4BED6B3C2E3B03B2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_84477C74B966316D(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_84477C74B966316D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6C47C9FFA92653C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_C6C47C9FFA92653C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_93AD5FDF788A0CCA(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_93AD5FDF788A0CCA_OFFSET))(this, a1);
	}

	::Class_1_D26322A0A5D2FA93* Method_1_F072550329FC7079(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::Class_1_D26322A0A5D2FA93*(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_F072550329FC7079_OFFSET))(this, a1);
	}

	::Class_1_D26322A0A5D2FA93* Method_1_41BCBD63D863EBC7(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::Class_1_D26322A0A5D2FA93*(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_0A0F7052F7BEDB7E_METHOD_1_41BCBD63D863EBC7_OFFSET))(this, a1);
	}
};
