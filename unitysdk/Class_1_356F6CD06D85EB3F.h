#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_8E5D4274ED1F9117;

#define CLASS_1_356F6CD06D85EB3F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18E59E60)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x18E5A1C0)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0x18E59FD0)
#define CLASS_1_356F6CD06D85EB3F_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x18E59C00)
#define CLASS_1_356F6CD06D85EB3F__CTOR_OFFSET UNITYSDK_OFFSET(0x18E59BF0)

inline static constexpr unsigned int Class_1_356F6CD06D85EB3F_TypeDefinitionIndex = 76844;

class Class_1_356F6CD06D85EB3F : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_2* FKINCGODJEP; // 0x10
	::Class_3_8E5D4274ED1F9117* PDENFEFCAGN; // 0x18
	::System::Int32 KCFDGCGIMCE; // 0x20
	::System::Int32 MGBEAJHOBFJ; // 0x24
	::System::Int32 NIAMNKNDNNI; // 0x28
	::System::Boolean DNMEALHNIKO; // 0x2C
	::System::Single BNBJFLMCFII; // 0x30
	::System::Single OOBNLIIGFLA; // 0x34
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
