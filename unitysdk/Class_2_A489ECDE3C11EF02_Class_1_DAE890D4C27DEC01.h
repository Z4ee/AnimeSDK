#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_3_025FF4981524A424_338;
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01_METHOD_1_9C35468364976E3E_OFFSET UNITYSDK_OFFSET(0x14DD2AB0)
#define CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD2AA0)

inline static constexpr unsigned int Class_2_A489ECDE3C11EF02_Class_1_DAE890D4C27DEC01_TypeDefinitionIndex = 62520;

class Class_2_A489ECDE3C11EF02_Class_1_DAE890D4C27DEC01 : public ::System::Object
{
public:
	::NPCCrowd::AI::AttractorRuntime* Field_1_1; // 0x10
	::System::Action_1<::Class_3_025FF4981524A424_338*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9C35468364976E3E(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A489ECDE3C11EF02_CLASS_1_DAE890D4C27DEC01_METHOD_1_9C35468364976E3E_OFFSET))(this, a1);
	}
};
