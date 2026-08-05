#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace System { class Action; }

#define CLASS_1_3354D6765DBC8859_CLASS_1_780991B6245DD05A_METHOD_1_5F34CD4CBFF01697_OFFSET UNITYSDK_OFFSET(0x171B77D0)
#define CLASS_1_3354D6765DBC8859_CLASS_1_780991B6245DD05A__CTOR_OFFSET UNITYSDK_OFFSET(0x171B77C0)

inline static constexpr unsigned int Class_1_3354D6765DBC8859_Class_1_780991B6245DD05A_TypeDefinitionIndex = 83774;

class Class_1_3354D6765DBC8859_Class_1_780991B6245DD05A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_CLASS_1_780991B6245DD05A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5F34CD4CBFF01697(::MoleMole::Config::ConfigHollowChessboardParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_CLASS_1_780991B6245DD05A_METHOD_1_5F34CD4CBFF01697_OFFSET))(this, a1);
	}
};
