#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PRDConfig; }
namespace System { class Action; }

#define CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_B25F233C1DBA12B8_METHOD_1_7F7BE49A7A5720D8_OFFSET UNITYSDK_OFFSET(0x14938710)
#define CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_B25F233C1DBA12B8__CTOR_OFFSET UNITYSDK_OFFSET(0x14938700)

inline static constexpr unsigned int Class_1_CB8A9E6A45A6ADD1_Class_1_B25F233C1DBA12B8_TypeDefinitionIndex = 55178;

class Class_1_CB8A9E6A45A6ADD1_Class_1_B25F233C1DBA12B8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_B25F233C1DBA12B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F7BE49A7A5720D8(::MoleMole::Config::PRDConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PRDConfig*))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_B25F233C1DBA12B8_METHOD_1_7F7BE49A7A5720D8_OFFSET))(this, a1);
	}
};
