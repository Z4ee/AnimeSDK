#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_DF55450D611DC90F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11425110)
#define CLASS_2_DF55450D611DC90F__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11425190)
#define CLASS_2_DF55450D611DC90F__CTOR_OFFSET UNITYSDK_OFFSET(0x11425090)

inline static constexpr unsigned int Class_2_DF55450D611DC90F_TypeDefinitionIndex = 60985;

class Class_2_DF55450D611DC90F : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF55450D611DC90F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DF55450D611DC90F__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_DF55450D611DC90F__CTOR_2_OFFSET))(this, a1, a2);
	}
};
