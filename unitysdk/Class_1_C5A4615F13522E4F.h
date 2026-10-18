#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_986;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_C5A4615F13522E4F_METHOD_1_6897B64AA58C5C54_OFFSET UNITYSDK_OFFSET(0xB2BB780)
#define CLASS_1_C5A4615F13522E4F_METHOD_1_ACCF125FF6EC7E06_OFFSET UNITYSDK_OFFSET(0xB2BB820)
#define CLASS_1_C5A4615F13522E4F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BB9E0)

inline static constexpr unsigned int Class_1_C5A4615F13522E4F_TypeDefinitionIndex = 65576;

class Class_1_C5A4615F13522E4F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5A4615F13522E4F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6897B64AA58C5C54(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_C5A4615F13522E4F_METHOD_1_6897B64AA58C5C54_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_986* Method_1_ACCF125FF6EC7E06(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_986*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_C5A4615F13522E4F_METHOD_1_ACCF125FF6EC7E06_OFFSET))(this, a1);
	}
};
