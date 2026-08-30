#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5D0420C2BC146F68_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1D1EE270)
#define CLASS_1_5D0420C2BC146F68__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EE450)

inline static constexpr unsigned int Class_1_5D0420C2BC146F68_TypeDefinitionIndex = 13792;

class Class_1_5D0420C2BC146F68 : public ::System::Object
{
public:
	::System::String* GJMHAJGIHOM; // 0x10
	::System::String* HHIIGAIJEDA; // 0x18
	::System::String* DEJJGGOABPA; // 0x20
	::System::UInt32 CMNOEFFFNPE; // 0x28
	::RPG::GameCore::GenderType KAINAFFMLBK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D0420C2BC146F68__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5D0420C2BC146F68*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5D0420C2BC146F68*&))((::PBYTE)hIl2Cpp + CLASS_1_5D0420C2BC146F68_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
