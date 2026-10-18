#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0B4A9CBAA4CAEC69__CTOR_OFFSET UNITYSDK_OFFSET(0x1556F820)

inline static constexpr unsigned int Class_1_0B4A9CBAA4CAEC69_TypeDefinitionIndex = 57015;

class Class_1_0B4A9CBAA4CAEC69 : public ::System::Object
{
public:
	::System::Boolean DCDODAAKCHG; // 0x10
	::System::Single HEBPKJLCBEK; // 0x14
	::System::Single BAMCJPHKNHF; // 0x18
	::System::Int32 MIODIFCBELJ; // 0x1C
	::RPG::GameCore::CharacterMotionFlag KOALINMHFGO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B4A9CBAA4CAEC69__CTOR_OFFSET))(this);
	}
};
