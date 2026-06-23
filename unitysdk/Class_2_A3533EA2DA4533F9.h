#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_66C4D81440373C6E.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_498;
class Class_1_9B8A28A306558B7F;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A3533EA2DA4533F9_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0xF5B5D50)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_170CF903159859AC_OFFSET UNITYSDK_OFFSET(0xF5B5490)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0xF5B6DB0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xF5B51B0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_2791BA95B262E243_OFFSET UNITYSDK_OFFSET(0xF5B5250)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_283468E338F5B858_OFFSET UNITYSDK_OFFSET(0xF5B5DF0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xF5B5200)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_3C65129DBE06D3B5_OFFSET UNITYSDK_OFFSET(0xF5B6660)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xF5B6650)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_52DC2E7AB7EF9D49_OFFSET UNITYSDK_OFFSET(0xF5B5A00)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xF5B5000)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xF5B59B0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_B9C5B6CC0A9CD372_OFFSET UNITYSDK_OFFSET(0xF5B5940)
#define CLASS_2_A3533EA2DA4533F9__CTOR_OFFSET UNITYSDK_OFFSET(0xF5B52B0)

inline static constexpr unsigned int Class_2_A3533EA2DA4533F9_TypeDefinitionIndex = 53336;

class Class_2_A3533EA2DA4533F9 : public ::Class_1_66C4D81440373C6E
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_3; // 0xF0
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Field_2_6; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0x100
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x108
	::Struct_2_6042AC018BEA22C9_1 Field_2_4; // 0x110
	::Struct_2_6042AC018BEA22C9 Field_2_0; // 0x11C
	::Share::EAvatarShowWeaponType Field_2_8; // 0x128
	::Struct_2_6042AC018BEA22C9_1 Field_2_5; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_2791BA95B262E243(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_2791BA95B262E243_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_170CF903159859AC(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_170CF903159859AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Method_2_52DC2E7AB7EF9D49(::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_52DC2E7AB7EF9D49_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_283468E338F5B858()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_283468E338F5B858_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_3C65129DBE06D3B5(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a9, ::Enum_3_65BB655811A73E3A a10, ::MoleMole::Config::CampType a11, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a12, ::System::Collections::Generic::HashSet_1<::System::String*>* a13, ::System::Collections::Generic::HashSet_1<::System::Int32>* a14, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a15, ::Class_0_16E4307DCC419505_498* a16, ::Share::EAvatarShowWeaponType a17, ::System::Int32 a18, ::System::Collections::Generic::List_1<::System::Int32>* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::Enum_3_65BB655811A73E3A, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_498*, ::Share::EAvatarShowWeaponType, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_3C65129DBE06D3B5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::MoleMole::InLevelAvatarDataItem* Method_2_B9C5B6CC0A9CD372()
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_B9C5B6CC0A9CD372_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_218124418542E081_1_OFFSET))(this);
	}
};
