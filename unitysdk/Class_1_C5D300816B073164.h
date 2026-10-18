#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_C5D300816B073164_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC94320)
#define CLASS_1_C5D300816B073164_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC94270)
#define CLASS_1_C5D300816B073164__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93F00)

inline static constexpr unsigned int Class_1_C5D300816B073164_TypeDefinitionIndex = 43894;

class Class_1_C5D300816B073164 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5D300816B073164__CTOR_OFFSET))(this);
	}

	::System::Decimal Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Decimal(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_C5D300816B073164_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_C5D300816B073164_CONVERTBOXED_OFFSET))(this, a1);
	}
};
