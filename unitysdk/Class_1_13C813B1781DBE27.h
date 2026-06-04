#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_13C813B1781DBE27_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18A9CF60)
#define CLASS_1_13C813B1781DBE27_METHOD_1_1797C19B201E1E2D_OFFSET UNITYSDK_OFFSET(0x18A9D050)
#define CLASS_1_13C813B1781DBE27_METHOD_1_533B683726DA6779_OFFSET UNITYSDK_OFFSET(0x18A9CFA0)
#define CLASS_1_13C813B1781DBE27__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9CF50)

inline static constexpr unsigned int Class_1_13C813B1781DBE27_TypeDefinitionIndex = 34643;

class Class_1_13C813B1781DBE27 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C813B1781DBE27__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C813B1781DBE27_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_533B683726DA6779(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_13C813B1781DBE27_METHOD_1_533B683726DA6779_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_1797C19B201E1E2D(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_13C813B1781DBE27_METHOD_1_1797C19B201E1E2D_OFFSET))(a1, a2, a3);
	}
};
