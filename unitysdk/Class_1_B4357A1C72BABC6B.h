#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8C608625ABC8C4FA_2;
namespace Entitas { class IContext; }

#define CLASS_1_B4357A1C72BABC6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C26D80)
#define CLASS_1_B4357A1C72BABC6B_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x17C26EC0)
#define CLASS_1_B4357A1C72BABC6B_GET_CAKERACECORE_OFFSET UNITYSDK_OFFSET(0x17C26EB0)
#define CLASS_1_B4357A1C72BABC6B__CTOR_OFFSET UNITYSDK_OFFSET(0x17C26CA0)

inline static constexpr unsigned int Class_1_B4357A1C72BABC6B_TypeDefinitionIndex = 34334;

class Class_1_B4357A1C72BABC6B : public ::System::Object
{
public:
	::Class_2_8C608625ABC8C4FA_2* _cakeRaceCore_k__BackingField; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_DISPOSE_OFFSET))(this);
	}

	::Class_2_8C608625ABC8C4FA_2* get_cakeRaceCore()
	{
		return ((::Class_2_8C608625ABC8C4FA_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_GET_CAKERACECORE_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
