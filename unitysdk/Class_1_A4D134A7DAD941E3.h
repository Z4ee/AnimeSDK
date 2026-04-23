#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_A4D134A7DAD941E3_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x183D2670)
#define CLASS_1_A4D134A7DAD941E3__CTOR_OFFSET UNITYSDK_OFFSET(0x183D27C0)

inline static constexpr unsigned int Class_1_A4D134A7DAD941E3_TypeDefinitionIndex = 13836;

class Class_1_A4D134A7DAD941E3 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4D134A7DAD941E3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A4D134A7DAD941E3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A4D134A7DAD941E3*&))((::PBYTE)hIl2Cpp + CLASS_1_A4D134A7DAD941E3_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
