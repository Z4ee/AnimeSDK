#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_5DF5F62C68EF718F;
namespace RPG::GameCore { class StartEffectAim; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC787CB9BCB73BEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC269E20)
#define CLASS_2_EC787CB9BCB73BEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC269E60)
#define CLASS_2_EC787CB9BCB73BEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC26A310)
#define CLASS_2_EC787CB9BCB73BEB_TICK_OFFSET UNITYSDK_OFFSET(0xC26A360)
#define CLASS_2_EC787CB9BCB73BEB__CTOR_OFFSET UNITYSDK_OFFSET(0xC269E10)

inline static constexpr unsigned int Class_2_EC787CB9BCB73BEB_TypeDefinitionIndex = 55661;

class Class_2_EC787CB9BCB73BEB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StartEffectAim* OFKGLJOAMLD; // 0x18
	::Class_1_5DF5F62C68EF718F* BICMFAKJPCI; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::UnityEngine::Transform* LPEOHKHOLEP; // 0x30
	::UnityEngine::Quaternion KHDDKPNOAMK; // 0x38
	::UnityEngine::Quaternion MGFPKGIOKEN; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartEffectAim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartEffectAim*))((::PBYTE)hIl2Cpp + CLASS_2_EC787CB9BCB73BEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC787CB9BCB73BEB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC787CB9BCB73BEB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC787CB9BCB73BEB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC787CB9BCB73BEB_TICK_OFFSET))(this, a1);
	}
};
