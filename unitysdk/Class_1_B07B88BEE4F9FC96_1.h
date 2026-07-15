#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_B07B88BEE4F9FC96_1_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BDC40)
#define CLASS_1_B07B88BEE4F9FC96_1_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BDB80)
#define CLASS_1_B07B88BEE4F9FC96_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BDD00)

inline static constexpr unsigned int Class_1_B07B88BEE4F9FC96_1_TypeDefinitionIndex = 42406;

class Class_1_B07B88BEE4F9FC96_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_1__CTOR_OFFSET))(this);
	}

	::System::Int16 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_1_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_1_CONVERTBOXED_OFFSET))(this, a1);
	}
};
