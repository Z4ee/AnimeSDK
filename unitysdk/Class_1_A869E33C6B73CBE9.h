#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1098;
namespace RPG::GameCore { class IdleLiveSpineCLTriggerRow; }

#define CLASS_1_A869E33C6B73CBE9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D6DBA0)
#define CLASS_1_A869E33C6B73CBE9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11D6DB10)
#define CLASS_1_A869E33C6B73CBE9_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x11D6D9A0)
#define CLASS_1_A869E33C6B73CBE9__CTOR_OFFSET UNITYSDK_OFFSET(0x11D6D960)

inline static constexpr unsigned int Class_1_A869E33C6B73CBE9_TypeDefinitionIndex = 69400;

class Class_1_A869E33C6B73CBE9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1098* Field_1_1; // 0x10
	::RPG::GameCore::IdleLiveSpineAnimTriggerType Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveSpineCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_A869E33C6B73CBE9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A869E33C6B73CBE9_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A869E33C6B73CBE9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A869E33C6B73CBE9_DISPOSE_OFFSET))(this);
	}
};
