#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1148;
namespace RPG::GameCore { class IdleLiveSpineCLTriggerRow; }

#define CLASS_1_220CA4BD7680C9F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC2D7A0)
#define CLASS_1_220CA4BD7680C9F5_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xAC2D710)
#define CLASS_1_220CA4BD7680C9F5_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xAC2D4A0)
#define CLASS_1_220CA4BD7680C9F5__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2D460)

inline static constexpr unsigned int Class_1_220CA4BD7680C9F5_TypeDefinitionIndex = 70212;

class Class_1_220CA4BD7680C9F5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1148* Field_1_0; // 0x10
	::RPG::GameCore::IdleLiveSpineAnimTriggerType Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveSpineCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_220CA4BD7680C9F5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220CA4BD7680C9F5_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220CA4BD7680C9F5_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220CA4BD7680C9F5_DISPOSE_OFFSET))(this);
	}
};
