#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }

#define CLASS_1_3806273968441CBD_COLLECT_OFFSET UNITYSDK_OFFSET(0x1235D8D0)
#define CLASS_1_3806273968441CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1235D960)

inline static constexpr unsigned int Class_1_3806273968441CBD_TypeDefinitionIndex = 51194;

class Class_1_3806273968441CBD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3806273968441CBD__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Collect()
	{
		return ((::Il2CppArray<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3806273968441CBD_COLLECT_OFFSET))(this);
	}
};
