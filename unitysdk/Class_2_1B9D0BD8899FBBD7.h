#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreatePrefab; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1B9D0BD8899FBBD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16465D60)
#define CLASS_2_1B9D0BD8899FBBD7_METHOD_2_0ED1963A672FB61E_OFFSET UNITYSDK_OFFSET(0x16465FE0)
#define CLASS_2_1B9D0BD8899FBBD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16465DB0)
#define CLASS_2_1B9D0BD8899FBBD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16465F30)
#define CLASS_2_1B9D0BD8899FBBD7_TICK_OFFSET UNITYSDK_OFFSET(0x16465F80)
#define CLASS_2_1B9D0BD8899FBBD7__CTOR_OFFSET UNITYSDK_OFFSET(0x16465D50)

inline static constexpr unsigned int Class_2_1B9D0BD8899FBBD7_TypeDefinitionIndex = 50995;

class Class_2_1B9D0BD8899FBBD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TrainPartyCreatePrefab* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreatePrefab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreatePrefab*))((::PBYTE)hIl2Cpp + CLASS_2_1B9D0BD8899FBBD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9D0BD8899FBBD7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9D0BD8899FBBD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B9D0BD8899FBBD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B9D0BD8899FBBD7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ED1963A672FB61E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1B9D0BD8899FBBD7_METHOD_2_0ED1963A672FB61E_OFFSET))(this, a1);
	}
};
