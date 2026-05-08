#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAvatarLayoutCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D17955143A7C521B_CLASS_1_755497395B9ACCC6_METHOD_1_14C87E4D6455F548_OFFSET UNITYSDK_OFFSET(0x169F83F0)
#define CLASS_1_D17955143A7C521B_CLASS_1_755497395B9ACCC6__CTOR_OFFSET UNITYSDK_OFFSET(0x169F83E0)

inline static constexpr unsigned int Class_1_D17955143A7C521B_Class_1_755497395B9ACCC6_TypeDefinitionIndex = 61884;

class Class_1_D17955143A7C521B_Class_1_755497395B9ACCC6 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigAvatarLayoutCamera*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_CLASS_1_755497395B9ACCC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_14C87E4D6455F548(::MoleMole::Config::ConfigAvatarLayoutCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarLayoutCamera*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_CLASS_1_755497395B9ACCC6_METHOD_1_14C87E4D6455F548_OFFSET))(this, a1);
	}
};
