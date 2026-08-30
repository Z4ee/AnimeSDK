#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_3C4615FE140CEF56__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB67C70)

inline static constexpr unsigned int Class_2_3C4615FE140CEF56_TypeDefinitionIndex = 10366;

class Class_2_3C4615FE140CEF56 : public ::System::Attribute
{
public:
	::System::Type* KADECLDAMHI; // 0x10
	::System::Boolean HNCCFGKGJEC; // 0x18
	::System::Boolean JIFECLMMJPF; // 0x19

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Type* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_3C4615FE140CEF56__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
