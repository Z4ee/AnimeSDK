#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_1_8CA784D26D9A6CF7;

#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1792EC00)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1792ECD0)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x1792ED40)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179284C0)

inline static constexpr unsigned int Class_1_8CA784D26D9A6CF7___c__DisplayClass7_0_TypeDefinitionIndex = 59713;

class Class_1_8CA784D26D9A6CF7___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_8CA784D26D9A6CF7* __4__this; // 0x10
	::System::Int64 timeStart; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddMultiDownload_b__0(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void _AddMultiDownload_b__1(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_652* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _AddMultiDownload_b__2(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, a1);
	}
};
