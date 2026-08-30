#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class String; }

#define CLASS_1_0ECA722A6AF95D2B_METHOD_1_C9823790D19BABA2_OFFSET UNITYSDK_OFFSET(0xC0167B0)
#define CLASS_1_0ECA722A6AF95D2B_METHOD_1_E9FCF388D6AA24B1_OFFSET UNITYSDK_OFFSET(0xC016690)
#define CLASS_1_0ECA722A6AF95D2B__CTOR_OFFSET UNITYSDK_OFFSET(0xC016930)

inline static constexpr unsigned int Class_1_0ECA722A6AF95D2B_TypeDefinitionIndex = 48614;

class Class_1_0ECA722A6AF95D2B : public ::System::Object
{
public:
	::System::String* KNAPCKONKFE; // 0x10
	::System::Single DIJAPAFKAIC; // 0x18
	::UnityEngine::Color AALKAGBOONM; // 0x1C
	::UnityEngine::Color ILBNGMLDGJG; // 0x2C

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
