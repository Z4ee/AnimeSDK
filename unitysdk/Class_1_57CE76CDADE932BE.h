#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_57CE76CDADE932BE_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0xA6AAC50)
#define CLASS_1_57CE76CDADE932BE_METHOD_1_56D7D100DDE86E79_OFFSET UNITYSDK_OFFSET(0xA6AAC00)
#define CLASS_1_57CE76CDADE932BE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6AAE60)

inline static constexpr unsigned int Class_1_57CE76CDADE932BE_TypeDefinitionIndex = 61307;

class Class_1_57CE76CDADE932BE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_56D7D100DDE86E79(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_METHOD_1_56D7D100DDE86E79_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_798* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_798*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}
};
