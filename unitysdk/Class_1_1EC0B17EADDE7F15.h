#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82297B6AFFE49354_1;
namespace RPG::GameCore { class FiveDimDashOrbConfig; }

#define CLASS_1_1EC0B17EADDE7F15_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C1BE20)
#define CLASS_1_1EC0B17EADDE7F15__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1BEA0)

inline static constexpr unsigned int Class_1_1EC0B17EADDE7F15_TypeDefinitionIndex = 40096;

class Class_1_1EC0B17EADDE7F15 : public ::System::Object
{
public:
	::Class_1_82297B6AFFE49354_1* Field_1_0; // 0x10
	::RPG::GameCore::FiveDimDashOrbConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC0B17EADDE7F15__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC0B17EADDE7F15_CLEAR_OFFSET))(this);
	}
};
