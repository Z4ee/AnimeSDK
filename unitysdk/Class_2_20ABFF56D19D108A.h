#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E6C4BA4C142021B7.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
class Class_1_BA25C773E88BA4BE;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_20ABFF56D19D108A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB13A750)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0xB13B250)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_0D926A533E72C276_OFFSET UNITYSDK_OFFSET(0xB13AD40)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB13B040)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB13CEA0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_298236AC333160E8_OFFSET UNITYSDK_OFFSET(0xB13C5F0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_2D1808F981B590D0_OFFSET UNITYSDK_OFFSET(0xB13C320)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0xB13BC90)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_4D331AADF765164C_OFFSET UNITYSDK_OFFSET(0xB13CFE0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0xB13C6A0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xB13CF00)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0xB13D2C0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_73AD9AEDA223EE7A_OFFSET UNITYSDK_OFFSET(0xB13CDD0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_7705572F57D6D875_OFFSET UNITYSDK_OFFSET(0xB13D040)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xB13ACC0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xB13B2B0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8D34CF21F7480E9E_OFFSET UNITYSDK_OFFSET(0xB13D370)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_8E2613C0147FD640_OFFSET UNITYSDK_OFFSET(0xB13B6A0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0xB13C120)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xB13D420)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_B650CDF375474809_OFFSET UNITYSDK_OFFSET(0xB13BC30)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C25F3A2B844157D6_OFFSET UNITYSDK_OFFSET(0xB13A8C0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xB13B4E0)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_CFF9781BB86D620B_OFFSET UNITYSDK_OFFSET(0xB13B720)
#define CLASS_2_20ABFF56D19D108A_METHOD_2_D6C225F121F56344_OFFSET UNITYSDK_OFFSET(0xB13B5E0)
#define CLASS_2_20ABFF56D19D108A__CTOR_OFFSET UNITYSDK_OFFSET(0xB13A570)

inline static constexpr unsigned int Class_2_20ABFF56D19D108A_TypeDefinitionIndex = 52418;

class Class_2_20ABFF56D19D108A : public ::Class_1_E6C4BA4C142021B7
{
public:
	// static const ::System::Single LKAEFBPDAOK; // 0x0
	// static const ::System::Single EHAINJOGBOK; // 0x0
	// static const ::System::Single MDADNEIJOLA; // 0x0
	::Class_3_07C3C4D2990C49EE* EBBKDAJNAMB; // 0x80
	::Class_1_BA25C773E88BA4BE* GBLEMMBAAOK; // 0x88
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x90
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x98
	::Class_1_60475C2D4D583319* ODOBKOAKMGM; // 0xA0
	::Class_3_07C3C4D2990C49EE* DDCOIPBBDBI; // 0xA8
	::System::Single OOICFICLKPE; // 0xB0
	::System::Single NBMKNIFMFIB; // 0xB4
	::System::Single BFNINLGKEHN; // 0xB8
	::System::Single JLGNJIMCEPG; // 0xBC
	::System::Single DLMEFFBDKBB; // 0xC0
	::System::Single GNJKJOMEEJB; // 0xC4
	::System::Single FBFOOIDNKNA; // 0xC8
	::System::Single JBNGIAEHMND; // 0xCC
	::System::Single DAMFJPJLCEF; // 0xD0
	::System::Single JJGEDNHDMAH; // 0xD4
	::System::Single LBJLKNOOGGF; // 0xD8
	::System::Boolean HOGFGIIHHAG; // 0xDC
	::System::Boolean HPJLMNGLALJ; // 0xDD
	::UnityEngine::Vector3 BEDPGAOCOHG; // 0xE0
	::System::Single MABJPDHJBGE; // 0xEC
	::System::Single JFFFBCJCNPP; // 0xF0
	::UnityEngine::Vector3 FAOLMGNBGMN; // 0xF4
	::System::Single IOCCMMJIDGH; // 0x100

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C25F3A2B844157D6(::RPG::GameCore::AdvancedFollowType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Il2CppArray<::System::Int32>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Single a16, ::System::Single a17)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C25F3A2B844157D6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_2_0D926A533E72C276(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_0D926A533E72C276_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_8E2613C0147FD640(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8E2613C0147FD640_OFFSET))(this, a1);
	}

	::System::Void Method_2_B650CDF375474809(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_B650CDF375474809_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D6C225F121F56344(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_D6C225F121F56344_OFFSET))(this, a1);
	}

	::System::Void Method_2_298236AC333160E8(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_298236AC333160E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFF9781BB86D620B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_CFF9781BB86D620B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_4D331AADF765164C(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_4D331AADF765164C_OFFSET))(this, a1);
	}

	::System::Void Method_2_73AD9AEDA223EE7A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_73AD9AEDA223EE7A_OFFSET))(this, a1);
	}

	::System::Single Method_2_7705572F57D6D875(::RPG::GameCore::CharacterMotionFlag a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_7705572F57D6D875_OFFSET))(this, a1);
	}

	::System::Void Method_2_099C229CF1BB9083()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_099C229CF1BB9083_OFFSET))(this);
	}

	::System::Void Method_2_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_5C3494A3B250FBC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D34CF21F7480E9E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_8D34CF21F7480E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2D1808F981B590D0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_2D1808F981B590D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20ABFF56D19D108A_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}
};
