#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_377A26DDC598E2CA_1_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BDDF0)
#define CLASS_1_377A26DDC598E2CA_1_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BDD60)
#define CLASS_1_377A26DDC598E2CA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BDE80)

inline static constexpr unsigned int Class_1_377A26DDC598E2CA_1_TypeDefinitionIndex = 42410;

class Class_1_377A26DDC598E2CA_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_377A26DDC598E2CA_1__CTOR_OFFSET))(this);
	}

	::System::Int64 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Int64(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_377A26DDC598E2CA_1_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_377A26DDC598E2CA_1_CONVERTBOXED_OFFSET))(this, a1);
	}
};
