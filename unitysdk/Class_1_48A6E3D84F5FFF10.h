#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_48A6E3D84F5FFF10_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1CFE4080)
#define CLASS_1_48A6E3D84F5FFF10__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE4200)

inline static constexpr unsigned int Class_1_48A6E3D84F5FFF10_TypeDefinitionIndex = 11976;

class Class_1_48A6E3D84F5FFF10 : public ::System::Object
{
public:
	::RPG::Client::TextID NMAHGFAPENI; // 0x10
	::Enum_3_63C076C405BE0674 GMPGDEINODK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48A6E3D84F5FFF10__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_48A6E3D84F5FFF10*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_48A6E3D84F5FFF10*&))((::PBYTE)hIl2Cpp + CLASS_1_48A6E3D84F5FFF10_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
