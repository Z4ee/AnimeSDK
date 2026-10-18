#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_74F81B0A904057F2_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC612F0)
#define CLASS_1_74F81B0A904057F2_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC61270)
#define CLASS_1_74F81B0A904057F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC61380)

inline static constexpr unsigned int Class_1_74F81B0A904057F2_TypeDefinitionIndex = 43901;

class Class_1_74F81B0A904057F2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F81B0A904057F2__CTOR_OFFSET))(this);
	}

	::System::UInt32 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_74F81B0A904057F2_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_74F81B0A904057F2_CONVERTBOXED_OFFSET))(this, a1);
	}
};
