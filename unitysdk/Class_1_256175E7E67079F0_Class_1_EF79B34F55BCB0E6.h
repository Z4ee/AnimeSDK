#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }

#define CLASS_1_256175E7E67079F0_CLASS_1_EF79B34F55BCB0E6_METHOD_1_3E9EFFDB44AF7E17_OFFSET UNITYSDK_OFFSET(0xFBD3340)
#define CLASS_1_256175E7E67079F0_CLASS_1_EF79B34F55BCB0E6__CTOR_OFFSET UNITYSDK_OFFSET(0xFBD3330)

inline static constexpr unsigned int Class_1_256175E7E67079F0_Class_1_EF79B34F55BCB0E6_TypeDefinitionIndex = 57287;

class Class_1_256175E7E67079F0_Class_1_EF79B34F55BCB0E6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_CLASS_1_EF79B34F55BCB0E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E9EFFDB44AF7E17(::MoleMole::Config::ConfigViewObjectMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*))((::PBYTE)hIl2Cpp + CLASS_1_256175E7E67079F0_CLASS_1_EF79B34F55BCB0E6_METHOD_1_3E9EFFDB44AF7E17_OFFSET))(this, a1);
	}
};
