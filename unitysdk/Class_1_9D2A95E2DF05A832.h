#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1194;
namespace RPG::GameCore { class IdleLiveSpineCLTriggerRow; }

#define CLASS_1_9D2A95E2DF05A832_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14E59450)
#define CLASS_1_9D2A95E2DF05A832_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x14E593C0)
#define CLASS_1_9D2A95E2DF05A832_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x14E590E0)
#define CLASS_1_9D2A95E2DF05A832__CTOR_OFFSET UNITYSDK_OFFSET(0x14E590A0)

inline static constexpr unsigned int Class_1_9D2A95E2DF05A832_TypeDefinitionIndex = 71735;

class Class_1_9D2A95E2DF05A832 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1194* Field_1_0; // 0x10
	::RPG::GameCore::IdleLiveSpineAnimTriggerType Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveSpineCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_9D2A95E2DF05A832__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A95E2DF05A832_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A95E2DF05A832_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D2A95E2DF05A832_DISPOSE_OFFSET))(this);
	}
};
