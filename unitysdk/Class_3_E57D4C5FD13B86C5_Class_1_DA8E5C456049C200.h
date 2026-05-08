#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_757A5862D4BBEE41_1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_E57D4C5FD13B86C5_CLASS_1_DA8E5C456049C200_METHOD_1_61F6FB308DDC9A8C_OFFSET UNITYSDK_OFFSET(0x1315BE40)
#define CLASS_3_E57D4C5FD13B86C5_CLASS_1_DA8E5C456049C200__CTOR_OFFSET UNITYSDK_OFFSET(0x13159730)

inline static constexpr unsigned int Class_3_E57D4C5FD13B86C5_Class_1_DA8E5C456049C200_TypeDefinitionIndex = 50532;

class Class_3_E57D4C5FD13B86C5_Class_1_DA8E5C456049C200 : public ::System::Object
{
public:
	::Class_3_757A5862D4BBEE41_1* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E57D4C5FD13B86C5_CLASS_1_DA8E5C456049C200__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_61F6FB308DDC9A8C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E57D4C5FD13B86C5_CLASS_1_DA8E5C456049C200_METHOD_1_61F6FB308DDC9A8C_OFFSET))(this, a1);
	}
};
