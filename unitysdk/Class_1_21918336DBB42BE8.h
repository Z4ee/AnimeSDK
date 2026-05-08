#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_1_21918336DBB42BE8_METHOD_1_35AAEAF50C6CD28E_OFFSET UNITYSDK_OFFSET(0x14E22330)
#define CLASS_1_21918336DBB42BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x14E22320)

inline static constexpr unsigned int Class_1_21918336DBB42BE8_TypeDefinitionIndex = 53582;

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
