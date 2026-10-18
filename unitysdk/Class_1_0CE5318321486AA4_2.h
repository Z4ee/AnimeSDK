#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0CE5318321486AA4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15D94830)

inline static constexpr unsigned int Class_1_0CE5318321486AA4_2_TypeDefinitionIndex = 48970;

class Class_1_0CE5318321486AA4_2 : public ::System::Object
{
public:
	::System::String* NCJBHLEKMIE; // 0x10
	::System::String* FLNEHHAEINF; // 0x18
	::System::Int32 MCCNAJOKJPO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE5318321486AA4_2__CTOR_OFFSET))(this);
	}
};
