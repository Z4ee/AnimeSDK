#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0B4A9CBAA4CAEC69__CTOR_OFFSET UNITYSDK_OFFSET(0x19C06470)

inline static constexpr unsigned int Class_1_0B4A9CBAA4CAEC69_TypeDefinitionIndex = 57182;

class Class_1_0B4A9CBAA4CAEC69 : public ::System::Object
{
public:
	::System::Int32 MIODIFCBELJ; // 0x10
	::System::Boolean DCDODAAKCHG; // 0x14
	::RPG::GameCore::CharacterMotionFlag KOALINMHFGO; // 0x18
	::System::Single BAMCJPHKNHF; // 0x1C
	::System::Single HEBPKJLCBEK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B4A9CBAA4CAEC69__CTOR_OFFSET))(this);
	}
};
