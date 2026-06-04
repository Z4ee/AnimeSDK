#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_57CE76CDADE932BE_3_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0xB007060)
#define CLASS_1_57CE76CDADE932BE_3_METHOD_1_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0xB006F10)
#define CLASS_1_57CE76CDADE932BE_3_METHOD_1_CD30F6166BE88445_OFFSET UNITYSDK_OFFSET(0xB006DF0)
#define CLASS_1_57CE76CDADE932BE_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB007280)

inline static constexpr unsigned int Class_1_57CE76CDADE932BE_3_TypeDefinitionIndex = 61322;

class Class_1_57CE76CDADE932BE_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CD30F6166BE88445(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_3_METHOD_1_CD30F6166BE88445_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_798* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_798*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_3_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_3_METHOD_1_7A9EE6E4B8F1006C_OFFSET))(this);
	}
};
