#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_434;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_93B82696C28F6E47_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x161AE5E0)
#define CLASS_1_93B82696C28F6E47_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x161AE570)
#define CLASS_1_93B82696C28F6E47__CTOR_OFFSET UNITYSDK_OFFSET(0x161AE500)

inline static constexpr unsigned int Class_1_93B82696C28F6E47_TypeDefinitionIndex = 79884;

class Class_1_93B82696C28F6E47 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* BPKKKMOCFIP; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_434* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_434*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfit* get_Outfit()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_GET_OUTFIT_OFFSET))(this);
	}
};
