#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_A488AA7614AA6A91__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE1B20)

inline static constexpr unsigned int Class_1_A488AA7614AA6A91_TypeDefinitionIndex = 56698;

class Class_1_A488AA7614AA6A91 : public ::System::Object
{
public:
	::System::Action* MKJGNGCLLMF; // 0x10
	::System::Action* FCMCMMPCGHG; // 0x18

	::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A488AA7614AA6A91__CTOR_OFFSET))(this, a1, a2);
	}
};
