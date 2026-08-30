#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS1_0__ADDITEMDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB68AF60)
#define CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB68A950)

inline static constexpr unsigned int Class_1_B284D3458611CEA4_1___c__DisplayClass1_0_TypeDefinitionIndex = 72098;

class Class_1_B284D3458611CEA4_1___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* currentTurnList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _AddItemData_b__0(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS1_0__ADDITEMDATA_B__0_OFFSET))(this, a1, a2);
	}
};
