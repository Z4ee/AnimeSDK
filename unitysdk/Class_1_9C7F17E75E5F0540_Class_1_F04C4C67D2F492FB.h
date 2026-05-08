#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFont; }
namespace System { class Action; }

#define CLASS_1_9C7F17E75E5F0540_CLASS_1_F04C4C67D2F492FB_METHOD_1_7C9569FD32312965_OFFSET UNITYSDK_OFFSET(0x13DC4070)
#define CLASS_1_9C7F17E75E5F0540_CLASS_1_F04C4C67D2F492FB__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC4060)

inline static constexpr unsigned int Class_1_9C7F17E75E5F0540_Class_1_F04C4C67D2F492FB_TypeDefinitionIndex = 56870;

class Class_1_9C7F17E75E5F0540_Class_1_F04C4C67D2F492FB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_CLASS_1_F04C4C67D2F492FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7C9569FD32312965(::MoleMole::Config::ConfigUIFont* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFont*))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_CLASS_1_F04C4C67D2F492FB_METHOD_1_7C9569FD32312965_OFFSET))(this, a1);
	}
};
