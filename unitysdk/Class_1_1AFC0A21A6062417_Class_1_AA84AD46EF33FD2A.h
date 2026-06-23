#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { class Action; }

#define CLASS_1_1AFC0A21A6062417_CLASS_1_AA84AD46EF33FD2A_METHOD_1_D92D256331EF25BD_OFFSET UNITYSDK_OFFSET(0x1624CFD0)
#define CLASS_1_1AFC0A21A6062417_CLASS_1_AA84AD46EF33FD2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1624CFC0)

inline static constexpr unsigned int Class_1_1AFC0A21A6062417_Class_1_AA84AD46EF33FD2A_TypeDefinitionIndex = 56214;

class Class_1_1AFC0A21A6062417_Class_1_AA84AD46EF33FD2A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_CLASS_1_AA84AD46EF33FD2A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D92D256331EF25BD(::MoleMole::Config::ConfigPlayerAccessoryEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessoryEffect*))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_CLASS_1_AA84AD46EF33FD2A_METHOD_1_D92D256331EF25BD_OFFSET))(this, a1);
	}
};
