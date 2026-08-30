#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_1_E750E5E5D854E770;
namespace System { class String; }

#define CLASS_2_AA0FD2C69EF67864__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1848B2E0)
#define CLASS_2_AA0FD2C69EF67864__CTOR_OFFSET UNITYSDK_OFFSET(0x1848B2D0)

inline static constexpr unsigned int Class_2_AA0FD2C69EF67864_TypeDefinitionIndex = 73325;

class Class_2_AA0FD2C69EF67864 : public ::System::Exception
{
public:
	::System::Void _ctor(::Class_1_E750E5E5D854E770* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E750E5E5D854E770*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AA0FD2C69EF67864__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_E750E5E5D854E770* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E750E5E5D854E770*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_AA0FD2C69EF67864__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
