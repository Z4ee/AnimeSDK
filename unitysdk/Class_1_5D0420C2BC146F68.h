#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5D0420C2BC146F68_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x19343F60)
#define CLASS_1_5D0420C2BC146F68__CTOR_OFFSET UNITYSDK_OFFSET(0x19344140)

inline static constexpr unsigned int Class_1_5D0420C2BC146F68_TypeDefinitionIndex = 13253;

class Class_1_5D0420C2BC146F68 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::RPG::GameCore::GenderType Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D0420C2BC146F68__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5D0420C2BC146F68*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5D0420C2BC146F68*&))((::PBYTE)hIl2Cpp + CLASS_1_5D0420C2BC146F68_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
