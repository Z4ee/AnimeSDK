#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_557;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleUIPauseEnvironmentInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AE400BC40570CD59_METHOD_3_B1A7521B14C5D044_OFFSET UNITYSDK_OFFSET(0x162FDB80)
#define CLASS_3_AE400BC40570CD59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162FDAF0)
#define CLASS_3_AE400BC40570CD59__CTOR_OFFSET UNITYSDK_OFFSET(0x162FDAC0)
#define CLASS_3_AE400BC40570CD59___COLLECTINFOS_B__2_0_OFFSET UNITYSDK_OFFSET(0x162FDE60)

inline static constexpr unsigned int Class_3_AE400BC40570CD59_TypeDefinitionIndex = 55358;

class Class_3_AE400BC40570CD59 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*))((::PBYTE)hIl2Cpp + CLASS_3_AE400BC40570CD59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE400BC40570CD59_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_557*>* Method_3_B1A7521B14C5D044()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_557*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE400BC40570CD59_METHOD_3_B1A7521B14C5D044_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __CollectInfos_b__2_0(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_AE400BC40570CD59___COLLECTINFOS_B__2_0_OFFSET))(this, a1);
	}
};
