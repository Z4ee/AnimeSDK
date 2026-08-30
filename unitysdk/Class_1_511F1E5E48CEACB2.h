#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_511F1E5E48CEACB2_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1C70BCF0)
#define CLASS_1_511F1E5E48CEACB2_CONVERT_OFFSET UNITYSDK_OFFSET(0x1C70BCE0)
#define CLASS_1_511F1E5E48CEACB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70BD00)

inline static constexpr unsigned int Class_1_511F1E5E48CEACB2_TypeDefinitionIndex = 44027;

class Class_1_511F1E5E48CEACB2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2__CTOR_OFFSET))(this);
	}

	::System::Object* Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_511F1E5E48CEACB2_CONVERTBOXED_OFFSET))(this, a1);
	}
};
