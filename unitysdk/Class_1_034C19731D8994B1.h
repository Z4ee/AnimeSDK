#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1.h"
#include "unitysdk/Struct_2_BB5BCCB5198D0333.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_1_034C19731D8994B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C389D60)

inline static constexpr unsigned int Class_1_034C19731D8994B1_TypeDefinitionIndex = 41733;

class Class_1_034C19731D8994B1 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimAvatarConfig* JIHEDFDCCAD; // 0x10
	::Struct_2_BB5BCCB5198D0333 IAOEFADOKKA; // 0x18
	::Struct_2_4C8453486C91E3A1 IPPKEEBMOEA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_034C19731D8994B1__CTOR_OFFSET))(this);
	}
};
