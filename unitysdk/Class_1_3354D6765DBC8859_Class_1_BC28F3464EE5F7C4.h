#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace System { class Action; }

#define CLASS_1_3354D6765DBC8859_CLASS_1_BC28F3464EE5F7C4_METHOD_1_E2FC158EF672BE9C_OFFSET UNITYSDK_OFFSET(0x11379500)
#define CLASS_1_3354D6765DBC8859_CLASS_1_BC28F3464EE5F7C4__CTOR_OFFSET UNITYSDK_OFFSET(0x113794F0)

inline static constexpr unsigned int Class_1_3354D6765DBC8859_Class_1_BC28F3464EE5F7C4_TypeDefinitionIndex = 81229;

class Class_1_3354D6765DBC8859_Class_1_BC28F3464EE5F7C4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_CLASS_1_BC28F3464EE5F7C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2FC158EF672BE9C(::MoleMole::Config::ConfigHollowChessboardParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_CLASS_1_BC28F3464EE5F7C4_METHOD_1_E2FC158EF672BE9C_OFFSET))(this, a1);
	}
};
