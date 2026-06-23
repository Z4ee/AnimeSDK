#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { class Action; }

#define CLASS_1_97622A4952ADEE55_CLASS_1_6A426F3D8C80221A_METHOD_1_F1AACABDA10EA367_OFFSET UNITYSDK_OFFSET(0x1879E5B0)
#define CLASS_1_97622A4952ADEE55_CLASS_1_6A426F3D8C80221A__CTOR_OFFSET UNITYSDK_OFFSET(0x1879E5A0)

inline static constexpr unsigned int Class_1_97622A4952ADEE55_Class_1_6A426F3D8C80221A_TypeDefinitionIndex = 80373;

class Class_1_97622A4952ADEE55_Class_1_6A426F3D8C80221A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_CLASS_1_6A426F3D8C80221A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F1AACABDA10EA367(::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_CLASS_1_6A426F3D8C80221A_METHOD_1_F1AACABDA10EA367_OFFSET))(this, a1);
	}
};
