#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E3E37125DAA7A899_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1A57D510)
#define CLASS_1_E3E37125DAA7A899__CTOR_OFFSET UNITYSDK_OFFSET(0x1A57D580)

inline static constexpr unsigned int Class_1_E3E37125DAA7A899_TypeDefinitionIndex = 35518;

class Class_1_E3E37125DAA7A899 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BFMIOOIDNJM; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* CDAAHGAIJMP; // 0x18
	::System::Boolean PONDPEDABAF; // 0x20
	::System::Boolean MBCNGGNENHJ; // 0x21
	::System::Int32 BDGECKGNFFM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3E37125DAA7A899__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_E3E37125DAA7A899* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3E37125DAA7A899*))((::PBYTE)hIl2Cpp + CLASS_1_E3E37125DAA7A899_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
