#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetMonsterEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0A053ACAB3C04AA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0C86F0)
#define CLASS_2_0A053ACAB3C04AA4_METHOD_2_4AD3C45D81B35B70_OFFSET UNITYSDK_OFFSET(0x1A0C9BC0)
#define CLASS_2_0A053ACAB3C04AA4_METHOD_2_71436269021F921C_OFFSET UNITYSDK_OFFSET(0x1A0C9AD0)
#define CLASS_2_0A053ACAB3C04AA4_METHOD_2_CD0979951400C3FD_OFFSET UNITYSDK_OFFSET(0x1A0C9B60)
#define CLASS_2_0A053ACAB3C04AA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0C8730)
#define CLASS_2_0A053ACAB3C04AA4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A0C9C20)
#define CLASS_2_0A053ACAB3C04AA4_TICK_OFFSET UNITYSDK_OFFSET(0x1A0C9C70)
#define CLASS_2_0A053ACAB3C04AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C86E0)

inline static constexpr unsigned int Class_2_0A053ACAB3C04AA4_TypeDefinitionIndex = 55733;

class Class_2_0A053ACAB3C04AA4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetMonsterEnergyBarState* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::GameCore::FixPoint> Method_2_71436269021F921C(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_METHOD_2_71436269021F921C_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Boolean> Method_2_CD0979951400C3FD(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_METHOD_2_CD0979951400C3FD_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_2_4AD3C45D81B35B70(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0A053ACAB3C04AA4_METHOD_2_4AD3C45D81B35B70_OFFSET))(this, a1);
	}
};
