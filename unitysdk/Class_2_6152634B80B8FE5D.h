#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

namespace RPG::GameCore { class GridFightShowMonsterCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6152634B80B8FE5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4FAE80)
#define CLASS_2_6152634B80B8FE5D_METHOD_2_41A66CD8F7223B8A_OFFSET UNITYSDK_OFFSET(0xE4FACD0)
#define CLASS_2_6152634B80B8FE5D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4FAAD0)
#define CLASS_2_6152634B80B8FE5D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE4FADD0)
#define CLASS_2_6152634B80B8FE5D_TICK_OFFSET UNITYSDK_OFFSET(0xE4FAE20)
#define CLASS_2_6152634B80B8FE5D__CTOR_OFFSET UNITYSDK_OFFSET(0xE4FAAC0)
#define CLASS_2_6152634B80B8FE5D__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xE4FAEC0)

inline static constexpr unsigned int Class_2_6152634B80B8FE5D_TypeDefinitionIndex = 55565;

class Class_2_6152634B80B8FE5D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GridFightShowMonsterCutIn* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowMonsterCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowMonsterCutIn*))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::GridFightNodeType Method_2_41A66CD8F7223B8A()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D_METHOD_2_41A66CD8F7223B8A_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6152634B80B8FE5D__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
