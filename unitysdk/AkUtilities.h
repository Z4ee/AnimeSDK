#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKUTILITIES_FIXSLASHES_1_OFFSET UNITYSDK_OFFSET(0x1B4B92B0)
#define AKUTILITIES_FIXSLASHES_OFFSET UNITYSDK_OFFSET(0x1B4B8EF0)
#define AKUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B94B0)

inline static constexpr unsigned int AkUtilities_TypeDefinitionIndex = 41234;

class AkUtilities : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUTILITIES__CTOR_OFFSET))(this);
	}

	static ::System::Void FixSlashes(::System::String*& a1, ::System::Char a2, ::System::Char a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*&, ::System::Char, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUTILITIES_FIXSLASHES_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void FixSlashes_1(::System::String*& a1)
	{
		return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + AKUTILITIES_FIXSLASHES_1_OFFSET))(a1);
	}
};
