#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collision; }

#define CLASS_3_B080F4F19F2FCB22_CLASS_1_5DF846BA18F3F05A_METHOD_1_EF83DF2283BD2783_OFFSET UNITYSDK_OFFSET(0x19933ED0)
#define CLASS_3_B080F4F19F2FCB22_CLASS_1_5DF846BA18F3F05A__CTOR_OFFSET UNITYSDK_OFFSET(0x19933EC0)

inline static constexpr unsigned int Class_3_B080F4F19F2FCB22_Class_1_5DF846BA18F3F05A_TypeDefinitionIndex = 55934;

class Class_3_B080F4F19F2FCB22_Class_1_5DF846BA18F3F05A : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B080F4F19F2FCB22_CLASS_1_5DF846BA18F3F05A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF83DF2283BD2783(::UnityEngine::Collision* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CLASS_3_B080F4F19F2FCB22_CLASS_1_5DF846BA18F3F05A_METHOD_1_EF83DF2283BD2783_OFFSET))(this, a1);
	}
};
