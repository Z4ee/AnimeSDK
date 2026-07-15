#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_726;
class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_7;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_0CB259B78000E302_METHOD_1_8F158BEC3923C652_OFFSET UNITYSDK_OFFSET(0x149E70F0)
#define CLASS_1_0CB259B78000E302__CTOR_OFFSET UNITYSDK_OFFSET(0x149E7070)

inline static constexpr unsigned int Class_1_0CB259B78000E302_TypeDefinitionIndex = 59788;

class Class_1_0CB259B78000E302 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_726* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_726*))((::PBYTE)hIl2Cpp + CLASS_1_0CB259B78000E302__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_8F158BEC3923C652(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_D17272E82AE804C2_7* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_D17272E82AE804C2_7*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_0CB259B78000E302_METHOD_1_8F158BEC3923C652_OFFSET))(this, a1, a2, a3);
	}
};
