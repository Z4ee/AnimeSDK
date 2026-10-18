#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NpcFollowByPlayerState.h"

class Class_2_8DC3A13A939A9841;
class Class_2_ED5B635C4D775055;
namespace RPG::GameCore { class AdvNpcFollowByPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_611BEB047DE32AC7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E32F30)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_26F48F58F6BD506B_OFFSET UNITYSDK_OFFSET(0x15E33720)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_2EE93BDDD6929CC8_OFFSET UNITYSDK_OFFSET(0x15E341C0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E33C30)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_54A3A1873A18C8E1_OFFSET UNITYSDK_OFFSET(0x15E330A0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_68E340ABEC62FD31_OFFSET UNITYSDK_OFFSET(0x15E34E60)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x15E34E10)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x15E33D50)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x15E33550)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x15E338B0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x15E337F0)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x15E33B60)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_BDD7DFBE8A8EA673_OFFSET UNITYSDK_OFFSET(0x15E34370)
#define CLASS_2_611BEB047DE32AC7_METHOD_2_CD139383155DF56E_OFFSET UNITYSDK_OFFSET(0x15E33E70)
#define CLASS_2_611BEB047DE32AC7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E348E0)
#define CLASS_2_611BEB047DE32AC7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E34B50)
#define CLASS_2_611BEB047DE32AC7_TICK_OFFSET UNITYSDK_OFFSET(0x15E347F0)
#define CLASS_2_611BEB047DE32AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x15E32890)

inline static constexpr unsigned int Class_2_611BEB047DE32AC7_TypeDefinitionIndex = 52407;

class Class_2_611BEB047DE32AC7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
	::Class_1_5F51D4049EA87B7B* JNAAOJJFJHI; // 0x20
	::Class_2_ED5B635C4D775055* CHNABOMLFMO; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_2_8DC3A13A939A9841* JKPAMKHNCBN; // 0x38
	::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* CKALFKGGEPM; // 0x40
	::Class_1_5F51D4049EA87B7B* JMBFMDOBFJE; // 0x48
	::RPG::GameCore::AdvNpcFollowByPlayer* JKJPFJALGKO; // 0x50
	::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x58
	::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x60
	::System::Boolean EMOGMDLNEFE; // 0x64
	::System::Boolean IKNBGPDODBM; // 0x65
	::System::Int32 BEOFGPKDDGJ; // 0x68
	::System::Single HOHLBDNNHKE; // 0x6C
	::System::Single IEDMPHCHODJ; // 0x70
	::System::Single DLMEFFBDKBB; // 0x74
	::System::Single EEAEHHJPOIL; // 0x78
	::System::Single NBMBPGBLNGN; // 0x7C
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
