#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class FileInfo; }

#define CLASS_1_F9CED59F6AC83681___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D78A10)
#define CLASS_1_F9CED59F6AC83681___C__DISPLAYCLASS44_0__DELETEFILES_B__0_OFFSET UNITYSDK_OFFSET(0x19D7E1F0)

inline static constexpr unsigned int Class_1_F9CED59F6AC83681___c__DisplayClass44_0_TypeDefinitionIndex = 9738;

class Class_1_F9CED59F6AC83681___c__DisplayClass44_0 : public ::System::Object
{
public:
	::System::String* exceptName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _DeleteFiles_b__0(::System::IO::FileInfo* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__DISPLAYCLASS44_0__DELETEFILES_B__0_OFFSET))(this, e);
	}
};
