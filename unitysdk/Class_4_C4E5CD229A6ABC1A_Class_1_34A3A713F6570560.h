#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_4_C4E5CD229A6ABC1A_CLASS_1_34A3A713F6570560__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED5A0)

inline static constexpr unsigned int Class_4_C4E5CD229A6ABC1A_Class_1_34A3A713F6570560_TypeDefinitionIndex = 43349;

class Class_4_C4E5CD229A6ABC1A_Class_1_34A3A713F6570560 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_1; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_4; // 0x20
	::FluffyUnderware::Curvy::CurvySpline* Field_1_0; // 0x30
	::System::Single Field_1_2; // 0x38
	::System::Single Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C4E5CD229A6ABC1A_CLASS_1_34A3A713F6570560__CTOR_OFFSET))(this);
	}
};
