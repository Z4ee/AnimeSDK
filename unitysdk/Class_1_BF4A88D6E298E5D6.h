#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_BF4A88D6E298E5D6_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC64830)
#define CLASS_1_BF4A88D6E298E5D6_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC64710)
#define CLASS_1_BF4A88D6E298E5D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64960)

inline static constexpr unsigned int Class_1_BF4A88D6E298E5D6_TypeDefinitionIndex = 43895;

class Class_1_BF4A88D6E298E5D6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4A88D6E298E5D6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_BF4A88D6E298E5D6_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_BF4A88D6E298E5D6_CONVERTBOXED_OFFSET))(this, a1);
	}
};
