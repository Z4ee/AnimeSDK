#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define CLASS_1_451D4E871590D41E_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x19DDE440)
#define CLASS_1_451D4E871590D41E__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDE430)

inline static constexpr unsigned int Class_1_451D4E871590D41E_TypeDefinitionIndex = 9410;

class Class_1_451D4E871590D41E : public ::System::Object
{
public:
	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Field_1_3; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_451D4E871590D41E__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_451D4E871590D41E_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
