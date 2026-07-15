#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_98AB177159EFAB8F_SET_OFFSET UNITYSDK_OFFSET(0x1AC80CD0)
#define CLASS_1_98AB177159EFAB8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC80CE0)

inline static constexpr unsigned int Class_1_98AB177159EFAB8F_TypeDefinitionIndex = 33786;

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
