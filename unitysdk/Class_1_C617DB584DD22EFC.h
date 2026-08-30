#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_23;
class Class_1_B019EAD7E127C874;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define CLASS_1_C617DB584DD22EFC_GET_NEWRESULT_OFFSET UNITYSDK_OFFSET(0x186C70A0)
#define CLASS_1_C617DB584DD22EFC_GET_OLDRESULT_OFFSET UNITYSDK_OFFSET(0x186C7090)
#define CLASS_1_C617DB584DD22EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x186C70B0)

inline static constexpr unsigned int Class_1_C617DB584DD22EFC_TypeDefinitionIndex = 80123;

class Class_1_C617DB584DD22EFC : public ::System::Object
{
public:
	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _NewResult_k__BackingField; // 0x10
	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _OldResult_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_97E659ED8D5D259C_23* a1, ::Class_1_B019EAD7E127C874* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::Class_1_B019EAD7E127C874*))((::PBYTE)hIl2Cpp + CLASS_1_C617DB584DD22EFC__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_OldResult()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C617DB584DD22EFC_GET_OLDRESULT_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_NewResult()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C617DB584DD22EFC_GET_NEWRESULT_OFFSET))(this);
	}
};
