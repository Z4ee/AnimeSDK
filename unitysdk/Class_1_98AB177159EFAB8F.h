#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_98AB177159EFAB8F_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x1CC61490)
#define CLASS_1_98AB177159EFAB8F_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1CC61480)
#define CLASS_1_98AB177159EFAB8F_METHOD_1_D31445FB1BF30A00_OFFSET UNITYSDK_OFFSET(0x1CC614A0)
#define CLASS_1_98AB177159EFAB8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC614B0)

inline static constexpr unsigned int Class_1_98AB177159EFAB8F_TypeDefinitionIndex = 43889;

class Class_1_98AB177159EFAB8F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AB177159EFAB8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98AB177159EFAB8F_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98AB177159EFAB8F_METHOD_1_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D31445FB1BF30A00(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98AB177159EFAB8F_METHOD_1_D31445FB1BF30A00_OFFSET))(this, a1);
	}
};
