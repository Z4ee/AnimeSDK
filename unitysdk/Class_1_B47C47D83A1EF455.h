#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5AA2BE468EDCE452;
namespace MoleMole { class MonoSteer; }

#define CLASS_1_B47C47D83A1EF455__CTOR_OFFSET UNITYSDK_OFFSET(0x159D3C20)

inline static constexpr unsigned int Class_1_B47C47D83A1EF455_TypeDefinitionIndex = 55499;

class Class_1_B47C47D83A1EF455 : public ::System::Object
{
public:
	::Class_1_5AA2BE468EDCE452* Field_1_0; // 0x10
	::MoleMole::MonoSteer* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_5AA2BE468EDCE452* a1, ::MoleMole::MonoSteer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5AA2BE468EDCE452*, ::MoleMole::MonoSteer*))((::PBYTE)hIl2Cpp + CLASS_1_B47C47D83A1EF455__CTOR_OFFSET))(this, a1, a2);
	}
};
