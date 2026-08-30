#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_377A26DDC598E2CA_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1EFD07B0)
#define CLASS_1_377A26DDC598E2CA_CONVERT_OFFSET UNITYSDK_OFFSET(0x1EFD0720)
#define CLASS_1_377A26DDC598E2CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD06F0)

inline static constexpr unsigned int Class_1_377A26DDC598E2CA_TypeDefinitionIndex = 44011;

class Class_1_377A26DDC598E2CA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_377A26DDC598E2CA__CTOR_OFFSET))(this);
	}

	::System::Single Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_377A26DDC598E2CA_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_377A26DDC598E2CA_CONVERTBOXED_OFFSET))(this, a1);
	}
};
