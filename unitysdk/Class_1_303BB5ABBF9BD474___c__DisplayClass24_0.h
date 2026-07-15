#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B29D74C19351AA14;

#define CLASS_1_303BB5ABBF9BD474___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15643000)
#define CLASS_1_303BB5ABBF9BD474___C__DISPLAYCLASS24_0___REMOVEEDGEFROMADJACENCYLIST_B__0_OFFSET UNITYSDK_OFFSET(0x15643010)

inline static constexpr unsigned int Class_1_303BB5ABBF9BD474___c__DisplayClass24_0_TypeDefinitionIndex = 71176;

class Class_1_303BB5ABBF9BD474___c__DisplayClass24_0 : public ::System::Object
{
public:
	::Class_1_B29D74C19351AA14* edge; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RemoveEdgeFromAdjacencyList_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474___C__DISPLAYCLASS24_0___REMOVEEDGEFROMADJACENCYLIST_B__0_OFFSET))(this, a1);
	}
};
