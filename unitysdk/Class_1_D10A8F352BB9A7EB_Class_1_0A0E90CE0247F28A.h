#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace System { class Action; }

#define CLASS_1_D10A8F352BB9A7EB_CLASS_1_0A0E90CE0247F28A_METHOD_1_246F5C0D34FBD1DC_OFFSET UNITYSDK_OFFSET(0x13A70750)
#define CLASS_1_D10A8F352BB9A7EB_CLASS_1_0A0E90CE0247F28A__CTOR_OFFSET UNITYSDK_OFFSET(0x13A70740)

inline static constexpr unsigned int Class_1_D10A8F352BB9A7EB_Class_1_0A0E90CE0247F28A_TypeDefinitionIndex = 87741;

class Class_1_D10A8F352BB9A7EB_Class_1_0A0E90CE0247F28A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D10A8F352BB9A7EB_CLASS_1_0A0E90CE0247F28A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_246F5C0D34FBD1DC(::MoleMole::ConfigTempleLevelUp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*))((::PBYTE)hIl2Cpp + CLASS_1_D10A8F352BB9A7EB_CLASS_1_0A0E90CE0247F28A_METHOD_1_246F5C0D34FBD1DC_OFFSET))(this, a1);
	}
};
