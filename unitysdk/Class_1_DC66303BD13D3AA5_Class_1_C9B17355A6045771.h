#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { class Action; }

#define CLASS_1_DC66303BD13D3AA5_CLASS_1_C9B17355A6045771_METHOD_1_1AB168B0A92085CE_OFFSET UNITYSDK_OFFSET(0x12FADF50)
#define CLASS_1_DC66303BD13D3AA5_CLASS_1_C9B17355A6045771__CTOR_OFFSET UNITYSDK_OFFSET(0x12FADF40)

inline static constexpr unsigned int Class_1_DC66303BD13D3AA5_Class_1_C9B17355A6045771_TypeDefinitionIndex = 52436;

class Class_1_DC66303BD13D3AA5_Class_1_C9B17355A6045771 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_CLASS_1_C9B17355A6045771__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1AB168B0A92085CE(::MoleMole::Config::ConfigEtherEyes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_CLASS_1_C9B17355A6045771_METHOD_1_1AB168B0A92085CE_OFFSET))(this, a1);
	}
};
