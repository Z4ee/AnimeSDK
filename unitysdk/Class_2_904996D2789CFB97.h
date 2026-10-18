#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyGameplayShowMaskBG; }

#define CLASS_2_904996D2789CFB97_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF258C0)
#define CLASS_2_904996D2789CFB97_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xCF25910)
#define CLASS_2_904996D2789CFB97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF259C0)
#define CLASS_2_904996D2789CFB97_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF25A50)
#define CLASS_2_904996D2789CFB97_TICK_OFFSET UNITYSDK_OFFSET(0xCF25AA0)
#define CLASS_2_904996D2789CFB97__CTOR_OFFSET UNITYSDK_OFFSET(0xCF258B0)

inline static constexpr unsigned int Class_2_904996D2789CFB97_TypeDefinitionIndex = 53425;

class Class_2_904996D2789CFB97 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TrainPartyGameplayShowMaskBG* OFKGLJOAMLD; // 0x20
	::System::Single KCLBCNGCLHJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}
};
