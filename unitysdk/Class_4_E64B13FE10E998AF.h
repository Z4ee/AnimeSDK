#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_E64B13FE10E998AF_METHOD_4_D73461FD6B79DF73_OFFSET UNITYSDK_OFFSET(0x183C61A0)
#define CLASS_4_E64B13FE10E998AF_METHOD_4_DC9F2B18FBAB6ADB_OFFSET UNITYSDK_OFFSET(0x183C6280)
#define CLASS_4_E64B13FE10E998AF__CTOR_OFFSET UNITYSDK_OFFSET(0x183C6220)

inline static constexpr unsigned int Class_4_E64B13FE10E998AF_TypeDefinitionIndex = 23060;

class Class_4_E64B13FE10E998AF : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::RPG::GameCore::FixPoint Field_4_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E64B13FE10E998AF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_D73461FD6B79DF73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E64B13FE10E998AF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E64B13FE10E998AF*&))((::PBYTE)hIl2Cpp + CLASS_4_E64B13FE10E998AF_METHOD_4_D73461FD6B79DF73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_DC9F2B18FBAB6ADB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E64B13FE10E998AF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E64B13FE10E998AF*))((::PBYTE)hIl2Cpp + CLASS_4_E64B13FE10E998AF_METHOD_4_DC9F2B18FBAB6ADB_OFFSET))(a1, a2);
	}
};
