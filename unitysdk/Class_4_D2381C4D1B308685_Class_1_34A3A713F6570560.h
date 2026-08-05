#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_4_D2381C4D1B308685_CLASS_1_34A3A713F6570560__CTOR_OFFSET UNITYSDK_OFFSET(0x15559600)

inline static constexpr unsigned int Class_4_D2381C4D1B308685_Class_1_34A3A713F6570560_TypeDefinitionIndex = 81948;

class Class_4_D2381C4D1B308685_Class_1_34A3A713F6570560 : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* Field_1_1; // 0x10
	::MoleMole::EntityHandle Field_1_7; // 0x18
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x28
	::System::Single Field_1_6; // 0x38
	::System::Single Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D2381C4D1B308685_CLASS_1_34A3A713F6570560__CTOR_OFFSET))(this);
	}
};
