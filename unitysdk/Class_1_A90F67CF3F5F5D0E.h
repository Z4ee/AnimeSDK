#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;

#define CLASS_1_A90F67CF3F5F5D0E_METHOD_1_0CB8383BE2E4762F_OFFSET UNITYSDK_OFFSET(0x16C992B0)
#define CLASS_1_A90F67CF3F5F5D0E_METHOD_1_F005C1349A09D61B_OFFSET UNITYSDK_OFFSET(0x16C99570)
#define CLASS_1_A90F67CF3F5F5D0E__CTOR_OFFSET UNITYSDK_OFFSET(0x16C992A0)

inline static constexpr unsigned int Class_1_A90F67CF3F5F5D0E_TypeDefinitionIndex = 59752;

class Class_1_A90F67CF3F5F5D0E : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_1; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_0CB8383BE2E4762F(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_METHOD_1_0CB8383BE2E4762F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_F005C1349A09D61B(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_METHOD_1_F005C1349A09D61B_OFFSET))(this, a1, a2);
	}
};
