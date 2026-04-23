#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_1_E750E5E5D854E770;
namespace System { class String; }

#define CLASS_2_BB6F7F4FB189DDA7__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA05A860)
#define CLASS_2_BB6F7F4FB189DDA7__CTOR_OFFSET UNITYSDK_OFFSET(0xA05A780)

inline static constexpr unsigned int Class_2_BB6F7F4FB189DDA7_TypeDefinitionIndex = 67613;

class Class_2_BB6F7F4FB189DDA7 : public ::System::Exception
{
public:
	::System::Void _ctor(::Class_1_E750E5E5D854E770* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E750E5E5D854E770*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BB6F7F4FB189DDA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_E750E5E5D854E770* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E750E5E5D854E770*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_BB6F7F4FB189DDA7__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
