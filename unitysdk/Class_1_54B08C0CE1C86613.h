#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_54B08C0CE1C86613_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BD820)
#define CLASS_1_54B08C0CE1C86613_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BD770)
#define CLASS_1_54B08C0CE1C86613__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BD8D0)

inline static constexpr unsigned int Class_1_54B08C0CE1C86613_TypeDefinitionIndex = 42411;

class Class_1_54B08C0CE1C86613 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54B08C0CE1C86613__CTOR_OFFSET))(this);
	}

	::System::UInt64 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_54B08C0CE1C86613_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_54B08C0CE1C86613_CONVERTBOXED_OFFSET))(this, a1);
	}
};
