#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_399;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_93B82696C28F6E47_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x174F9A70)
#define CLASS_1_93B82696C28F6E47_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x174F9A00)
#define CLASS_1_93B82696C28F6E47__CTOR_OFFSET UNITYSDK_OFFSET(0x174F9990)

inline static constexpr unsigned int Class_1_93B82696C28F6E47_TypeDefinitionIndex = 76250;

class Class_1_93B82696C28F6E47 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_399* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_399*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfit* get_Outfit()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_GET_OUTFIT_OFFSET))(this);
	}
};
