#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

class Class_0_16E4307DCC419505_377;
namespace System { class Object; }

#define CLASS_2_C4FAEC1B93D3A83B_METHOD_2_FA458439E8BD188D_OFFSET UNITYSDK_OFFSET(0x13A0C0B0)
#define CLASS_2_C4FAEC1B93D3A83B__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0C180)

inline static constexpr unsigned int Class_2_C4FAEC1B93D3A83B_TypeDefinitionIndex = 47189;

class Class_2_C4FAEC1B93D3A83B : public ::System::EventArgs
{
public:
	::System::Object* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4FAEC1B93D3A83B__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_377* Method_2_FA458439E8BD188D()
	{
		return ((::Class_0_16E4307DCC419505_377*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4FAEC1B93D3A83B_METHOD_2_FA458439E8BD188D_OFFSET))(this);
	}
};
