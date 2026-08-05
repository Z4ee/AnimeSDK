#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_270;
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01_METHOD_1_9C35468364976E3E_OFFSET UNITYSDK_OFFSET(0x1A2B0340)
#define CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ADF80)

inline static constexpr unsigned int Class_2_A489ECDE3C11EF02_Class_1_DAE890D4C27DEC01_TypeDefinitionIndex = 77445;

class Class_2_A489ECDE3C11EF02_Class_1_DAE890D4C27DEC01 : public ::System::Object
{
public:
	::NPCCrowd::AI::AttractorRuntime* Field_1_7; // 0x10
	::System::Action_1<::Class_3_025FF4981524A424_270*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9C35468364976E3E(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01_METHOD_1_9C35468364976E3E_OFFSET))(this, a1);
	}
};
