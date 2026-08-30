#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_B07B88BEE4F9FC96_3_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1EFD0920)
#define CLASS_1_B07B88BEE4F9FC96_3_CONVERT_OFFSET UNITYSDK_OFFSET(0x1EFD0860)
#define CLASS_1_B07B88BEE4F9FC96_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD06E0)

inline static constexpr unsigned int Class_1_B07B88BEE4F9FC96_3_TypeDefinitionIndex = 44019;

class Class_1_B07B88BEE4F9FC96_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_3__CTOR_OFFSET))(this);
	}

	::System::Int32 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_3_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_3_CONVERTBOXED_OFFSET))(this, a1);
	}
};
