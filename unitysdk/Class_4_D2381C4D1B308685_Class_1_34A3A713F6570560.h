#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_4_D2381C4D1B308685_CLASS_1_34A3A713F6570560__CTOR_OFFSET UNITYSDK_OFFSET(0x190C0C40)

inline static constexpr unsigned int Class_4_D2381C4D1B308685_Class_1_34A3A713F6570560_TypeDefinitionIndex = 60166;

class Class_4_D2381C4D1B308685_Class_1_34A3A713F6570560 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_2; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_1; // 0x20
	::FluffyUnderware::Curvy::CurvySpline* Field_1_0; // 0x30
	::System::Single Field_1_3; // 0x38
	::System::Single Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D2381C4D1B308685_CLASS_1_34A3A713F6570560__CTOR_OFFSET))(this);
	}
};
