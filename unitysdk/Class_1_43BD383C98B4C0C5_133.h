#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }

#define CLASS_1_43BD383C98B4C0C5_133_METHOD_1_9616373ED6B50F58_OFFSET UNITYSDK_OFFSET(0x113D79B0)
#define CLASS_1_43BD383C98B4C0C5_133__CTOR_OFFSET UNITYSDK_OFFSET(0x113D7A40)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_133_TypeDefinitionIndex = 83893;

class Class_1_43BD383C98B4C0C5_133 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_133__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Method_1_9616373ED6B50F58()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_133_METHOD_1_9616373ED6B50F58_OFFSET))(this);
	}
};
