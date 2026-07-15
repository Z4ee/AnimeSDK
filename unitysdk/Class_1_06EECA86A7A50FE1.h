#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_06EECA86A7A50FE1_METHOD_1_56D7D100DDE86E79_OFFSET UNITYSDK_OFFSET(0x162042C0)
#define CLASS_1_06EECA86A7A50FE1_METHOD_1_5A8B154C749AD652_OFFSET UNITYSDK_OFFSET(0x16204310)
#define CLASS_1_06EECA86A7A50FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x16204800)

inline static constexpr unsigned int Class_1_06EECA86A7A50FE1_TypeDefinitionIndex = 62639;

class Class_1_06EECA86A7A50FE1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EECA86A7A50FE1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_56D7D100DDE86E79(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_06EECA86A7A50FE1_METHOD_1_56D7D100DDE86E79_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_836* Method_1_5A8B154C749AD652(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_836*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_06EECA86A7A50FE1_METHOD_1_5A8B154C749AD652_OFFSET))(this, a1);
	}
};
