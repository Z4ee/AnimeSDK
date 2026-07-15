#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NpcFollowByPlayerState.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNpcFollowByPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_611BEB047DE32AC7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1625FD90)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_26F48F58F6BD506B_OFFSET UNITYSDK_OFFSET(0x16260570)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_2EE93BDDD6929CC8_OFFSET UNITYSDK_OFFSET(0x16261020)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16260A90)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_54A3A1873A18C8E1_OFFSET UNITYSDK_OFFSET(0x1625FF00)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_68E340ABEC62FD31_OFFSET UNITYSDK_OFFSET(0x16261CC0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16261C70)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x16260BB0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x162603A0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x16260710)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x16260640)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x162609C0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_BDD7DFBE8A8EA673_OFFSET UNITYSDK_OFFSET(0x162611D0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_CD139383155DF56E_OFFSET UNITYSDK_OFFSET(0x16260CD0)
#define CLASS_2_611BEB047DE32AC7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16261740)
#define CLASS_2_611BEB047DE32AC7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162619B0)
#define CLASS_2_611BEB047DE32AC7_TICK_OFFSET UNITYSDK_OFFSET(0x16261650)
#define CLASS_2_611BEB047DE32AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1625F6F0)

inline static constexpr unsigned int Class_2_611BEB047DE32AC7_TypeDefinitionIndex = 50021;

class Class_2_611BEB047DE32AC7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::Class_2_A0580152EB393340* Field_2_2; // 0x28
	::Class_2_19E76B515E7B257C* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x38
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x40
	::RPG::GameCore::AdventureCharacterController* Field_2_6; // 0x48
	::RPG::GameCore::TaskContext* Field_2_7; // 0x50
	::RPG::GameCore::AdvNpcFollowByPlayer* Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x60
	::System::Single Field_2_10; // 0x64
	::RPG::GameCore::NpcFollowByPlayerState Field_2_11; // 0x68
	::System::Single Field_2_12; // 0x6C
	::System::Single Field_2_13; // 0x70
	::RPG::GameCore::CharacterMotionFlag Field_2_14; // 0x74
	::System::Boolean Field_2_15; // 0x78
	::System::Boolean Field_2_16; // 0x79
	::System::Single Field_2_17; // 0x7C
	::System::Single Field_2_18; // 0x80
	::System::Int32 Field_2_19; // 0x84

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFollowByPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFollowByPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_54A3A1873A18C8E1(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_54A3A1873A18C8E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D8EF9AD3B13BD0E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_CD139383155DF56E(::System::Single a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_CD139383155DF56E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2EE93BDDD6929CC8(::System::Single a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_2EE93BDDD6929CC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_68E340ABEC62FD31(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_68E340ABEC62FD31_OFFSET))(this, a1);
	}

	::System::Single Method_2_26F48F58F6BD506B(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_26F48F58F6BD506B_OFFSET))(this, a1);
	}

	::System::Void Method_2_BDD7DFBE8A8EA673(::System::Single a1, ::RPG::GameCore::TransformComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_BDD7DFBE8A8EA673_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}
};
