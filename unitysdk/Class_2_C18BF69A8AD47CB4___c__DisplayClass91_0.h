#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6B57C0CB1CF5E075;

#define CLASS_2_C18BF69A8AD47CB4___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1161E0F0)
#define CLASS_2_C18BF69A8AD47CB4___C__DISPLAYCLASS91_0__FINDITEMBYCHARACTERID_B__0_OFFSET UNITYSDK_OFFSET(0x1161F530)

inline static constexpr unsigned int Class_2_C18BF69A8AD47CB4___c__DisplayClass91_0_TypeDefinitionIndex = 58346;

class Class_2_C18BF69A8AD47CB4___c__DisplayClass91_0 : public ::System::Object
{
public:
	::System::UInt32 characterID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C18BF69A8AD47CB4___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FindItemByCharacterID_b__0(::Class_2_6B57C0CB1CF5E075* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075*))((::PBYTE)hIl2Cpp + CLASS_2_C18BF69A8AD47CB4___C__DISPLAYCLASS91_0__FINDITEMBYCHARACTERID_B__0_OFFSET))(this, item);
	}
};
