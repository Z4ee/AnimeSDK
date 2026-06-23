#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_4_340035E9E547C559_CLASS_1_DEB35735A8E124F4__CTOR_OFFSET UNITYSDK_OFFSET(0x154CAD60)

inline static constexpr unsigned int Class_4_340035E9E547C559_Class_1_DEB35735A8E124F4_TypeDefinitionIndex = 46077;

class Class_4_340035E9E547C559_Class_1_DEB35735A8E124F4 : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* Field_1_0; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_340035E9E547C559_CLASS_1_DEB35735A8E124F4__CTOR_OFFSET))(this);
	}
};
