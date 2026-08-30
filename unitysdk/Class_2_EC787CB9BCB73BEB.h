#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::GameCore { class StartEffectAim; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC787CB9BCB73BEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198FBC30)
#define CLASS_2_EC787CB9BCB73BEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198FBC70)
#define CLASS_2_EC787CB9BCB73BEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198FC080)
#define CLASS_2_EC787CB9BCB73BEB_TICK_OFFSET UNITYSDK_OFFSET(0x198FC0D0)
#define CLASS_2_EC787CB9BCB73BEB__CTOR_OFFSET UNITYSDK_OFFSET(0x198FBC20)

inline static constexpr unsigned int Class_2_EC787CB9BCB73BEB_TypeDefinitionIndex = 55853;

class Class_2_EC787CB9BCB73BEB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_D27BF54F25500E5F* BICMFAKJPCI; // 0x18
	::UnityEngine::Transform* LPEOHKHOLEP; // 0x20
	::RPG::GameCore::StartEffectAim* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
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
