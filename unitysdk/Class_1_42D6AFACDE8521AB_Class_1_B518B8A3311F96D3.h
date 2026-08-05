#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvas; }
namespace System { class Action; }

#define CLASS_1_42D6AFACDE8521AB_CLASS_1_B518B8A3311F96D3_METHOD_1_6F31D27EA7FA913D_OFFSET UNITYSDK_OFFSET(0x17FFF840)
#define CLASS_1_42D6AFACDE8521AB_CLASS_1_B518B8A3311F96D3__CTOR_OFFSET UNITYSDK_OFFSET(0x17FFF830)

inline static constexpr unsigned int Class_1_42D6AFACDE8521AB_Class_1_B518B8A3311F96D3_TypeDefinitionIndex = 49298;

class Class_1_42D6AFACDE8521AB_Class_1_B518B8A3311F96D3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_CLASS_1_B518B8A3311F96D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F31D27EA7FA913D(::MoleMole::Config::ConfigFlowCanvas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*))((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_CLASS_1_B518B8A3311F96D3_METHOD_1_6F31D27EA7FA913D_OFFSET))(this, a1);
	}
};
