#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_666;

#define CLASS_1_44EB57CC491BF5E0_METHOD_1_273A009027628C24_OFFSET UNITYSDK_OFFSET(0x12918CE0)
#define CLASS_1_44EB57CC491BF5E0_METHOD_1_AA2F9480D1CC8CAA_OFFSET UNITYSDK_OFFSET(0x12918AA0)
#define CLASS_1_44EB57CC491BF5E0__CTOR_OFFSET UNITYSDK_OFFSET(0x12918A90)

inline static constexpr unsigned int Class_1_44EB57CC491BF5E0_TypeDefinitionIndex = 57691;

class Class_1_44EB57CC491BF5E0 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_2; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_1; // 0x14
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44EB57CC491BF5E0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_AA2F9480D1CC8CAA(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_44EB57CC491BF5E0_METHOD_1_AA2F9480D1CC8CAA_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_273A009027628C24(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_44EB57CC491BF5E0_METHOD_1_273A009027628C24_OFFSET))(this, a1, a2);
	}
};
