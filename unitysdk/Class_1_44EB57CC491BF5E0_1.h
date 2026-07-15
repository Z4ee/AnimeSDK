#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;

#define CLASS_1_44EB57CC491BF5E0_1_METHOD_1_B1AC692BE0D0B6C5_OFFSET UNITYSDK_OFFSET(0x18F72560)
#define CLASS_1_44EB57CC491BF5E0_1_METHOD_1_C6CC8A19B55A224E_OFFSET UNITYSDK_OFFSET(0x18F728B0)
#define CLASS_1_44EB57CC491BF5E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F72550)

inline static constexpr unsigned int Class_1_44EB57CC491BF5E0_1_TypeDefinitionIndex = 59753;

class Class_1_44EB57CC491BF5E0_1 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_1; // 0x14
	::RPG::GameCore::AvatarPropertyType Field_1_2; // 0x18

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44EB57CC491BF5E0_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_B1AC692BE0D0B6C5(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_44EB57CC491BF5E0_1_METHOD_1_B1AC692BE0D0B6C5_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_C6CC8A19B55A224E(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_44EB57CC491BF5E0_1_METHOD_1_C6CC8A19B55A224E_OFFSET))(this, a1, a2);
	}
};
