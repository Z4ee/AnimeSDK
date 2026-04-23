#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1F7B5F5E8BAE0D03;
class Class_1_EAB32D6999AE04E3;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CreateSharedSummonUnit; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53530E149B3EF08A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1257D920)
#define CLASS_2_53530E149B3EF08A_METHOD_2_84B92802FDAFF6C8_1_OFFSET UNITYSDK_OFFSET(0x1257F560)
#define CLASS_2_53530E149B3EF08A_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1257F370)
#define CLASS_2_53530E149B3EF08A_METHOD_2_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x1257DA10)
#define CLASS_2_53530E149B3EF08A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1257F750)
#define CLASS_2_53530E149B3EF08A_METHOD_2_DD012CB646E0D464_OFFSET UNITYSDK_OFFSET(0x1257EBB0)
#define CLASS_2_53530E149B3EF08A_METHOD_2_E0F3A7E0D78CF15F_OFFSET UNITYSDK_OFFSET(0x1257E2D0)
#define CLASS_2_53530E149B3EF08A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1257DC60)
#define CLASS_2_53530E149B3EF08A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1257F170)
#define CLASS_2_53530E149B3EF08A_TICK_OFFSET UNITYSDK_OFFSET(0x1257F1C0)
#define CLASS_2_53530E149B3EF08A__CTOR_OFFSET UNITYSDK_OFFSET(0x1257D730)

inline static constexpr unsigned int Class_2_53530E149B3EF08A_TypeDefinitionIndex = 53545;

class Class_2_53530E149B3EF08A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x30
	::RPG::GameCore::CreateSharedSummonUnit* Field_2_1; // 0x38
	::Class_1_1F7B5F5E8BAE0D03* Field_2_6; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateSharedSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateSharedSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_METHOD_2_8E9E3E0D1D6E6E24_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_METHOD_2_84B92802FDAFF6C8_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_DD012CB646E0D464(::System::UInt32 a1, ::Class_1_EAB32D6999AE04E3* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::Class_1_EAB32D6999AE04E3*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_METHOD_2_DD012CB646E0D464_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_E0F3A7E0D78CF15F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_53530E149B3EF08A_METHOD_2_E0F3A7E0D78CF15F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
