#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_9DF16ABD473B2051_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC64670)
#define CLASS_1_9DF16ABD473B2051_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC645E0)
#define CLASS_1_9DF16ABD473B2051__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64700)

inline static constexpr unsigned int Class_1_9DF16ABD473B2051_TypeDefinitionIndex = 43903;

class Class_1_9DF16ABD473B2051 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DF16ABD473B2051__CTOR_OFFSET))(this);
	}

	::System::UInt64 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DF16ABD473B2051_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_9DF16ABD473B2051_CONVERTBOXED_OFFSET))(this, a1);
	}
};
