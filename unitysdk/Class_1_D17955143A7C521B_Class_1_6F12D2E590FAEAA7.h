#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { class Action; }

#define CLASS_1_D17955143A7C521B_CLASS_1_6F12D2E590FAEAA7_METHOD_1_E93988E9C9EA6F5C_OFFSET UNITYSDK_OFFSET(0x16FE0510)
#define CLASS_1_D17955143A7C521B_CLASS_1_6F12D2E590FAEAA7__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE0500)

inline static constexpr unsigned int Class_1_D17955143A7C521B_Class_1_6F12D2E590FAEAA7_TypeDefinitionIndex = 66208;

class Class_1_D17955143A7C521B_Class_1_6F12D2E590FAEAA7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_CLASS_1_6F12D2E590FAEAA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E93988E9C9EA6F5C(::MoleMole::Config::ConfigAvatarLayoutCameraMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarLayoutCameraMisc*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_CLASS_1_6F12D2E590FAEAA7_METHOD_1_E93988E9C9EA6F5C_OFFSET))(this, a1);
	}
};
