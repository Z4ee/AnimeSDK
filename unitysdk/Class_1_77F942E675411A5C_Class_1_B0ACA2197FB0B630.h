#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { class Action; }

#define CLASS_1_77F942E675411A5C_CLASS_1_B0ACA2197FB0B630_METHOD_1_FB10CAA1F78BAD5E_OFFSET UNITYSDK_OFFSET(0x18E829E0)
#define CLASS_1_77F942E675411A5C_CLASS_1_B0ACA2197FB0B630__CTOR_OFFSET UNITYSDK_OFFSET(0x18E829D0)

inline static constexpr unsigned int Class_1_77F942E675411A5C_Class_1_B0ACA2197FB0B630_TypeDefinitionIndex = 48508;

class Class_1_77F942E675411A5C_Class_1_B0ACA2197FB0B630 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_CLASS_1_B0ACA2197FB0B630__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB10CAA1F78BAD5E(::MoleMole::Config::ConfigHollowPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_CLASS_1_B0ACA2197FB0B630_METHOD_1_FB10CAA1F78BAD5E_OFFSET))(this, a1);
	}
};
