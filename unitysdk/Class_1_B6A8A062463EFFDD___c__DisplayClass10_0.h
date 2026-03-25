#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_69;
class Class_1_B6A8A062463EFFDD;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x10C43740)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x10C436B0)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3EEE0)

inline static constexpr unsigned int Class_1_B6A8A062463EFFDD___c__DisplayClass10_0_TypeDefinitionIndex = 48205;

class Class_1_B6A8A062463EFFDD___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_B6A8A062463EFFDD* __4__this; // 0x10
	::RPG::Client::DataActionProgress_1<::Class_0_16E4307DCC419505_69*>* progress; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddPreVerify_b__1(::Class_0_16E4307DCC419505_478* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__1_OFFSET))(this, prog);
	}

	::System::Void _AddPreVerify_b__0(::Class_0_16E4307DCC419505_480* data, ::Class_0_16E4307DCC419505_69* block)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__0_OFFSET))(this, data, block);
	}
};
