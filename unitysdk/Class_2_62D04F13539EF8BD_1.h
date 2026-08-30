#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_62D04F13539EF8BD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34E470)

inline static constexpr unsigned int Class_2_62D04F13539EF8BD_1_TypeDefinitionIndex = 24738;

class Class_2_62D04F13539EF8BD_1 : public ::System::Attribute
{
public:
	::System::String* IBJBDBHBKEK; // 0x10
	::System::String* ENGGCENAFPM; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD_1__CTOR_OFFSET))(this, a1, a2);
	}
};
