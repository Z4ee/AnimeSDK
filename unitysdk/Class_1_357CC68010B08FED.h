#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_357CC68010B08FED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188B8F40)
#define CLASS_1_357CC68010B08FED_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x188B8F90)
#define CLASS_1_357CC68010B08FED_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x188B8E00)
#define CLASS_1_357CC68010B08FED_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x188B8E80)
#define CLASS_1_357CC68010B08FED__CTOR_OFFSET UNITYSDK_OFFSET(0x188B8D70)

inline static constexpr unsigned int Class_1_357CC68010B08FED_TypeDefinitionIndex = 75158;

class Class_1_357CC68010B08FED : public ::System::Object
{
public:
	::System::Action* LIOAPMDFLPL; // 0x10
	::System::Boolean AFLGDFPEMNP; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
