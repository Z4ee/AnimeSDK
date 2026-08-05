#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelAddOnConfig; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_49A11503BA5E1751_METHOD_1_638F2F90FEABC098_OFFSET UNITYSDK_OFFSET(0x145AB460)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_49A11503BA5E1751__CTOR_OFFSET UNITYSDK_OFFSET(0x145AB450)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_49A11503BA5E1751_TypeDefinitionIndex = 71698;

class Class_1_2D7A7F4C8725BB96_Class_1_49A11503BA5E1751 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_49A11503BA5E1751__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_638F2F90FEABC098(::MoleMole::Config::LevelAddOnConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelAddOnConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_49A11503BA5E1751_METHOD_1_638F2F90FEABC098_OFFSET))(this, a1);
	}
};
