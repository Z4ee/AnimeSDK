#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_1A9AFEBAAD4E8475_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1CEA6950)
#define CLASS_3_1A9AFEBAAD4E8475_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x1CEA6910)
#define CLASS_3_1A9AFEBAAD4E8475__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA6940)

inline static constexpr unsigned int Class_3_1A9AFEBAAD4E8475_TypeDefinitionIndex = 21322;

class Class_3_1A9AFEBAAD4E8475 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TeamTowersPlayerModifierType JMNJLFACCLM; // 0x18
	::System::Boolean FHHCNGAGFCJ; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A9AFEBAAD4E8475__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1A9AFEBAAD4E8475*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1A9AFEBAAD4E8475*&))((::PBYTE)hIl2Cpp + CLASS_3_1A9AFEBAAD4E8475_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1A9AFEBAAD4E8475* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1A9AFEBAAD4E8475*))((::PBYTE)hIl2Cpp + CLASS_3_1A9AFEBAAD4E8475_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
