#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3616FDE8A71D0590_2;
namespace Entitas { class IContext; }

#define CLASS_1_C6C5256FBDC1500F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A3A100)
#define CLASS_1_C6C5256FBDC1500F_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x18A3A210)
#define CLASS_1_C6C5256FBDC1500F_GET_CAKERACECORE_OFFSET UNITYSDK_OFFSET(0x18A3A200)
#define CLASS_1_C6C5256FBDC1500F__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3A030)

inline static constexpr unsigned int Class_1_C6C5256FBDC1500F_TypeDefinitionIndex = 34616;

class Class_1_C6C5256FBDC1500F : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_2* _cakeRaceCore_k__BackingField; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_DISPOSE_OFFSET))(this);
	}

	::Class_2_3616FDE8A71D0590_2* get_cakeRaceCore()
	{
		return ((::Class_2_3616FDE8A71D0590_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_GET_CAKERACECORE_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
