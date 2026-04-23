#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_1_8C3AC9786B6764EF;

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x97FFE40)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x97FFF10)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x97FFF80)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FAA60)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass7_0_TypeDefinitionIndex = 54954;

class Class_1_8C3AC9786B6764EF___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x10
	::System::Int64 timeStart; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddMultiDownload_b__0(::Class_0_16E4307DCC419505_557* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, prog);
	}

	::System::Void _AddMultiDownload_b__1(::Class_0_16E4307DCC419505_557* prog, ::Class_0_16E4307DCC419505_559* data, ::System::Object* item, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, prog, data, item, code);
	}

	::System::Void _AddMultiDownload_b__2(::Class_0_16E4307DCC419505_557* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, prog);
	}
};
