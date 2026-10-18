#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_2D8954DAB4878C65_2_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC65E70)
#define CLASS_1_2D8954DAB4878C65_2_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC65DD0)
#define CLASS_1_2D8954DAB4878C65_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC65C80)

inline static constexpr unsigned int Class_1_2D8954DAB4878C65_2_TypeDefinitionIndex = 43900;

class Class_1_2D8954DAB4878C65_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_2__CTOR_OFFSET))(this);
	}

	::System::Int32 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_2_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_2_CONVERTBOXED_OFFSET))(this, a1);
	}
};
