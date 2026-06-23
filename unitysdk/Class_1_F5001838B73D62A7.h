#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_F5001838B73D62A7__CTOR_OFFSET UNITYSDK_OFFSET(0x117FEA30)

inline static constexpr unsigned int Class_1_F5001838B73D62A7_TypeDefinitionIndex = 72550;

class Class_1_F5001838B73D62A7 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::MoleMole::CGRuntimeUnitLoadType Field_1_0; // 0x24
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5001838B73D62A7__CTOR_OFFSET))(this);
	}
};
