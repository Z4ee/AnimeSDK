#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_421EEC7165E139E4_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17675100)
#define CLASS_2_421EEC7165E139E4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176750A0)

inline static constexpr unsigned int Class_2_421EEC7165E139E4_1_TypeDefinitionIndex = 64507;

class Class_2_421EEC7165E139E4_1 : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_421EEC7165E139E4_1__CTOR_1_OFFSET))(this, a1, a2);
	}
};
