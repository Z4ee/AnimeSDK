#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_57CE76CDADE932BE_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0x17F84B90)
#define CLASS_1_57CE76CDADE932BE_METHOD_1_6897B64AA58C5C54_OFFSET UNITYSDK_OFFSET(0x17F84AF0)
#define CLASS_1_57CE76CDADE932BE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F84DA0)

inline static constexpr unsigned int Class_1_57CE76CDADE932BE_TypeDefinitionIndex = 62649;

class Class_1_57CE76CDADE932BE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6897B64AA58C5C54(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_METHOD_1_6897B64AA58C5C54_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_836* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_836*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}
};
