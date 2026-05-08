#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { class Action; }

#define CLASS_1_77F942E675411A5C_CLASS_1_6D4905A21463B0BA_METHOD_1_1C4FC31560DD92E3_OFFSET UNITYSDK_OFFSET(0x11AEF200)
#define CLASS_1_77F942E675411A5C_CLASS_1_6D4905A21463B0BA__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEF1F0)

inline static constexpr unsigned int Class_1_77F942E675411A5C_Class_1_6D4905A21463B0BA_TypeDefinitionIndex = 55573;

class Class_1_77F942E675411A5C_Class_1_6D4905A21463B0BA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_CLASS_1_6D4905A21463B0BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C4FC31560DD92E3(::MoleMole::Config::ConfigHollowPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_CLASS_1_6D4905A21463B0BA_METHOD_1_1C4FC31560DD92E3_OFFSET))(this, a1);
	}
};
