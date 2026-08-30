#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7EA980DC521F5B87__CTOR_OFFSET UNITYSDK_OFFSET(0x1A801610)

inline static constexpr unsigned int Class_1_7EA980DC521F5B87_TypeDefinitionIndex = 62968;

class Class_1_7EA980DC521F5B87 : public ::System::Object
{
public:
	::System::String* CCCKHLOILKE; // 0x10
	::System::UInt32 IDPNLDKDKJI; // 0x18
	::System::Boolean DNDBBEOCMBK; // 0x1C
	::System::UInt32 IHCCKKJKDNP; // 0x20

	::System::Void _ctor(::System::Boolean a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EA980DC521F5B87__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
