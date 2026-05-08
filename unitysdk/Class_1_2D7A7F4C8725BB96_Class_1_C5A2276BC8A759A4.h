#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_C5A2276BC8A759A4_METHOD_1_BE63E168C3DBE22B_OFFSET UNITYSDK_OFFSET(0x13354440)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_C5A2276BC8A759A4__CTOR_OFFSET UNITYSDK_OFFSET(0x13354430)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_C5A2276BC8A759A4_TypeDefinitionIndex = 51209;

class Class_1_2D7A7F4C8725BB96_Class_1_C5A2276BC8A759A4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_C5A2276BC8A759A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE63E168C3DBE22B(::MoleMole::ConfigAvatarDateTeleport* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAvatarDateTeleport*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_C5A2276BC8A759A4_METHOD_1_BE63E168C3DBE22B_OFFSET))(this, a1);
	}
};
