#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_357CC68010B08FED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D51340)
#define CLASS_1_357CC68010B08FED_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x11D51390)
#define CLASS_1_357CC68010B08FED_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x11D512B0)
#define CLASS_1_357CC68010B08FED_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11D51240)
#define CLASS_1_357CC68010B08FED__CTOR_OFFSET UNITYSDK_OFFSET(0x11D511E0)

inline static constexpr unsigned int Class_1_357CC68010B08FED_TypeDefinitionIndex = 69517;

class Class_1_357CC68010B08FED : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357CC68010B08FED_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
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
