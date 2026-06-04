#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;

#define CLASS_1_2A97E60807F449E7__CTOR_OFFSET UNITYSDK_OFFSET(0x138387E0)

inline static constexpr unsigned int Class_1_2A97E60807F449E7_TypeDefinitionIndex = 66551;

class Class_1_2A97E60807F449E7 : public ::System::Object
{
public:
	::Class_1_DDDB57AA67C3A9EA* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::RPG::Client::ActionBarItemAction Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24

	::System::Void _ctor(::RPG::Client::ActionBarItemAction a1, ::Class_1_DDDB57AA67C3A9EA* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A97E60807F449E7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
