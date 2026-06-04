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

#define CLASS_2_E7D578EB5E9890D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CA33A0)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_26F48F58F6BD506B_OFFSET UNITYSDK_OFFSET(0x13CA38D0)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x13CA4C60)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13CA3D60)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_67B6484BDDE6464B_OFFSET UNITYSDK_OFFSET(0x13CA4290)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_68E340ABEC62FD31_OFFSET UNITYSDK_OFFSET(0x13CA4CB0)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_76EE480686474477_OFFSET UNITYSDK_OFFSET(0x13CA3FA0)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x13CA3E80)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0x13CA39A0)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x13CA3780)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x13CA3C90)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_EFDD2EF954C3FDB4_OFFSET UNITYSDK_OFFSET(0x13CA3440)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x13CA3A60)
#define CLASS_2_E7D578EB5E9890D5_METHOD_2_FA99051EF61C23DD_OFFSET UNITYSDK_OFFSET(0x13CA43D0)
#define CLASS_2_E7D578EB5E9890D5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CA48E0)
#define CLASS_2_E7D578EB5E9890D5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13CA4A70)
#define CLASS_2_E7D578EB5E9890D5_TICK_OFFSET UNITYSDK_OFFSET(0x13CA47F0)
#define CLASS_2_E7D578EB5E9890D5__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA2EA0)

inline static constexpr unsigned int Class_2_E7D578EB5E9890D5_TypeDefinitionIndex = 49008;

class Class_2_E7D578EB5E9890D5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_19E76B515E7B257C* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::Class_2_A0580152EB393340* Field_2_2; // 0x28
	::RPG::GameCore::AdvNpcFollowByPlayer* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x40
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x48
	::RPG::GameCore::AdventureCharacterController* Field_2_7; // 0x50
	::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x60
	::RPG::GameCore::CharacterMotionFlag Field_2_10; // 0x64
	::System::Int32 Field_2_11; // 0x68
	::System::Single Field_2_12; // 0x6C
	::System::Single Field_2_13; // 0x70
	::System::Single Field_2_14; // 0x74
	::System::Boolean Field_2_15; // 0x78
	::System::Boolean Field_2_16; // 0x79
	::System::Single Field_2_17; // 0x7C
	::System::Single Field_2_18; // 0x80
	::RPG::GameCore::NpcFollowByPlayerState Field_2_19; // 0x84

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFollowByPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFollowByPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EFDD2EF954C3FDB4(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_EFDD2EF954C3FDB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_9133398E73B9D974_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_76EE480686474477(::System::Single a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_76EE480686474477_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_67B6484BDDE6464B(::System::Single a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_67B6484BDDE6464B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_68E340ABEC62FD31(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_68E340ABEC62FD31_OFFSET))(this, a1);
	}

	::System::Single Method_2_26F48F58F6BD506B(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_26F48F58F6BD506B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA99051EF61C23DD(::System::Single a1, ::RPG::GameCore::TransformComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_FA99051EF61C23DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}
};
