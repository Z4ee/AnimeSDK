#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPressureSwitchConfig; }

#define CLASS_1_7A3ABC1E43C6D1ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA94C60)

inline static constexpr unsigned int Class_1_7A3ABC1E43C6D1ED_TypeDefinitionIndex = 41822;

class Class_1_7A3ABC1E43C6D1ED : public ::System::Object
{
public:
	::Struct_2_5B421F8FFABD4CA3 BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimPressureSwitchConfig* EABKOHGCHFP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A3ABC1E43C6D1ED__CTOR_OFFSET))(this);
	}
};
