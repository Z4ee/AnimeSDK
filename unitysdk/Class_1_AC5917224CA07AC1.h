#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_AC5917224CA07AC1_METHOD_1_0131B28D046A5D7C_OFFSET UNITYSDK_OFFSET(0x19EA4970)
#define CLASS_1_AC5917224CA07AC1__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA4C00)

inline static constexpr unsigned int Class_1_AC5917224CA07AC1_TypeDefinitionIndex = 13132;

class Class_1_AC5917224CA07AC1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC5917224CA07AC1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0131B28D046A5D7C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_AC5917224CA07AC1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_AC5917224CA07AC1*&))((::PBYTE)hIl2Cpp + CLASS_1_AC5917224CA07AC1_METHOD_1_0131B28D046A5D7C_OFFSET))(a1, a2);
	}
};
