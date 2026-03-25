#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_2;
namespace Entitas { class IContext; }

#define CLASS_1_B4357A1C72BABC6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16624140)
#define CLASS_1_B4357A1C72BABC6B_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x16624290)
#define CLASS_1_B4357A1C72BABC6B_GET_CAKERACECORE_OFFSET UNITYSDK_OFFSET(0x16624280)
#define CLASS_1_B4357A1C72BABC6B__CTOR_OFFSET UNITYSDK_OFFSET(0x16624060)

inline static constexpr unsigned int Class_1_B4357A1C72BABC6B_TypeDefinitionIndex = 28605;

class Class_1_B4357A1C72BABC6B : public ::System::Object
{
public:
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
	::Class_2_099B78418029B3B1_2* _cakeRaceCore_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_DISPOSE_OFFSET))(this);
	}

	::Class_2_099B78418029B3B1_2* get_cakeRaceCore()
	{
		return ((::Class_2_099B78418029B3B1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_GET_CAKERACECORE_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
