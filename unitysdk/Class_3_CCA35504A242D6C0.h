#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_DB663931210BBC27_33.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_61A5922E5046F385_5;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CCA35504A242D6C0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x135346C0)
#define CLASS_3_CCA35504A242D6C0_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13534BB0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15C57A70)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_0A88EAAFBBCC4828_OFFSET UNITYSDK_OFFSET(0x15C55920)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_0B45825EEBBF6F19_1_OFFSET UNITYSDK_OFFSET(0x15C59650)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_0B45825EEBBF6F19_OFFSET UNITYSDK_OFFSET(0x15C57E30)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_0D4F876C6378E7D2_OFFSET UNITYSDK_OFFSET(0x15C597B0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_0F27ED4CF248AA7D_OFFSET UNITYSDK_OFFSET(0x15C534A0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_1FBC14D0160E2885_OFFSET UNITYSDK_OFFSET(0x15C52EF0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_24DFAB99D90FBB96_OFFSET UNITYSDK_OFFSET(0x15C52250)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_2D29786083082CB2_OFFSET UNITYSDK_OFFSET(0x15C59B50)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_3110E4E8F534D28F_OFFSET UNITYSDK_OFFSET(0x15C544A0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_3122A00EEA747F1A_OFFSET UNITYSDK_OFFSET(0x15C523F0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_348DC003C1172927_OFFSET UNITYSDK_OFFSET(0x15C592F0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_379D4B587D2281FE_OFFSET UNITYSDK_OFFSET(0x15C557E0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_3F2A0F7DFB35CA3A_OFFSET UNITYSDK_OFFSET(0x15C55450)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_40B82EDC642125F3_OFFSET UNITYSDK_OFFSET(0x15C59F10)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_4432610D68CF9AC2_OFFSET UNITYSDK_OFFSET(0x15C542C0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_460EA2652D11B056_OFFSET UNITYSDK_OFFSET(0x13535F40)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_47564A66AF29EFE0_OFFSET UNITYSDK_OFFSET(0x15C58DC0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_511757A27A4921DB_OFFSET UNITYSDK_OFFSET(0x13535E00)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_58E936FCD5C57601_OFFSET UNITYSDK_OFFSET(0x15C57910)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_5F80284C5E378C5A_OFFSET UNITYSDK_OFFSET(0x15C581B0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_60F0855BA2D29662_OFFSET UNITYSDK_OFFSET(0x15C532C0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_7BAE2D9BA9FBFDC3_OFFSET UNITYSDK_OFFSET(0x13534F20)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_7D043231C1C7F8FA_OFFSET UNITYSDK_OFFSET(0x15C5A240)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_7D4E2AEB37B88CD7_OFFSET UNITYSDK_OFFSET(0x135366F0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_80E9D0B82F6D8261_OFFSET UNITYSDK_OFFSET(0x15C56180)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_86DBC40E78750406_OFFSET UNITYSDK_OFFSET(0x13534D40)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_89BAEFE98AE475D0_OFFSET UNITYSDK_OFFSET(0x135351E0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_8B16D90B6B7EF1F3_OFFSET UNITYSDK_OFFSET(0x15C547E0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_945661E9A8DC5BCA_OFFSET UNITYSDK_OFFSET(0x15C57F90)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_96BC71B2295A154A_OFFSET UNITYSDK_OFFSET(0x15C520B0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0x15C59DA0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15C594F0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_ABE2DC27049547D4_OFFSET UNITYSDK_OFFSET(0x15C52A80)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x15C54530)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_AEF5743AF0613131_OFFSET UNITYSDK_OFFSET(0x15C55150)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_B2BB1576EDCDCBA6_OFFSET UNITYSDK_OFFSET(0x15C589F0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x13535BA0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_B7DB61F3798B9EAB_OFFSET UNITYSDK_OFFSET(0x135357C0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15C550C0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_BFF62419F7790817_OFFSET UNITYSDK_OFFSET(0x15C53070)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15C58AA0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135363F0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_D12C875D541B5E4F_OFFSET UNITYSDK_OFFSET(0x13536230)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_D548922DE1A9BCDE_OFFSET UNITYSDK_OFFSET(0x15C58B30)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_DBB0CBEBC6215F6E_OFFSET UNITYSDK_OFFSET(0x13536480)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_E1E64DDBDFB57722_OFFSET UNITYSDK_OFFSET(0x15C54930)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_E23557679B03B8F7_OFFSET UNITYSDK_OFFSET(0x15C549C0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_E4F922BC98988130_OFFSET UNITYSDK_OFFSET(0x13534E20)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x15C53A60)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_F098C4EC951B3DB9_OFFSET UNITYSDK_OFFSET(0x15C52990)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x15C52D00)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_FB7329283E17717D_OFFSET UNITYSDK_OFFSET(0x15C54BA0)
#define CLASS_3_CCA35504A242D6C0_METHOD_3_FD59872B9D0E7651_OFFSET UNITYSDK_OFFSET(0x15C54D70)
#define CLASS_3_CCA35504A242D6C0_UPDATE_OFFSET UNITYSDK_OFFSET(0x13534B20)
#define CLASS_3_CCA35504A242D6C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x13534CD0)
#define CLASS_3_CCA35504A242D6C0__CTOR_OFFSET UNITYSDK_OFFSET(0x13534C80)

