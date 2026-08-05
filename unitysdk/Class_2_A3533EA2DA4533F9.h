#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_66C4D81440373C6E.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Share/EAvatarShowWeaponType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_554;
class Class_1_9B8A28A306558B7F;
class Class_2_208CC9941471731A_1180;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A3533EA2DA4533F9_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x12C5DF30)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_170CF903159859AC_OFFSET UNITYSDK_OFFSET(0x12C5CD30)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_1D065A14809E5137_OFFSET UNITYSDK_OFFSET(0x12C5BBE0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x12C5AAF0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x12C5D500)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x12C5C4D0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_353A4E54F191747F_OFFSET UNITYSDK_OFFSET(0x12C5B270)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_364C5CDCE9C19E6D_OFFSET UNITYSDK_OFFSET(0x12C5B720)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x12C5A810)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_3C65129DBE06D3B5_OFFSET UNITYSDK_OFFSET(0x12C5D510)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_4BAA8431768C8B75_OFFSET UNITYSDK_OFFSET(0x12C5A860)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_52DC2E7AB7EF9D49_OFFSET UNITYSDK_OFFSET(0x12C5B360)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_533036CDB46B48A7_OFFSET UNITYSDK_OFFSET(0x12C5AB00)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x12C5A600)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_A410E9CD4815D0F8_OFFSET UNITYSDK_OFFSET(0x12C5BC70)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x12C5D1D0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x12C5AAA0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_B9C5B6CC0A9CD372_OFFSET UNITYSDK_OFFSET(0x12C5B6B0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x12C5A7C0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_FBA72F0074614BE6_OFFSET UNITYSDK_OFFSET(0x12C5DCB0)
#define CLASS_2_A3533EA2DA4533F9_METHOD_2_FE7C9A201877F33E_OFFSET UNITYSDK_OFFSET(0x12C5C990)
#define CLASS_2_A3533EA2DA4533F9__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5A8C0)

inline static constexpr unsigned int Class_2_A3533EA2DA4533F9_TypeDefinitionIndex = 69558;

class Class_2_A3533EA2DA4533F9 : public ::Class_1_66C4D81440373C6E
{
public:
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Field_2_5; // 0xE8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0xF0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0xF8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_4; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0x108
	::Struct_2_6042AC018BEA22C9 Field_2_3; // 0x110
	::Struct_2_6042AC018BEA22C9_1 Field_2_6; // 0x11C
	::Struct_2_6042AC018BEA22C9_1 Field_2_7; // 0x128
	::Share::EAvatarShowWeaponType Field_2_11; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_4BAA8431768C8B75(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_4BAA8431768C8B75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_533036CDB46B48A7(::System::Byte a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_533036CDB46B48A7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Method_2_52DC2E7AB7EF9D49(::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_52DC2E7AB7EF9D49_OFFSET))(this, a1);
	}

	::MoleMole::InLevelAvatarDataItem* Method_2_B9C5B6CC0A9CD372()
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_B9C5B6CC0A9CD372_OFFSET))(this);
	}

	::System::Void Method_2_364C5CDCE9C19E6D(::System::Int32 a1, ::MoleMole::Config::PropertyModifyFunction a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_364C5CDCE9C19E6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A410E9CD4815D0F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_A410E9CD4815D0F8_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	static ::Class_2_208CC9941471731A_1180* Method_2_353A4E54F191747F(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1180*>* a1, ::System::Byte a2)
	{
		return ((::Class_2_208CC9941471731A_1180*(*)(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1180*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_353A4E54F191747F_OFFSET))(a1, a2);
	}

	::System::Void Method_2_FE7C9A201877F33E(::System::Int32 a1, ::MoleMole::Config::PropertyModifyFunction a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_FE7C9A201877F33E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_A94BAB85685275CB_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_1D065A14809E5137(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_1D065A14809E5137_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_3C65129DBE06D3B5(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a9, ::Enum_3_65BB655811A73E3A a10, ::MoleMole::Config::CampType a11, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a12, ::System::Collections::Generic::HashSet_1<::System::String*>* a13, ::System::Collections::Generic::HashSet_1<::System::Int32>* a14, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a15, ::Class_0_16E4307DCC419505_554* a16, ::Share::EAvatarShowWeaponType a17, ::System::Int32 a18, ::System::Collections::Generic::List_1<::System::Int32>* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::Enum_3_65BB655811A73E3A, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_554*, ::Share::EAvatarShowWeaponType, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_3C65129DBE06D3B5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::System::Int32 Method_2_170CF903159859AC(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_170CF903159859AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBA72F0074614BE6(::System::Int32 a1, ::MoleMole::Config::PropertyModifyFunction a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_FBA72F0074614BE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3533EA2DA4533F9_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}
};
