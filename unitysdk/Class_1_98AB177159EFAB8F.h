#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_98AB177159EFAB8F_SET_OFFSET UNITYSDK_OFFSET(0x1ABF4350)
#define CLASS_1_98AB177159EFAB8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF4360)

inline static constexpr unsigned int Class_1_98AB177159EFAB8F_TypeDefinitionIndex = 33416;

class Class_1_98AB177159EFAB8F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AB177159EFAB8F__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98AB177159EFAB8F_SET_OFFSET))(this, a1);
	}
};
