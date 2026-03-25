#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_1_53046032C589F545;

#define CLASS_1_3897C88E8C59E725_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0x10BEDC90)
#define CLASS_1_3897C88E8C59E725_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BEDD10)
#define CLASS_1_3897C88E8C59E725__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEDD50)

inline static constexpr unsigned int Class_1_3897C88E8C59E725_TypeDefinitionIndex = 52884;

class Class_1_3897C88E8C59E725 : public ::System::Object
{
public:
	::Class_1_53046032C589F545* Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3897C88E8C59E725__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_573* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_3897C88E8C59E725_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3897C88E8C59E725_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
