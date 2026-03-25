#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;

#define CLASS_1_2A97E60807F449E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3B9A0)

inline static constexpr unsigned int Class_1_2A97E60807F449E7_TypeDefinitionIndex = 58328;

class Class_1_2A97E60807F449E7 : public ::System::Object
{
public:
	::Class_1_02D30900317D93FD* Field_1_0; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::RPG::Client::ActionBarItemAction Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor(::RPG::Client::ActionBarItemAction a1, ::Class_1_02D30900317D93FD* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_02D30900317D93FD*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A97E60807F449E7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
