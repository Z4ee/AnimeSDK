#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define CLASS_1_451D4E871590D41E_METHOD_1_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0x183F0CA0)
#define CLASS_1_451D4E871590D41E__CTOR_OFFSET UNITYSDK_OFFSET(0x183F0C90)

inline static constexpr unsigned int Class_1_451D4E871590D41E_TypeDefinitionIndex = 9415;

class Class_1_451D4E871590D41E : public ::System::Object
{
public:
	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_451D4E871590D41E__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_451D4E871590D41E_METHOD_1_80C66335F1B7C73D_OFFSET))(this);
	}
};
