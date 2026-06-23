#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_05BFAB15000D9DD3;

#define CLASS_3_A42664BCA86380DE_CLASS_1_373F0823370F2009_METHOD_1_50BE26AF88731CD4_OFFSET UNITYSDK_OFFSET(0x12FA82F0)
#define CLASS_3_A42664BCA86380DE_CLASS_1_373F0823370F2009__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA82E0)

inline static constexpr unsigned int Class_3_A42664BCA86380DE_Class_1_373F0823370F2009_TypeDefinitionIndex = 84678;

class Class_3_A42664BCA86380DE_Class_1_373F0823370F2009 : public ::System::Object
{
public:
	::Class_2_05BFAB15000D9DD3* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_CLASS_1_373F0823370F2009__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50BE26AF88731CD4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_A42664BCA86380DE_CLASS_1_373F0823370F2009_METHOD_1_50BE26AF88731CD4_OFFSET))(this, a1);
	}
};
