#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FireProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8E8C7C5B6729CCDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BD1760)
#define CLASS_2_8E8C7C5B6729CCDF_METHOD_2_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x16BD2180)
#define CLASS_2_8E8C7C5B6729CCDF_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0x16BD2220)
#define CLASS_2_8E8C7C5B6729CCDF_METHOD_2_FB1FD36A48C835B6_OFFSET UNITYSDK_OFFSET(0x16BD1EE0)
#define CLASS_2_8E8C7C5B6729CCDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BD1830)
#define CLASS_2_8E8C7C5B6729CCDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16BD2080)
#define CLASS_2_8E8C7C5B6729CCDF_TICK_OFFSET UNITYSDK_OFFSET(0x16BD20D0)
#define CLASS_2_8E8C7C5B6729CCDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD1610)

inline static constexpr unsigned int Class_2_8E8C7C5B6729CCDF_TypeDefinitionIndex = 52576;

class Class_2_8E8C7C5B6729CCDF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_1_0AD6129525BF5F86* Field_2_2; // 0x28
	::RPG::GameCore::FireProjectileBase* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FB1FD36A48C835B6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_2B8E0B4950FE44E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_METHOD_2_FB1FD36A48C835B6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24D4EB641B41AC50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_METHOD_2_24D4EB641B41AC50_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_8E8C7C5B6729CCDF_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}
};
