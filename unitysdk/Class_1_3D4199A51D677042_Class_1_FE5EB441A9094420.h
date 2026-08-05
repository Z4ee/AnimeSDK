#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }
namespace System { class Action; }

#define CLASS_1_3D4199A51D677042_CLASS_1_FE5EB441A9094420_METHOD_1_FF5765FAB7B464BB_OFFSET UNITYSDK_OFFSET(0x15765CE0)
#define CLASS_1_3D4199A51D677042_CLASS_1_FE5EB441A9094420__CTOR_OFFSET UNITYSDK_OFFSET(0x15765CD0)

inline static constexpr unsigned int Class_1_3D4199A51D677042_Class_1_FE5EB441A9094420_TypeDefinitionIndex = 44795;

class Class_1_3D4199A51D677042_Class_1_FE5EB441A9094420 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_FE5EB441A9094420__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF5765FAB7B464BB(::MoleMole::Config::ConfigUIScriptableAnimSpecialNum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_FE5EB441A9094420_METHOD_1_FF5765FAB7B464BB_OFFSET))(this, a1);
	}
};
