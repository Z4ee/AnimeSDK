#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }

#define CLASS_1_596881FA8908BD9F_CLASS_1_AD1F9C5F72965636_METHOD_1_E46A5FC2C4262A8A_OFFSET UNITYSDK_OFFSET(0x12E34E40)
#define CLASS_1_596881FA8908BD9F_CLASS_1_AD1F9C5F72965636__CTOR_OFFSET UNITYSDK_OFFSET(0x12E34E30)

inline static constexpr unsigned int Class_1_596881FA8908BD9F_Class_1_AD1F9C5F72965636_TypeDefinitionIndex = 39874;

class Class_1_596881FA8908BD9F_Class_1_AD1F9C5F72965636 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_CLASS_1_AD1F9C5F72965636__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E46A5FC2C4262A8A(::MoleMole::Config::ConfigExQTE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigExQTE*))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_CLASS_1_AD1F9C5F72965636_METHOD_1_E46A5FC2C4262A8A_OFFSET))(this, a1);
	}
};
