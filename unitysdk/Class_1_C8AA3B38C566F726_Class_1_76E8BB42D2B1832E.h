#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace System { class Action; }

#define CLASS_1_C8AA3B38C566F726_CLASS_1_76E8BB42D2B1832E_METHOD_1_D02F90C715411B99_OFFSET UNITYSDK_OFFSET(0xFD75F00)
#define CLASS_1_C8AA3B38C566F726_CLASS_1_76E8BB42D2B1832E__CTOR_OFFSET UNITYSDK_OFFSET(0xFD75EF0)

inline static constexpr unsigned int Class_1_C8AA3B38C566F726_Class_1_76E8BB42D2B1832E_TypeDefinitionIndex = 58782;

class Class_1_C8AA3B38C566F726_Class_1_76E8BB42D2B1832E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_CLASS_1_76E8BB42D2B1832E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D02F90C715411B99(::MoleMole::MonsterMappingConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterMappingConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_CLASS_1_76E8BB42D2B1832E_METHOD_1_D02F90C715411B99_OFFSET))(this, a1);
	}
};
