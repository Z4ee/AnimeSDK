#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigIndicatedLights; }
namespace System { class Action; }

#define CLASS_1_D6264A5278DE3F87_CLASS_1_19A793B46A4C6B05_METHOD_1_E87482793A9B9407_OFFSET UNITYSDK_OFFSET(0xF990A70)
#define CLASS_1_D6264A5278DE3F87_CLASS_1_19A793B46A4C6B05__CTOR_OFFSET UNITYSDK_OFFSET(0xF990A60)

inline static constexpr unsigned int Class_1_D6264A5278DE3F87_Class_1_19A793B46A4C6B05_TypeDefinitionIndex = 51422;

class Class_1_D6264A5278DE3F87_Class_1_19A793B46A4C6B05 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_CLASS_1_19A793B46A4C6B05__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E87482793A9B9407(::MoleMole::Config::ConfigIndicatedLights* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigIndicatedLights*))((::PBYTE)hIl2Cpp + CLASS_1_D6264A5278DE3F87_CLASS_1_19A793B46A4C6B05_METHOD_1_E87482793A9B9407_OFFSET))(this, a1);
	}
};
