#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { class Action; }

#define CLASS_1_96DC956462FF7C4A_CLASS_1_DEC0FEC92C5F3AC4_METHOD_1_6C21A6F4BD09F4F5_OFFSET UNITYSDK_OFFSET(0x12ED38E0)
#define CLASS_1_96DC956462FF7C4A_CLASS_1_DEC0FEC92C5F3AC4__CTOR_OFFSET UNITYSDK_OFFSET(0x12ED38D0)

inline static constexpr unsigned int Class_1_96DC956462FF7C4A_Class_1_DEC0FEC92C5F3AC4_TypeDefinitionIndex = 82761;

class Class_1_96DC956462FF7C4A_Class_1_DEC0FEC92C5F3AC4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_CLASS_1_DEC0FEC92C5F3AC4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C21A6F4BD09F4F5(::MoleMole::Config::GamifiedPropConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::GamifiedPropConfig*))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_CLASS_1_DEC0FEC92C5F3AC4_METHOD_1_6C21A6F4BD09F4F5_OFFSET))(this, a1);
	}
};
