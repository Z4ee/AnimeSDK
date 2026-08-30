#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_8E5D4274ED1F9117;

#define CLASS_1_356F6CD06D85EB3F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x161A8E50)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x161A91B0)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0x161A8FC0)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x161A8BF0)
#define CLASS_1_356F6CD06D85EB3F__CTOR_OFFSET UNITYSDK_OFFSET(0x161A8BE0)

inline static constexpr unsigned int Class_1_356F6CD06D85EB3F_TypeDefinitionIndex = 76845;

class Class_1_356F6CD06D85EB3F : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_2* FKINCGODJEP; // 0x10
	::Class_3_8E5D4274ED1F9117* PDENFEFCAGN; // 0x18
	::System::Boolean DNMEALHNIKO; // 0x20
	::System::Single BNBJFLMCFII; // 0x24
	::System::Single OOBNLIIGFLA; // 0x28
	::System::Int32 KCFDGCGIMCE; // 0x2C
	::System::Int32 MGBEAJHOBFJ; // 0x30
	::System::Int32 NIAMNKNDNNI; // 0x34
	::System::Single EHHMAOAHGFJ; // 0x38

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_8E5D4274ED1F9117* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_8E5D4274ED1F9117*))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_B991AA5072E9A99A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_METHOD_1_B991AA5072E9A99A_OFFSET))(this);
	}

	::System::Void Method_1_9823BFA3CE8B5542(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_METHOD_1_9823BFA3CE8B5542_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_356F6CD06D85EB3F_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}
};
