#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_511F1E5E48CEACB2_1_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1EFCFA60)
#define CLASS_1_511F1E5E48CEACB2_1_CONVERT_OFFSET UNITYSDK_OFFSET(0x1EFCFA50)
#define CLASS_1_511F1E5E48CEACB2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCFA70)

inline static constexpr unsigned int Class_1_511F1E5E48CEACB2_1_TypeDefinitionIndex = 44028;

class Class_1_511F1E5E48CEACB2_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_1_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_1_CONVERTBOXED_OFFSET))(this, a1);
	}
};
