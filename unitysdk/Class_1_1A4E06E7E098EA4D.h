#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_1A4E06E7E098EA4D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC95A490)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xC95A440)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xC95A380)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC95A310)
#define CLASS_1_1A4E06E7E098EA4D_METHOD_1_C9ABB91D9E5304C8_OFFSET UNITYSDK_OFFSET(0xC95A0D0)
#define CLASS_1_1A4E06E7E098EA4D__CTOR_OFFSET UNITYSDK_OFFSET(0xC95A020)

inline static constexpr unsigned int Class_1_1A4E06E7E098EA4D_TypeDefinitionIndex = 70324;

class Class_1_1A4E06E7E098EA4D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9ABB91D9E5304C8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_C9ABB91D9E5304C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A4E06E7E098EA4D_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
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
