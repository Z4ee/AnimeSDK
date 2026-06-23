#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_1EF968414CAAECE3_Class_1_3E05A2677F6F2423_4;
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_1EF968414CAAECE3_CLASS_1_8A5B4D68498F55FD_METHOD_1_F801FECCDFABDCC7_OFFSET UNITYSDK_OFFSET(0x15AE76C0)
#define CLASS_3_1EF968414CAAECE3_CLASS_1_8A5B4D68498F55FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE76B0)

inline static constexpr unsigned int Class_3_1EF968414CAAECE3_Class_1_8A5B4D68498F55FD_TypeDefinitionIndex = 62027;

class Class_3_1EF968414CAAECE3_Class_1_8A5B4D68498F55FD : public ::System::Object
{
public:
	::MoleMole::Config::ConfigDynamicAttachItem* Field_1_0; // 0x10
	::Class_3_1EF968414CAAECE3_Class_1_3E05A2677F6F2423_4* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_CLASS_1_8A5B4D68498F55FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F801FECCDFABDCC7(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_CLASS_1_8A5B4D68498F55FD_METHOD_1_F801FECCDFABDCC7_OFFSET))(this, a1, a2);
	}
};
