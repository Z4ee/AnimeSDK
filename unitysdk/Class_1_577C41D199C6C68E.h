#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_0_16E4307DCC419505_338;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_577C41D199C6C68E_GET_FIRSTCOMMAND_OFFSET UNITYSDK_OFFSET(0x16FB5510)
#define CLASS_1_577C41D199C6C68E_GET_FIRSTREDDOTKEY_OFFSET UNITYSDK_OFFSET(0x16FB54D0)
#define CLASS_1_577C41D199C6C68E_GET_FOURTHCOMMAND_OFFSET UNITYSDK_OFFSET(0x16FB5540)
#define CLASS_1_577C41D199C6C68E_GET_FOURTHREDDOTKEY_OFFSET UNITYSDK_OFFSET(0x16FB5500)
#define CLASS_1_577C41D199C6C68E_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x16FB54C0)
#define CLASS_1_577C41D199C6C68E_GET_SECONDCOMMAND_OFFSET UNITYSDK_OFFSET(0x16FB5520)
#define CLASS_1_577C41D199C6C68E_GET_SECONDREDDOTKEY_OFFSET UNITYSDK_OFFSET(0x16FB54E0)
#define CLASS_1_577C41D199C6C68E_GET_THIRDCOMMAND_OFFSET UNITYSDK_OFFSET(0x16FB5530)
#define CLASS_1_577C41D199C6C68E_GET_THIRDREDDOTKEY_OFFSET UNITYSDK_OFFSET(0x16FB54F0)
#define CLASS_1_577C41D199C6C68E__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB5550)

inline static constexpr unsigned int Class_1_577C41D199C6C68E_TypeDefinitionIndex = 50378;

class Class_1_577C41D199C6C68E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_318* _FourthCommand_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::String*>* _ThirdRedDotKey_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::System::String*>* _FirstRedDotKey_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_318* _SecondCommand_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::Boolean>* _IsVisible_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::String*>* _SecondRedDotKey_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_318* _FirstCommand_k__BackingField; // 0x40
	::Class_0_16E4307DCC419505_318* _ThirdCommand_k__BackingField; // 0x48
	::R3::ReactiveProperty_1<::System::String*>* _FourthRedDotKey_k__BackingField; // 0x50

	::System::Void _ctor(::Class_0_16E4307DCC419505_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E__CTOR_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_ISVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_FirstRedDotKey()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_FIRSTREDDOTKEY_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_SecondRedDotKey()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_SECONDREDDOTKEY_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_ThirdRedDotKey()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_THIRDREDDOTKEY_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_FourthRedDotKey()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_FOURTHREDDOTKEY_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_FirstCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_FIRSTCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_SecondCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_SECONDCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ThirdCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_THIRDCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_FourthCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E_GET_FOURTHCOMMAND_OFFSET))(this);
	}
};
