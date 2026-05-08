#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace System { class Action; }

#define CLASS_1_A04C079D3B9F96F1_CLASS_1_489A7C8142EBC677_METHOD_1_D44EE78180EBD3AF_OFFSET UNITYSDK_OFFSET(0x156C6F90)
#define CLASS_1_A04C079D3B9F96F1_CLASS_1_489A7C8142EBC677__CTOR_OFFSET UNITYSDK_OFFSET(0x156C6F80)

inline static constexpr unsigned int Class_1_A04C079D3B9F96F1_Class_1_489A7C8142EBC677_TypeDefinitionIndex = 42640;

class Class_1_A04C079D3B9F96F1_Class_1_489A7C8142EBC677 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_CLASS_1_489A7C8142EBC677__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D44EE78180EBD3AF(::MoleMole::Config::ConfigMaterialPropertyExclusivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*))((::PBYTE)hIl2Cpp + CLASS_1_A04C079D3B9F96F1_CLASS_1_489A7C8142EBC677_METHOD_1_D44EE78180EBD3AF_OFFSET))(this, a1);
	}
};
