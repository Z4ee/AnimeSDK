#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_E55AE8831AAE79EB_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB470760)

inline static constexpr unsigned int Class_2_E55AE8831AAE79EB_2_TypeDefinitionIndex = 70204;

class Class_2_E55AE8831AAE79EB_2 : public ::System::Attribute
{
public:
	::RPG::GameCore::EventType LAOACNPDOLD; // 0x10

	::System::Void _ctor(::RPG::GameCore::EventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType))((::PBYTE)hIl2Cpp + CLASS_2_E55AE8831AAE79EB_2__CTOR_OFFSET))(this, a1);
	}
};