inline static constexpr unsigned int Class_3_CCA35504A242D6C0_TypeDefinitionIndex = 77507;

class Class_3_CCA35504A242D6C0 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CCA35504A242D6C0_TypeDefinitionIndex)->GetStaticField(0x4C860);
	}
	static ::System::Action** StaticGet_Field_3_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CCA35504A242D6C0_TypeDefinitionIndex)->GetStaticField(0x4C868);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_86DBC40E78750406(::Class_3_61A5922E5046F385_5* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_86DBC40E78750406_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E4F922BC98988130(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_E4F922BC98988130_OFFSET))(a1);
	}

	static ::System::Void Method_3_7BAE2D9BA9FBFDC3(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_7BAE2D9BA9FBFDC3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_89BAEFE98AE475D0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_89BAEFE98AE475D0_OFFSET))(a1);
	}

	static ::System::Void Method_3_B7DB61F3798B9EAB(::MoleMole::Config::BuddyTeamType a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_B7DB61F3798B9EAB_OFFSET))(a1);
	}

	static ::System::Void Method_3_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_B2C52ACF9D9B435B_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_3_511757A27A4921DB(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_511757A27A4921DB_OFFSET))(a1);
	}

	static ::System::Void Method_3_460EA2652D11B056(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_460EA2652D11B056_OFFSET))(a1);
	}

	static ::System::Void Method_3_D12C875D541B5E4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_D12C875D541B5E4F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_DBB0CBEBC6215F6E(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_DBB0CBEBC6215F6E_OFFSET))(a1);
	}

	static ::System::Void Method_3_7D4E2AEB37B88CD7(::Enum_3_DB663931210BBC27_33 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_33, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_7D4E2AEB37B88CD7_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::Entity* Method_3_96BC71B2295A154A()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_96BC71B2295A154A_OFFSET))();
	}

	static ::System::Void Method_3_24DFAB99D90FBB96(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_24DFAB99D90FBB96_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_F098C4EC951B3DB9(::Class_3_61A5922E5046F385_5* a1, ::Enum_3_DB663931210BBC27_33 a2)
	{
		return ((::System::Boolean(*)(::Class_3_61A5922E5046F385_5*, ::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_F098C4EC951B3DB9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_ABE2DC27049547D4(::Class_3_61A5922E5046F385_5* a1, ::Enum_3_DB663931210BBC27_33 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Class_3_61A5922E5046F385_5*, ::Enum_3_DB663931210BBC27_33, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_ABE2DC27049547D4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_F4F1E7D1CC26024A_OFFSET))(a1);
	}

	static ::MoleMole::Config::BuddyBehaviourType Method_3_BFF62419F7790817(::Enum_3_DB663931210BBC27_33 a1, ::MoleMole::Config::BuddyBehaviourType a2)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::Enum_3_DB663931210BBC27_33, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_BFF62419F7790817_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_E6D3C4C666E119D9_OFFSET))();
	}

	static ::System::Void Method_3_0F27ED4CF248AA7D(::Enum_3_DB663931210BBC27_33 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_33, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_0F27ED4CF248AA7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_AE0B725AB77F7E6F_OFFSET))();
	}

	static ::System::Boolean Method_3_E1E64DDBDFB57722(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_E1E64DDBDFB57722_OFFSET))(a1);
	}

	static ::System::Void Method_3_E23557679B03B8F7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_E23557679B03B8F7_OFFSET))(a1);
	}

	static ::System::Void Method_3_FB7329283E17717D(::Class_3_61A5922E5046F385_5* a1, ::Nap::NapECS::EcsEntity* a2)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_FB7329283E17717D_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigPosRot* Method_3_FD59872B9D0E7651(::Class_3_61A5922E5046F385_5* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::Class_3_61A5922E5046F385_5*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_FD59872B9D0E7651_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_AEF5743AF0613131(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_AEF5743AF0613131_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::BuddyBehaviourType Method_3_60F0855BA2D29662(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_60F0855BA2D29662_OFFSET))(a1);
	}

	static ::System::Void Method_3_3F2A0F7DFB35CA3A(::MoleMole::Config::BuddyTeamType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_3F2A0F7DFB35CA3A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_1FBC14D0160E2885(::Enum_3_DB663931210BBC27_33 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_33, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_1FBC14D0160E2885_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_379D4B587D2281FE(::Class_3_61A5922E5046F385_5* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_379D4B587D2281FE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_0A88EAAFBBCC4828(::Class_3_61A5922E5046F385_5* a1, ::Nap::NapECS::EcsEntity* a2, ::Nap::NapECS::EcsEntity* a3)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385_5*, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_0A88EAAFBBCC4828_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_58E936FCD5C57601(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_58E936FCD5C57601_OFFSET))(a1);
	}

	static ::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_0865E94460F11643_OFFSET))();
	}

	static ::System::Void Method_3_0B45825EEBBF6F19(::MoleMole::Battle::AnimatorParamControl* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::AnimatorParamControl*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_0B45825EEBBF6F19_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_4432610D68CF9AC2(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_4432610D68CF9AC2_OFFSET))(a1);
	}

	static ::System::Void Method_3_80E9D0B82F6D8261(::MoleMole::Config::ConfigPosRot* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean& a3, ::UnityEngine::Vector3& a4, ::System::Single& a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigPosRot*, ::MoleMole::Battle::Entity*, ::System::Boolean&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_80E9D0B82F6D8261_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_3_B2BB1576EDCDCBA6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_B2BB1576EDCDCBA6_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_3122A00EEA747F1A(::Class_3_61A5922E5046F385_5* a1, ::Enum_3_DB663931210BBC27_33 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Class_3_61A5922E5046F385_5*, ::Enum_3_DB663931210BBC27_33, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_3122A00EEA747F1A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D548922DE1A9BCDE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_D548922DE1A9BCDE_OFFSET))(a1);
	}

	static ::MoleMole::Config::BuddyBehaviourType Method_3_348DC003C1172927(::Enum_3_DB663931210BBC27_33 a1, ::MoleMole::Config::BuddyBehaviourType a2)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::Enum_3_DB663931210BBC27_33, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_348DC003C1172927_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_97D83E4CB3B11935_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_3_5F80284C5E378C5A(::Struct_2_FA5F50563E60AFBA a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_FA5F50563E60AFBA, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_5F80284C5E378C5A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_945661E9A8DC5BCA(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_945661E9A8DC5BCA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_3110E4E8F534D28F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_3110E4E8F534D28F_OFFSET))(a1);
	}

	static ::System::Void Method_3_0B45825EEBBF6F19_1(::MoleMole::Battle::AnimatorParamControl* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::AnimatorParamControl*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_0B45825EEBBF6F19_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_0D4F876C6378E7D2(::MoleMole::Config::BuddyTeamType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_0D4F876C6378E7D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_47564A66AF29EFE0(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_47564A66AF29EFE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D29786083082CB2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::ConfigPosRot* a3, ::Struct_2_FA5F50563E60AFBA a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*, ::Struct_2_FA5F50563E60AFBA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_2D29786083082CB2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_97D83E4CB3B11935_1_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_3_8B16D90B6B7EF1F3()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_8B16D90B6B7EF1F3_OFFSET))();
	}

	static ::System::Void Method_3_40B82EDC642125F3(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_40B82EDC642125F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7D043231C1C7F8FA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_METHOD_3_7D043231C1C7F8FA_OFFSET))(a1);
	}
};
