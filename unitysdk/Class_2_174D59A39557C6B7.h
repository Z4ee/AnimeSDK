#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D;
class Class_3_07C3C4D2990C49EE;
class Class_3_6E5B2D66843DE500;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetComponentAssetLoadStateWithAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_174D59A39557C6B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B0C8B0)
#define CLASS_2_174D59A39557C6B7_METHOD_2_C42F96818651C435_OFFSET UNITYSDK_OFFSET(0x14B0D260)
#define CLASS_2_174D59A39557C6B7_METHOD_2_ED09258A28FE7311_OFFSET UNITYSDK_OFFSET(0x14B0D040)
#define CLASS_2_174D59A39557C6B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B0CB70)
#define CLASS_2_174D59A39557C6B7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B0CA90)
#define CLASS_2_174D59A39557C6B7_TICK_OFFSET UNITYSDK_OFFSET(0x14B0DBD0)
#define CLASS_2_174D59A39557C6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0C770)

inline static constexpr unsigned int Class_2_174D59A39557C6B7_TypeDefinitionIndex = 52871;

class Class_2_174D59A39557C6B7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* Field_2_2; // 0x28
	::Class_3_6E5B2D66843DE500* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_TICK_OFFSET))(this, a1);
	}

	::Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D* Method_2_ED09258A28FE7311(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_METHOD_2_ED09258A28FE7311_OFFSET))(this, a1);
	}

	::System::Void Method_2_C42F96818651C435(::Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D*))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_METHOD_2_C42F96818651C435_OFFSET))(this, a1);
	}
};
