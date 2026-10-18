#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_0_16E4307DCC419505_743;
class Class_1_D7FE7C0ADCE6BFB9;

#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x154DEDA0)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x154DEE70)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x154DEEE0)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x154D8700)

inline static constexpr unsigned int Class_1_D7FE7C0ADCE6BFB9___c__DisplayClass7_0_TypeDefinitionIndex = 59568;

class Class_1_D7FE7C0ADCE6BFB9___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_D7FE7C0ADCE6BFB9* __4__this; // 0x10
	::System::Int64 timeStart; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddMultiDownload_b__0(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void _AddMultiDownload_b__1(::Class_0_16E4307DCC419505_741* a1, ::Class_0_16E4307DCC419505_743* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*, ::Class_0_16E4307DCC419505_743*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _AddMultiDownload_b__2(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, a1);
	}
};
