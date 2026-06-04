#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicatedCondition.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_26B7C5CF09053420__CTOR_OFFSET UNITYSDK_OFFSET(0x189A8700)

inline static constexpr unsigned int Class_2_26B7C5CF09053420_TypeDefinitionIndex = 34665;

class Class_2_26B7C5CF09053420 : public ::System::Attribute
{
public:
	::RPG::Client::LittleGameShare::ReplicatedCondition Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26B7C5CF09053420__CTOR_OFFSET))(this);
	}
};
