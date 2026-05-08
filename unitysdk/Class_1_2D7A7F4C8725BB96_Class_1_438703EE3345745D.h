#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Level { class LevelConfig; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_438703EE3345745D_METHOD_1_0FD81CC2BAA1CB1D_OFFSET UNITYSDK_OFFSET(0x13354470)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_438703EE3345745D__CTOR_OFFSET UNITYSDK_OFFSET(0x13354460)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_438703EE3345745D_TypeDefinitionIndex = 51211;

class Class_1_2D7A7F4C8725BB96_Class_1_438703EE3345745D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_438703EE3345745D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0FD81CC2BAA1CB1D(::MoleMole::Level::LevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_438703EE3345745D_METHOD_1_0FD81CC2BAA1CB1D_OFFSET))(this, a1);
	}
};
