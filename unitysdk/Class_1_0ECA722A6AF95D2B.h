#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class String; }

#define CLASS_1_0ECA722A6AF95D2B_METHOD_1_C9823790D19BABA2_OFFSET UNITYSDK_OFFSET(0x8C23E40)
#define CLASS_1_0ECA722A6AF95D2B_METHOD_1_E9FCF388D6AA24B1_OFFSET UNITYSDK_OFFSET(0x8C23D20)
#define CLASS_1_0ECA722A6AF95D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x8C24070)

inline static constexpr unsigned int Class_1_0ECA722A6AF95D2B_TypeDefinitionIndex = 38994;

class Class_1_0ECA722A6AF95D2B : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::UnityEngine::Color Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x28
	::UnityEngine::Color Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ECA722A6AF95D2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9FCF388D6AA24B1(::RPGTools::Timeline::LifeCycleEventArgument* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LifeCycleEventArgument*))((::PBYTE)hIl2Cpp + CLASS_1_0ECA722A6AF95D2B_METHOD_1_E9FCF388D6AA24B1_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::LifeCycleEventArgument* Method_1_C9823790D19BABA2()
	{
		return ((::RPGTools::Timeline::LifeCycleEventArgument*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ECA722A6AF95D2B_METHOD_1_C9823790D19BABA2_OFFSET))(this);
	}
};
