#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_511F1E5E48CEACB2_2_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BA210)
#define CLASS_1_511F1E5E48CEACB2_2_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BA080)
#define CLASS_1_511F1E5E48CEACB2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BA240)

inline static constexpr unsigned int Class_1_511F1E5E48CEACB2_2_TypeDefinitionIndex = 42419;

class Class_1_511F1E5E48CEACB2_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_2__CTOR_OFFSET))(this);
	}

	::System::Char Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Char(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_2_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_2_CONVERTBOXED_OFFSET))(this, a1);
	}
};
