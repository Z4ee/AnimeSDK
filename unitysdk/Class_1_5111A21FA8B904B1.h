#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_540;
namespace System { class String; }

#define CLASS_1_5111A21FA8B904B1__CTOR_OFFSET UNITYSDK_OFFSET(0xB50FBC0)

inline static constexpr unsigned int Class_1_5111A21FA8B904B1_TypeDefinitionIndex = 55726;

class Class_1_5111A21FA8B904B1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_540* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_540* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_540*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5111A21FA8B904B1__CTOR_OFFSET))(this, a1, a2);
	}
};
