#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_1_21918336DBB42BE8_METHOD_1_35AAEAF50C6CD28E_OFFSET UNITYSDK_OFFSET(0x15967A10)
#define CLASS_1_21918336DBB42BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x15967A00)

inline static constexpr unsigned int Class_1_21918336DBB42BE8_TypeDefinitionIndex = 56664;

class Class_1_21918336DBB42BE8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21918336DBB42BE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_35AAEAF50C6CD28E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_21918336DBB42BE8_METHOD_1_35AAEAF50C6CD28E_OFFSET))(this, a1);
	}
};
