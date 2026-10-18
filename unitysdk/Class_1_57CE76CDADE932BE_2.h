#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_986;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_57CE76CDADE932BE_2_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0xBE31D00)
#define CLASS_1_57CE76CDADE932BE_2_METHOD_1_7429618278E89955_OFFSET UNITYSDK_OFFSET(0xBE31BE0)
#define CLASS_1_57CE76CDADE932BE_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBE31F20)

inline static constexpr unsigned int Class_1_57CE76CDADE932BE_2_TypeDefinitionIndex = 65587;

class Class_1_57CE76CDADE932BE_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7429618278E89955(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_2_METHOD_1_7429618278E89955_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_986* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_986*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_2_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}
};
