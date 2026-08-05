#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_426E5FBB6E5FF4B7_METHOD_1_7C4C0DDD45DADE86_OFFSET UNITYSDK_OFFSET(0x18E91150)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_426E5FBB6E5FF4B7__CTOR_OFFSET UNITYSDK_OFFSET(0x18E91140)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_426E5FBB6E5FF4B7_TypeDefinitionIndex = 71693;

class Class_1_2D7A7F4C8725BB96_Class_1_426E5FBB6E5FF4B7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_426E5FBB6E5FF4B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7C4C0DDD45DADE86(::MoleMole::ConfigAvatarDateTeleport* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAvatarDateTeleport*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_426E5FBB6E5FF4B7_METHOD_1_7C4C0DDD45DADE86_OFFSET))(this, a1);
	}
};
