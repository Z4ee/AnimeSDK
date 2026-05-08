#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace System { class Action; }

#define CLASS_1_FD6C96CB8C168B19_CLASS_1_2D749A94D967A767_METHOD_1_C876FA7933EE71D9_OFFSET UNITYSDK_OFFSET(0x18190970)
#define CLASS_1_FD6C96CB8C168B19_CLASS_1_2D749A94D967A767__CTOR_OFFSET UNITYSDK_OFFSET(0x18190960)

inline static constexpr unsigned int Class_1_FD6C96CB8C168B19_Class_1_2D749A94D967A767_TypeDefinitionIndex = 76182;

class Class_1_FD6C96CB8C168B19_Class_1_2D749A94D967A767 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_2D749A94D967A767__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C876FA7933EE71D9(::MoleMole::ConfigGalGameAvatarShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_2D749A94D967A767_METHOD_1_C876FA7933EE71D9_OFFSET))(this, a1);
	}
};
