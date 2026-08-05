#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_F5001838B73D62A7__CTOR_OFFSET UNITYSDK_OFFSET(0x171211C0)

inline static constexpr unsigned int Class_1_F5001838B73D62A7_TypeDefinitionIndex = 75726;

class Class_1_F5001838B73D62A7 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::UnityEngine::GameObject* Field_1_6; // 0x18
	::MoleMole::CGRuntimeUnitLoadType Field_1_0; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5001838B73D62A7__CTOR_OFFSET))(this);
	}
};
