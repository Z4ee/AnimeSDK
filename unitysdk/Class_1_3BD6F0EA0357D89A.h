#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3BD6F0EA0357D89A_CLEAR_OFFSET UNITYSDK_OFFSET(0x14B24200)
#define CLASS_1_3BD6F0EA0357D89A_METHOD_1_7BB228510A9B9B1A_OFFSET UNITYSDK_OFFSET(0x14B24240)
#define CLASS_1_3BD6F0EA0357D89A__CTOR_OFFSET UNITYSDK_OFFSET(0x14B24520)

inline static constexpr unsigned int Class_1_3BD6F0EA0357D89A_TypeDefinitionIndex = 70033;

class Class_1_3BD6F0EA0357D89A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BD6F0EA0357D89A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BD6F0EA0357D89A_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_7BB228510A9B9B1A(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_3BD6F0EA0357D89A_METHOD_1_7BB228510A9B9B1A_OFFSET))(this, a1, a2);
	}
};
