#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_06EECA86A7A50FE1_2_METHOD_1_56D7D100DDE86E79_OFFSET UNITYSDK_OFFSET(0x18B64AE0)
#define CLASS_1_06EECA86A7A50FE1_2_METHOD_1_ACCF125FF6EC7E06_OFFSET UNITYSDK_OFFSET(0x18B64B30)
#define CLASS_1_06EECA86A7A50FE1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18B64D10)

inline static constexpr unsigned int Class_1_06EECA86A7A50FE1_2_TypeDefinitionIndex = 62666;

class Class_1_06EECA86A7A50FE1_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EECA86A7A50FE1_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_56D7D100DDE86E79(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_06EECA86A7A50FE1_2_METHOD_1_56D7D100DDE86E79_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_836* Method_1_ACCF125FF6EC7E06(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_836*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_06EECA86A7A50FE1_2_METHOD_1_ACCF125FF6EC7E06_OFFSET))(this, a1);
	}
};
