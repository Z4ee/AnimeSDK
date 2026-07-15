#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_1A4E06E7E098EA4D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B68430)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x16B683E0)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16B682B0)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0x16B68000)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x16B68320)
#define CLASS_1_1A4E06E7E098EA4D__CTOR_OFFSET UNITYSDK_OFFSET(0x16B67F50)

inline static constexpr unsigned int Class_1_1A4E06E7E098EA4D_TypeDefinitionIndex = 71847;

class Class_1_1A4E06E7E098EA4D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_DISPOSE_OFFSET))(this);
	}
};
