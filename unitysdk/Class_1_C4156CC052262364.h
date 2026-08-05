#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B8B3C2CDA60FB918.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }

#define CLASS_1_C4156CC052262364_METHOD_1_DE81A84862645066_OFFSET UNITYSDK_OFFSET(0x119972F0)
#define CLASS_1_C4156CC052262364__CTOR_OFFSET UNITYSDK_OFFSET(0x119972A0)

inline static constexpr unsigned int Class_1_C4156CC052262364_TypeDefinitionIndex = 85705;

class Class_1_C4156CC052262364 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::SceneMark::StageTweenAnimData* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4156CC052262364__CTOR_OFFSET))(this);
	}

	::Struct_2_B8B3C2CDA60FB918 Method_1_DE81A84862645066()
	{
		return ((::Struct_2_B8B3C2CDA60FB918(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4156CC052262364_METHOD_1_DE81A84862645066_OFFSET))(this);
	}
};
