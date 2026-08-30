#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_421EEC7165E139E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1676B200)
#define CLASS_2_421EEC7165E139E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1676B1A0)

inline static constexpr unsigned int Class_2_421EEC7165E139E4_TypeDefinitionIndex = 67502;

class Class_2_421EEC7165E139E4 : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4__CTOR_1_OFFSET))(this, a1, a2);
	}
};
