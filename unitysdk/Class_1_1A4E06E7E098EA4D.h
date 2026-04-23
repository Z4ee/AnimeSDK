#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_1A4E06E7E098EA4D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B0D0B0)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x12B0D060)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x12B0CFD0)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x12B0CF70)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x12B0CDC0)
#define CLASS_1_1A4E06E7E098EA4D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0CD20)

inline static constexpr unsigned int Class_1_1A4E06E7E098EA4D_TypeDefinitionIndex = 69512;

class Class_1_1A4E06E7E098EA4D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
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
