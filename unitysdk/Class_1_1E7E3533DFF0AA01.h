#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_1E7E3533DFF0AA01_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC65D40)
#define CLASS_1_1E7E3533DFF0AA01_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC65CC0)
#define CLASS_1_1E7E3533DFF0AA01__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC65C90)

inline static constexpr unsigned int Class_1_1E7E3533DFF0AA01_TypeDefinitionIndex = 43892;

class Class_1_1E7E3533DFF0AA01 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E3533DFF0AA01__CTOR_OFFSET))(this);
	}

	::System::Single Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_1E7E3533DFF0AA01_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_1E7E3533DFF0AA01_CONVERTBOXED_OFFSET))(this, a1);
	}
};
