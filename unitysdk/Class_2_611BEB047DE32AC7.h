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

#define CLASS_2_611BEB047DE32AC7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B17F00)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_26F48F58F6BD506B_OFFSET UNITYSDK_OFFSET(0x15B186E0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_2EE93BDDD6929CC8_OFFSET UNITYSDK_OFFSET(0x15B19180)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15B18BF0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_54A3A1873A18C8E1_OFFSET UNITYSDK_OFFSET(0x15B18070)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_68E340ABEC62FD31_OFFSET UNITYSDK_OFFSET(0x15B19E20)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x15B19DD0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x15B18D10)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x15B18510)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x15B18880)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x15B187B0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x15B18B20)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_BDD7DFBE8A8EA673_OFFSET UNITYSDK_OFFSET(0x15B19330)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_CD139383155DF56E_OFFSET UNITYSDK_OFFSET(0x15B18E30)
#define CLASS_2_611BEB047DE32AC7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B198A0)
#define CLASS_2_611BEB047DE32AC7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B19B10)
#define CLASS_2_611BEB047DE32AC7_TICK_OFFSET UNITYSDK_OFFSET(0x15B197B0)
#define CLASS_2_611BEB047DE32AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x15B17860)

inline static constexpr unsigned int Class_2_611BEB047DE32AC7_TypeDefinitionIndex = 52682;

class Class_2_611BEB047DE32AC7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcFollowByPlayer* JKJPFJALGKO; // 0x18
	::Class_1_5F51D4049EA87B7B* JNAAOJJFJHI; // 0x20
	::Class_2_A0580152EB393340* CHNABOMLFMO; // 0x28
	::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* CKALFKGGEPM; // 0x30
	::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x38
	::Class_2_19E76B515E7B257C* JKPAMKHNCBN; // 0x40
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
	::Class_1_5F51D4049EA87B7B* JMBFMDOBFJE; // 0x50
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x58
	::System::Single EEAEHHJPOIL; // 0x60
	::System::Int32 BEOFGPKDDGJ; // 0x64
	::System::Single DLMEFFBDKBB; // 0x68
	::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x6C
	::System::Single IEDMPHCHODJ; // 0x70
	::System::Single HOHLBDNNHKE; // 0x74
	::System::Single NBMBPGBLNGN; // 0x78
	::System::Boolean IKNBGPDODBM; // 0x7C
	::System::Boolean EMOGMDLNEFE; // 0x7D
	::System::Single EDHLMPMOKJN; // 0x80
	::RPG::GameCore::NpcFollowByPlayerState AHHDNBGBIJC; // 0x84

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
