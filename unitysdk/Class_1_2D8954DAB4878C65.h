#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_2D8954DAB4878C65_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1EFD0C20)
#define CLASS_1_2D8954DAB4878C65_CONVERT_OFFSET UNITYSDK_OFFSET(0x1EFD0B10)
#define CLASS_1_2D8954DAB4878C65__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD0700)

inline static constexpr unsigned int Class_1_2D8954DAB4878C65_TypeDefinitionIndex = 44013;

class Class_1_2D8954DAB4878C65 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65__CTOR_OFFSET))(this);
	}

	::System::Decimal Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Decimal(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_CONVERTBOXED_OFFSET))(this, a1);
	}
};
