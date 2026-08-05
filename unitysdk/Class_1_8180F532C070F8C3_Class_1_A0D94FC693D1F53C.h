#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformance; }
namespace System { class Action; }

#define CLASS_1_8180F532C070F8C3_CLASS_1_A0D94FC693D1F53C_METHOD_1_9E27E2F7069F5DF7_OFFSET UNITYSDK_OFFSET(0x1778CC70)
#define CLASS_1_8180F532C070F8C3_CLASS_1_A0D94FC693D1F53C__CTOR_OFFSET UNITYSDK_OFFSET(0x1778CC50)

inline static constexpr unsigned int Class_1_8180F532C070F8C3_Class_1_A0D94FC693D1F53C_TypeDefinitionIndex = 62468;

class Class_1_8180F532C070F8C3_Class_1_A0D94FC693D1F53C : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_CLASS_1_A0D94FC693D1F53C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E27E2F7069F5DF7(::MoleMole::Config::ConfigGachaPerformance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_CLASS_1_A0D94FC693D1F53C_METHOD_1_9E27E2F7069F5DF7_OFFSET))(this, a1);
	}
};
