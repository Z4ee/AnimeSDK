#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_B07B88BEE4F9FC96_4_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BA3B0)
#define CLASS_1_B07B88BEE4F9FC96_4_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BA2F0)
#define CLASS_1_B07B88BEE4F9FC96_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BA480)

inline static constexpr unsigned int Class_1_B07B88BEE4F9FC96_4_TypeDefinitionIndex = 42409;

class Class_1_B07B88BEE4F9FC96_4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_4__CTOR_OFFSET))(this);
	}

	::System::UInt32 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_4_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_4_CONVERTBOXED_OFFSET))(this, a1);
	}
};
