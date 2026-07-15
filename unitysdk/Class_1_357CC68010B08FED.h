#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_357CC68010B08FED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15247C00)
#define CLASS_1_357CC68010B08FED_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x18723FC0)
#define CLASS_1_357CC68010B08FED_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x15247AC0)
#define CLASS_1_357CC68010B08FED_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x15247B40)
#define CLASS_1_357CC68010B08FED__CTOR_OFFSET UNITYSDK_OFFSET(0x15247A30)

inline static constexpr unsigned int Class_1_357CC68010B08FED_TypeDefinitionIndex = 71852;

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
