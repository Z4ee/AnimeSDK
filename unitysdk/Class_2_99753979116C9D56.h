#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FireWaveProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_99753979116C9D56_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140C8F00)
#define CLASS_2_99753979116C9D56_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0x140C97F0)
#define CLASS_2_99753979116C9D56_METHOD_2_9880DF46770746EC_OFFSET UNITYSDK_OFFSET(0x140C9620)
#define CLASS_2_99753979116C9D56_METHOD_2_C9F3BA2E2E582B6B_OFFSET UNITYSDK_OFFSET(0x140C9170)
#define CLASS_2_99753979116C9D56_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x140C8FD0)
#define CLASS_2_99753979116C9D56_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x140C95D0)
#define CLASS_2_99753979116C9D56_TICK_OFFSET UNITYSDK_OFFSET(0x140C9470)
#define CLASS_2_99753979116C9D56__CTOR_OFFSET UNITYSDK_OFFSET(0x140C8D00)

inline static constexpr unsigned int Class_2_99753979116C9D56_TypeDefinitionIndex = 52577;

class Class_2_99753979116C9D56 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FireWaveProjectileBase* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Int32 Field_2_7; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C9F3BA2E2E582B6B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_METHOD_2_C9F3BA2E2E582B6B_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_2_9880DF46770746EC(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_METHOD_2_9880DF46770746EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_99753979116C9D56_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}
};
