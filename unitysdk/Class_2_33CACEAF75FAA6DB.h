#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_36006FC25F5DDC69;
class Class_1_87D6E24AEDA0242C;
class Class_1_B1C37B065CBC515F;
class Class_2_181A7F9409C60DBC;
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Split; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_3256783DC4A2ADF5_OFFSET UNITYSDK_OFFSET(0xDE52690)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_3463EEAF2913A5A3_OFFSET UNITYSDK_OFFSET(0xDE52350)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_3E3451FB7CD5402C_OFFSET UNITYSDK_OFFSET(0xDE517B0)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xDE52C60)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xDE51B80)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_9A431100DF90664F_OFFSET UNITYSDK_OFFSET(0xDE518F0)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_B72C0DD7ED2095CA_OFFSET UNITYSDK_OFFSET(0xDE520E0)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0xDE51180)
#define CLASS_2_33CACEAF75FAA6DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE52CE0)
#define CLASS_2_33CACEAF75FAA6DB__CTOR_OFFSET UNITYSDK_OFFSET(0xDE510F0)

inline static constexpr unsigned int Class_2_33CACEAF75FAA6DB_TypeDefinitionIndex = 63372;

class Class_2_33CACEAF75FAA6DB : public ::Class_1_F65B6F8790DF074B
{
public:
	::Class_1_B1C37B065CBC515F* Field_2_6; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_Split* Field_2_0; // 0x30
	::Class_1_87D6E24AEDA0242C* Field_2_7; // 0x38
	::RPG::Client::ChenLingBattleTeamSnapshot* Field_2_8; // 0x40
	::System::Single Field_2_12; // 0x48
	::System::Single Field_2_10; // 0x4C
	::UnityEngine::Vector3 Field_2_9; // 0x50
	::System::Single Field_2_5; // 0x5C
	::System::Int32 Field_2_2; // 0x60
	::UnityEngine::Quaternion Field_2_4; // 0x64
	::RPG::GameCore::FixPoint Field_2_1; // 0x78
	::UnityEngine::Vector3 Field_2_3; // 0x80
	::System::Boolean Field_2_11; // 0x8C

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_C83B2479936B63C3_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_2_3E3451FB7CD5402C()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_3E3451FB7CD5402C_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9A431100DF90664F(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_9A431100DF90664F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_B72C0DD7ED2095CA(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_B72C0DD7ED2095CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_3463EEAF2913A5A3(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_3463EEAF2913A5A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_3256783DC4A2ADF5(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_3256783DC4A2ADF5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CACEAF75FAA6DB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
