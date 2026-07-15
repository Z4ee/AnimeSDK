#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_B07B88BEE4F9FC96_2_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BE230)
#define CLASS_1_B07B88BEE4F9FC96_2_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BE170)
#define CLASS_1_B07B88BEE4F9FC96_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE2F0)

inline static constexpr unsigned int Class_1_B07B88BEE4F9FC96_2_TypeDefinitionIndex = 42407;

class Class_1_B07B88BEE4F9FC96_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_2__CTOR_OFFSET))(this);
	}

	::System::UInt16 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt16(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_2_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_2_CONVERTBOXED_OFFSET))(this, a1);
	}
};
