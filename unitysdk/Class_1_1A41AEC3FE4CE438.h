#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_C2026267FFB35855;
namespace System { class Type; }

#define CLASS_1_1A41AEC3FE4CE438__CTOR_OFFSET UNITYSDK_OFFSET(0x161E63A0)

inline static constexpr unsigned int Class_1_1A41AEC3FE4CE438_TypeDefinitionIndex = 61133;

class Class_1_1A41AEC3FE4CE438 : public ::System::Object
{
public:
	::System::Object* ACDGBAICMPE; // 0x10
	::System::Object* KHAIOMLFBCM; // 0x18
	::Class_1_C2026267FFB35855* LMCAEIHLKHB; // 0x20
	::System::Type* DIJNEEGMAMN; // 0x28
	::RPG::GameCore::BattleModeType OLOIGGPNHBI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A41AEC3FE4CE438__CTOR_OFFSET))(this);
	}
};
