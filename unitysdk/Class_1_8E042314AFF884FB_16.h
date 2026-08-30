#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_8E5D4274ED1F9117;

#define CLASS_1_8E042314AFF884FB_16_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18CD7600)
#define CLASS_1_8E042314AFF884FB_16_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x18CD7820)
#define CLASS_1_8E042314AFF884FB_16__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD75F0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_16_TypeDefinitionIndex = 76839;

class Class_1_8E042314AFF884FB_16 : public ::System::Object
{
public:
	::Class_3_8E5D4274ED1F9117* PDENFEFCAGN; // 0x10
	::Class_1_3B1EA953A4067E26_2* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_8E5D4274ED1F9117* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_8E5D4274ED1F9117*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_16_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_16_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};
