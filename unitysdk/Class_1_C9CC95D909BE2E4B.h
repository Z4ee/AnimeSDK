#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_C9CC95D909BE2E4B_METHOD_1_55935CD84939B30C_OFFSET UNITYSDK_OFFSET(0x13B516F0)
#define CLASS_1_C9CC95D909BE2E4B_METHOD_1_56D7D100DDE86E79_OFFSET UNITYSDK_OFFSET(0x13B516A0)
#define CLASS_1_C9CC95D909BE2E4B__CTOR_OFFSET UNITYSDK_OFFSET(0x13B51B90)

inline static constexpr unsigned int Class_1_C9CC95D909BE2E4B_TypeDefinitionIndex = 61297;

class Class_1_C9CC95D909BE2E4B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_56D7D100DDE86E79(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B_METHOD_1_56D7D100DDE86E79_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_798* Method_1_55935CD84939B30C(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_798*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B_METHOD_1_55935CD84939B30C_OFFSET))(this, a1);
	}
};
