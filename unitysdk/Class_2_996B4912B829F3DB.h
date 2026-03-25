#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireProjectile; }
namespace RPG::GameCore { class ChenLingBattleBulletMagicMissileExtraConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_996B4912B829F3DB_METHOD_2_03A9A4B529C6434A_OFFSET UNITYSDK_OFFSET(0x10A4CB40)
#define CLASS_2_996B4912B829F3DB_METHOD_2_25969A8D6E41113E_OFFSET UNITYSDK_OFFSET(0x10A4C520)
#define CLASS_2_996B4912B829F3DB_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10A4D740)
#define CLASS_2_996B4912B829F3DB_METHOD_2_3229E0D0AF43562E_OFFSET UNITYSDK_OFFSET(0x10A4C940)
#define CLASS_2_996B4912B829F3DB_METHOD_2_34DA009066A43F1C_OFFSET UNITYSDK_OFFSET(0x10A4D2B0)
#define CLASS_2_996B4912B829F3DB_METHOD_2_39A089B1D546CF0B_OFFSET UNITYSDK_OFFSET(0x10A4CF80)
#define CLASS_2_996B4912B829F3DB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10A4D7E0)
#define CLASS_2_996B4912B829F3DB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A4D840)
#define CLASS_2_996B4912B829F3DB_METHOD_2_8BC9FE590065E493_OFFSET UNITYSDK_OFFSET(0x10A4D140)
#define CLASS_2_996B4912B829F3DB_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x10A4BF40)
#define CLASS_2_996B4912B829F3DB_METHOD_2_C464AF79FD3D3F09_OFFSET UNITYSDK_OFFSET(0x10A4CEF0)
#define CLASS_2_996B4912B829F3DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A4D7A0)
#define CLASS_2_996B4912B829F3DB_METHOD_2_E6B4D8E9B33CB8DA_OFFSET UNITYSDK_OFFSET(0x10A4CFE0)
#define CLASS_2_996B4912B829F3DB__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4BEB0)

inline static constexpr unsigned int Class_2_996B4912B829F3DB_TypeDefinitionIndex = 63376;

class Class_2_996B4912B829F3DB : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_FireProjectile* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_C464AF79FD3D3F09(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_C464AF79FD3D3F09_OFFSET))(this, a1);
	}

	::System::Void Method_2_3229E0D0AF43562E(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Action_1<::Class_2_181A7F9409C60DBC*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::Action_1<::Class_2_181A7F9409C60DBC*>*))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_3229E0D0AF43562E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E6B4D8E9B33CB8DA(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_E6B4D8E9B33CB8DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_25969A8D6E41113E(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Action_1<::Class_2_181A7F9409C60DBC*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::Action_1<::Class_2_181A7F9409C60DBC*>*))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_25969A8D6E41113E_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Single>* Method_2_8BC9FE590065E493(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_8BC9FE590065E493_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_03A9A4B529C6434A(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Single a3, ::System::Action_1<::Class_2_181A7F9409C60DBC*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::Single, ::System::Action_1<::Class_2_181A7F9409C60DBC*>*))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_03A9A4B529C6434A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_34DA009066A43F1C(::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Single a3)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*, ::Class_2_181A7F9409C60DBC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_34DA009066A43F1C_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType Method_2_39A089B1D546CF0B(::RPG::GameCore::ChenLingBattleBulletType a1)
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBulletType))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_39A089B1D546CF0B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996B4912B829F3DB_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
