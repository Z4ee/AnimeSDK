#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_74.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2E5C7BEB9D5587A__CTOR_OFFSET UNITYSDK_OFFSET(0x111C99E0)

inline static constexpr unsigned int Class_1_E2E5C7BEB9D5587A_TypeDefinitionIndex = 55503;

class Class_1_E2E5C7BEB9D5587A : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Enum_3_0A3761FE34514D6C_74 Field_1_0; // 0x18
	::RPG::GameCore::PropState Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E5C7BEB9D5587A__CTOR_OFFSET))(this);
	}
};
