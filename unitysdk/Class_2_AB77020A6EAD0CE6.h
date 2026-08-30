#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MarbleDragGuideConfig; }
namespace RPG::GameCore { class MarbleWaitBattleInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AB77020A6EAD0CE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1611CEB0)
#define CLASS_2_AB77020A6EAD0CE6_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x1611DA40)
#define CLASS_2_AB77020A6EAD0CE6_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1611CF00)
#define CLASS_2_AB77020A6EAD0CE6_METHOD_2_B2075E9BC242D024_OFFSET UNITYSDK_OFFSET(0x1611D370)
#define CLASS_2_AB77020A6EAD0CE6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1611D0F0)
#define CLASS_2_AB77020A6EAD0CE6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1611D990)
#define CLASS_2_AB77020A6EAD0CE6_TICK_OFFSET UNITYSDK_OFFSET(0x1611D9E0)
#define CLASS_2_AB77020A6EAD0CE6__CTOR_OFFSET UNITYSDK_OFFSET(0x1611CEA0)

inline static constexpr unsigned int Class_2_AB77020A6EAD0CE6_TypeDefinitionIndex = 52587;

class Class_2_AB77020A6EAD0CE6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MarbleWaitBattleInput* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean DLCCLADCHGC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleWaitBattleInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleWaitBattleInput*))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::RPG::GameCore::MarbleDragGuideConfig* Method_2_B2075E9BC242D024()
	{
		return ((::RPG::GameCore::MarbleDragGuideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB77020A6EAD0CE6_METHOD_2_B2075E9BC242D024_OFFSET))(this);
	}
};
