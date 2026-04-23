#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AAFD4F462EFCCE4D;
namespace System { class String; }

#define CLASS_1_AAFD4F462EFCCE4D___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99EB1B0)
#define CLASS_1_AAFD4F462EFCCE4D___C__DISPLAYCLASS8_0__SETTIMEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x99EC410)

inline static constexpr unsigned int Class_1_AAFD4F462EFCCE4D___c__DisplayClass8_0_TypeDefinitionIndex = 45799;

class Class_1_AAFD4F462EFCCE4D___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::String* info; // 0x10
	::Class_1_AAFD4F462EFCCE4D* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAFD4F462EFCCE4D___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetTimeout_b__0(::System::Int32 id)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AAFD4F462EFCCE4D___C__DISPLAYCLASS8_0__SETTIMEOUT_B__0_OFFSET))(this, id);
	}
};
