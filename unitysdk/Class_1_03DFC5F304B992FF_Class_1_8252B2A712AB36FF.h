#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_03DFC5F304B992FF_CLASS_1_8252B2A712AB36FF__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE2CC0)

inline static constexpr unsigned int Class_1_03DFC5F304B992FF_Class_1_8252B2A712AB36FF_TypeDefinitionIndex = 44929;

class Class_1_03DFC5F304B992FF_Class_1_8252B2A712AB36FF : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF_CLASS_1_8252B2A712AB36FF__CTOR_OFFSET))(this);
	}
};
