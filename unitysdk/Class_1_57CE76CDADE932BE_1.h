#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_986;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_57CE76CDADE932BE_1_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0xBA82940)
#define CLASS_1_57CE76CDADE932BE_1_METHOD_1_CE18D8D21B7601EE_OFFSET UNITYSDK_OFFSET(0xBA828E0)
#define CLASS_1_57CE76CDADE932BE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA82B60)

inline static constexpr unsigned int Class_1_57CE76CDADE932BE_1_TypeDefinitionIndex = 65585;

class Class_1_57CE76CDADE932BE_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE18D8D21B7601EE(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_1_METHOD_1_CE18D8D21B7601EE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_986* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_986*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_1_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}
};
