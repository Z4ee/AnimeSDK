#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace System { class Action; }

#define CLASS_1_C8116EB1F0D068AE_CLASS_1_65267A24F6ACBB50_METHOD_1_8DD5DB66AE1AA19A_OFFSET UNITYSDK_OFFSET(0x11882C80)
#define CLASS_1_C8116EB1F0D068AE_CLASS_1_65267A24F6ACBB50__CTOR_OFFSET UNITYSDK_OFFSET(0x11882C70)

inline static constexpr unsigned int Class_1_C8116EB1F0D068AE_Class_1_65267A24F6ACBB50_TypeDefinitionIndex = 63342;

class Class_1_C8116EB1F0D068AE_Class_1_65267A24F6ACBB50 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_CLASS_1_65267A24F6ACBB50__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DD5DB66AE1AA19A(::MoleMole::ConfigNpcPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNpcPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_CLASS_1_65267A24F6ACBB50_METHOD_1_8DD5DB66AE1AA19A_OFFSET))(this, a1);
	}
};
