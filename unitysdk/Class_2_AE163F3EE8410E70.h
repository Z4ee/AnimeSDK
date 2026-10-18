#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4B1B74A0320FC41.h"
#include "unitysdk/RPG/GameCore/AvatarCreateType.h"

namespace RPG::GameCore { class AvatarDataComponent; }

#define CLASS_2_AE163F3EE8410E70_METHOD_2_22A9D092E82B0E16_OFFSET UNITYSDK_OFFSET(0x16545730)
#define CLASS_2_AE163F3EE8410E70__CTOR_OFFSET UNITYSDK_OFFSET(0x16545720)

inline static constexpr unsigned int Class_2_AE163F3EE8410E70_TypeDefinitionIndex = 56876;

class Class_2_AE163F3EE8410E70 : public ::Class_1_F4B1B74A0320FC41
{
public:
	::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_AE163F3EE8410E70__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarCreateType Method_2_22A9D092E82B0E16()
	{
		return ((::RPG::GameCore::AvatarCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE163F3EE8410E70_METHOD_2_22A9D092E82B0E16_OFFSET))(this);
	}
};
