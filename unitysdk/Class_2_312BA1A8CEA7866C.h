#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CharacterChangeModel; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_312BA1A8CEA7866C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13960980)
#define CLASS_2_312BA1A8CEA7866C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x139609F0)
#define CLASS_2_312BA1A8CEA7866C_METHOD_2_C0FBE2EB5AC963BC_OFFSET UNITYSDK_OFFSET(0x13960B60)
#define CLASS_2_312BA1A8CEA7866C_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x13961780)
#define CLASS_2_312BA1A8CEA7866C_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x139616E0)
#define CLASS_2_312BA1A8CEA7866C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13960B10)
#define CLASS_2_312BA1A8CEA7866C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139615D0)
#define CLASS_2_312BA1A8CEA7866C_TICK_OFFSET UNITYSDK_OFFSET(0x13961620)
#define CLASS_2_312BA1A8CEA7866C_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x139617E0)
#define CLASS_2_312BA1A8CEA7866C__CTOR_OFFSET UNITYSDK_OFFSET(0x139608F0)

inline static constexpr unsigned int Class_2_312BA1A8CEA7866C_TypeDefinitionIndex = 51338;

class Class_2_312BA1A8CEA7866C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterChangeModel* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterChangeModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterChangeModel*))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0FBE2EB5AC963BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_METHOD_2_C0FBE2EB5AC963BC_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_312BA1A8CEA7866C_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}
};
