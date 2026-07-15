#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

class Class_0_16E4307DCC419505_328;
namespace System { class String; }

#define CLASS_2_49B8518B8EA39010_GET_CONSTKEY_OFFSET UNITYSDK_OFFSET(0x1D2BE100)
#define CLASS_2_49B8518B8EA39010__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE080)

inline static constexpr unsigned int Class_2_49B8518B8EA39010_TypeDefinitionIndex = 42380;

class Class_2_49B8518B8EA39010 : public ::System::Attribute
{
public:
	::System::String* _ConstKey_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49B8518B8EA39010__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_ConstKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49B8518B8EA39010_GET_CONSTKEY_OFFSET))(this);
	}
};
