#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfigSeparate; }
namespace System { class Action; }

#define CLASS_1_892C8E99BD4BE910_CLASS_1_49E6985A373B7731_METHOD_1_D6546B132573F88F_OFFSET UNITYSDK_OFFSET(0x1B9E2DE0)
#define CLASS_1_892C8E99BD4BE910_CLASS_1_49E6985A373B7731__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E2DD0)

inline static constexpr unsigned int Class_1_892C8E99BD4BE910_Class_1_49E6985A373B7731_TypeDefinitionIndex = 41573;

class Class_1_892C8E99BD4BE910_Class_1_49E6985A373B7731 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_CLASS_1_49E6985A373B7731__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D6546B132573F88F(::MoleMole::DitherConfigSeparate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfigSeparate*))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_CLASS_1_49E6985A373B7731_METHOD_1_D6546B132573F88F_OFFSET))(this, a1);
	}
};
