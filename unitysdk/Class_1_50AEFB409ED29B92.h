#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_50AEFB409ED29B92_GET_INITTABENUM_OFFSET UNITYSDK_OFFSET(0xDD90210)
#define CLASS_1_50AEFB409ED29B92_GET_ISEXITBATTLEBTNDISABLE_OFFSET UNITYSDK_OFFSET(0xDD901F0)
#define CLASS_1_50AEFB409ED29B92_GET_ISTRYOPEN_OFFSET UNITYSDK_OFFSET(0xDD901D0)
#define CLASS_1_50AEFB409ED29B92_METHOD_1_93A3552F1AD521B8_OFFSET UNITYSDK_OFFSET(0xDD90170)
#define CLASS_1_50AEFB409ED29B92_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDD90120)
#define CLASS_1_50AEFB409ED29B92_SET_INITTABENUM_OFFSET UNITYSDK_OFFSET(0xDD90220)
#define CLASS_1_50AEFB409ED29B92_SET_ISEXITBATTLEBTNDISABLE_OFFSET UNITYSDK_OFFSET(0xDD90200)
#define CLASS_1_50AEFB409ED29B92_SET_ISTRYOPEN_OFFSET UNITYSDK_OFFSET(0xDD901E0)
#define CLASS_1_50AEFB409ED29B92__CTOR_OFFSET UNITYSDK_OFFSET(0xDD90230)

inline static constexpr unsigned int Class_1_50AEFB409ED29B92_TypeDefinitionIndex = 71597;

class Class_1_50AEFB409ED29B92 : public ::System::Object
{
public:
	::RPG::Client::PauseDialogTabEnum _InitTabEnum_k__BackingField; // 0x10
	::System::Boolean _IsExitBattleBtnDisable_k__BackingField; // 0x14
	::System::Boolean _IsTryOpen_k__BackingField; // 0x15

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_93A3552F1AD521B8(::System::Boolean a1, ::RPG::Client::PauseDialogTabEnum a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PauseDialogTabEnum))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_METHOD_1_93A3552F1AD521B8_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsTryOpen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_GET_ISTRYOPEN_OFFSET))(this);
	}

	::System::Void set_IsTryOpen(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_SET_ISTRYOPEN_OFFSET))(this, a1);
	}

	::System::Boolean get_IsExitBattleBtnDisable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_GET_ISEXITBATTLEBTNDISABLE_OFFSET))(this);
	}

	::System::Void set_IsExitBattleBtnDisable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_SET_ISEXITBATTLEBTNDISABLE_OFFSET))(this, a1);
	}

	::RPG::Client::PauseDialogTabEnum get_InitTabEnum()
	{
		return ((::RPG::Client::PauseDialogTabEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_GET_INITTABENUM_OFFSET))(this);
	}

	::System::Void set_InitTabEnum(::RPG::Client::PauseDialogTabEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseDialogTabEnum))((::PBYTE)hIl2Cpp + CLASS_1_50AEFB409ED29B92_SET_INITTABENUM_OFFSET))(this, a1);
	}
};
