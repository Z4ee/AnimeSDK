#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_1_B6A8A062463EFFDD;

#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x10C43A40)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x10C43B10)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x10C43B80)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3E7A0)

inline static constexpr unsigned int Class_1_B6A8A062463EFFDD___c__DisplayClass7_0_TypeDefinitionIndex = 48209;

class Class_1_B6A8A062463EFFDD___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_B6A8A062463EFFDD* __4__this; // 0x10
	::System::Int64 timeStart; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddMultiDownload_b__0(::Class_0_16E4307DCC419505_478* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, prog);
	}

	::System::Void _AddMultiDownload_b__1(::Class_0_16E4307DCC419505_478* prog, ::Class_0_16E4307DCC419505_480* data, ::System::Object* item, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, prog, data, item, code);
	}

	::System::Void _AddMultiDownload_b__2(::Class_0_16E4307DCC419505_478* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, prog);
	}
};
