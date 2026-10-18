#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_2D8954DAB4878C65_1_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC931C0)
#define CLASS_1_2D8954DAB4878C65_1_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC93120)
#define CLASS_1_2D8954DAB4878C65_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93270)

inline static constexpr unsigned int Class_1_2D8954DAB4878C65_1_TypeDefinitionIndex = 43899;

class Class_1_2D8954DAB4878C65_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_1__CTOR_OFFSET))(this);
	}

	::System::UInt16 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt16(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_1_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D8954DAB4878C65_1_CONVERTBOXED_OFFSET))(this, a1);
	}
};
