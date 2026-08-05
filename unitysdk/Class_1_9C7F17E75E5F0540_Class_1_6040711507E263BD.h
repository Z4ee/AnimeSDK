#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFont; }
namespace System { class Action; }

#define CLASS_1_9C7F17E75E5F0540_CLASS_1_6040711507E263BD_METHOD_1_46901D048150E906_OFFSET UNITYSDK_OFFSET(0x1584CEE0)
#define CLASS_1_9C7F17E75E5F0540_CLASS_1_6040711507E263BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1584CED0)

inline static constexpr unsigned int Class_1_9C7F17E75E5F0540_Class_1_6040711507E263BD_TypeDefinitionIndex = 60254;

class Class_1_9C7F17E75E5F0540_Class_1_6040711507E263BD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_CLASS_1_6040711507E263BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_46901D048150E906(::MoleMole::Config::ConfigUIFont* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFont*))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_CLASS_1_6040711507E263BD_METHOD_1_46901D048150E906_OFFSET))(this, a1);
	}
};
