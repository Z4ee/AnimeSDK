#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82297B6AFFE49354_1;
namespace RPG::GameCore { class FiveDimDashOrbConfig; }

#define CLASS_1_1EC0B17EADDE7F15_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E08020)
#define CLASS_1_1EC0B17EADDE7F15__CTOR_OFFSET UNITYSDK_OFFSET(0x17E080A0)

inline static constexpr unsigned int Class_1_1EC0B17EADDE7F15_TypeDefinitionIndex = 39327;

class Class_1_1EC0B17EADDE7F15 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimDashOrbConfig* Field_1_0; // 0x10
	::Class_1_82297B6AFFE49354_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC0B17EADDE7F15__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC0B17EADDE7F15_CLEAR_OFFSET))(this);
	}
};
