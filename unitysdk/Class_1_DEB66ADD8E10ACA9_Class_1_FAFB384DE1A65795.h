#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }

#define CLASS_1_DEB66ADD8E10ACA9_CLASS_1_FAFB384DE1A65795_METHOD_1_A0165844587C0206_OFFSET UNITYSDK_OFFSET(0xC961D50)
#define CLASS_1_DEB66ADD8E10ACA9_CLASS_1_FAFB384DE1A65795__CTOR_OFFSET UNITYSDK_OFFSET(0xC961D40)

inline static constexpr unsigned int Class_1_DEB66ADD8E10ACA9_Class_1_FAFB384DE1A65795_TypeDefinitionIndex = 42575;

class Class_1_DEB66ADD8E10ACA9_Class_1_FAFB384DE1A65795 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_CLASS_1_FAFB384DE1A65795__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0165844587C0206(::MoleMole::Config::ConfigUIAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_CLASS_1_FAFB384DE1A65795_METHOD_1_A0165844587C0206_OFFSET))(this, a1);
	}
};
