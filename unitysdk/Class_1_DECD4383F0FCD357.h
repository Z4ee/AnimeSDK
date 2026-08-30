#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_1CBA230307F9C289_19;
class Class_1_D17272E82AE804C2_7;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_DECD4383F0FCD357_METHOD_1_75E27CCE4EF4E6DC_OFFSET UNITYSDK_OFFSET(0x157A5470)
#define CLASS_1_DECD4383F0FCD357__CTOR_OFFSET UNITYSDK_OFFSET(0x157A5380)

inline static constexpr unsigned int Class_1_DECD4383F0FCD357_TypeDefinitionIndex = 63204;

class Class_1_DECD4383F0FCD357 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
	::System::UInt32 ACCJKGEKHKP; // 0x18
	::Enum_3_01618AD0437C8486 FMDMKNPNBAM; // 0x1C

	::System::Void _ctor(::Class_1_1CBA230307F9C289_19* a1, ::Class_1_D17272E82AE804C2_7* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_19*, ::Class_1_D17272E82AE804C2_7*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_DECD4383F0FCD357__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_75E27CCE4EF4E6DC()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DECD4383F0FCD357_METHOD_1_75E27CCE4EF4E6DC_OFFSET))(this);
	}
};
