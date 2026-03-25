#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorCustomValue_1.h"

namespace RPG::GameCore { class FloorCustomBoolConfig; }

#define CLASS_3_88F460F45794E3B7_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x10A2A900)
#define CLASS_3_88F460F45794E3B7__CTOR_OFFSET UNITYSDK_OFFSET(0x10A2A8D0)

inline static constexpr unsigned int Class_3_88F460F45794E3B7_TypeDefinitionIndex = 50420;

class Class_3_88F460F45794E3B7 : public ::RPG::Client::FloorCustomValue_1<::System::Boolean>
{
public:
	::System::Void _ctor(::RPG::GameCore::FloorCustomBoolConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + CLASS_3_88F460F45794E3B7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_88F460F45794E3B7_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
