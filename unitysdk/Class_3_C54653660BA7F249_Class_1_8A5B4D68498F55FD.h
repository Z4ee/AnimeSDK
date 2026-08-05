#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_C54653660BA7F249_Class_1_3E05A2677F6F2423_1;
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_C54653660BA7F249_CLASS_1_8A5B4D68498F55FD_METHOD_1_F801FECCDFABDCC7_OFFSET UNITYSDK_OFFSET(0x15BB4DB0)
#define CLASS_3_C54653660BA7F249_CLASS_1_8A5B4D68498F55FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB4DA0)

inline static constexpr unsigned int Class_3_C54653660BA7F249_Class_1_8A5B4D68498F55FD_TypeDefinitionIndex = 45987;

class Class_3_C54653660BA7F249_Class_1_8A5B4D68498F55FD : public ::System::Object
{
public:
	::MoleMole::Config::ConfigDynamicAttachItem* Field_1_1; // 0x10
	::Class_3_C54653660BA7F249_Class_1_3E05A2677F6F2423_1* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C54653660BA7F249_CLASS_1_8A5B4D68498F55FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F801FECCDFABDCC7(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_C54653660BA7F249_CLASS_1_8A5B4D68498F55FD_METHOD_1_F801FECCDFABDCC7_OFFSET))(this, a1, a2);
	}
};
