#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_0301444171B4FB72__CTOR_OFFSET UNITYSDK_OFFSET(0x187E2730)

inline static constexpr unsigned int Class_1_0301444171B4FB72_TypeDefinitionIndex = 61168;

class Class_1_0301444171B4FB72 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* AONJGMLJNLC; // 0x10
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* NEMENNBHAFK; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGNOHDHNDNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0301444171B4FB72__CTOR_OFFSET))(this);
	}
};
