#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBulletTracingData; }
namespace System { class Action; }

#define CLASS_1_7FF425EF747352D8_CLASS_1_822F96E86035B3AD_METHOD_1_ECCDA85821B7BA3E_OFFSET UNITYSDK_OFFSET(0x108C0390)
#define CLASS_1_7FF425EF747352D8_CLASS_1_822F96E86035B3AD__CTOR_OFFSET UNITYSDK_OFFSET(0x108C0380)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_Class_1_822F96E86035B3AD_TypeDefinitionIndex = 45544;

class Class_1_7FF425EF747352D8_Class_1_822F96E86035B3AD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_822F96E86035B3AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ECCDA85821B7BA3E(::MoleMole::ConfigBulletTracingData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBulletTracingData*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_822F96E86035B3AD_METHOD_1_ECCDA85821B7BA3E_OFFSET))(this, a1);
	}
};
