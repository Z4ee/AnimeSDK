#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }

#define CLASS_1_43BD383C98B4C0C5_121_METHOD_1_9616373ED6B50F58_OFFSET UNITYSDK_OFFSET(0x156E6F90)
#define CLASS_1_43BD383C98B4C0C5_121__CTOR_OFFSET UNITYSDK_OFFSET(0x156E7020)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_121_TypeDefinitionIndex = 67499;

class Class_1_43BD383C98B4C0C5_121 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_121__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Method_1_9616373ED6B50F58()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_121_METHOD_1_9616373ED6B50F58_OFFSET))(this);
	}
};
