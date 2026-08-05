#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDCD1259222B5A4A.h"
#include "unitysdk/Class_2_10A9F99BCFBAF496_Struct_2_E7B322677315A924.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_237;
class Class_1_F0DD91CF91C3B169;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_10A9F99BCFBAF496_METHOD_2_1968CFB403DDD566_OFFSET UNITYSDK_OFFSET(0xF0FC360)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_295DED65211771F6_OFFSET UNITYSDK_OFFSET(0xF0FAEE0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_2A0F641337364AF8_OFFSET UNITYSDK_OFFSET(0xF0F6DD0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_41EC3FF6D2A88C47_OFFSET UNITYSDK_OFFSET(0xF0FA6C0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0xF0FC340)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_4EF13288EFAF3AF5_OFFSET UNITYSDK_OFFSET(0xF0FA590)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_53183C7EF76DDD45_OFFSET UNITYSDK_OFFSET(0xF0F66C0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_546A9C793D154C35_OFFSET UNITYSDK_OFFSET(0xF0F5AE0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_5A3943A9FA8BC985_OFFSET UNITYSDK_OFFSET(0xF0F91F0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_7B5E25A21E2E3B54_OFFSET UNITYSDK_OFFSET(0xF0FBB20)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0xF0F8C00)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_7DB49B5407C8FD68_2_OFFSET UNITYSDK_OFFSET(0xF0FC230)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xF0F8AF0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_88667086FB91B538_OFFSET UNITYSDK_OFFSET(0xF0F6070)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xF0FAFB0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_9C28AB5455C09876_OFFSET UNITYSDK_OFFSET(0xF0F8E00)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0xF0F84E0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_AE80CBC984AADFD5_1_OFFSET UNITYSDK_OFFSET(0xF0F7B00)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xF0F9730)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xF0F5E90)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_B29205EE7F7B640C_1_OFFSET UNITYSDK_OFFSET(0xF0FB1B0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0xF0F7350)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_BD14406E6DD81325_OFFSET UNITYSDK_OFFSET(0xF0F8F40)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xF0F9630)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_C24E7841E1CE0E0C_OFFSET UNITYSDK_OFFSET(0xF0F8990)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xF0F6E30)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF0F96F0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xF0FAD90)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xF0F8CA0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xF0F8DE0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xF0F82F0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_E57D6F9393F28D86_OFFSET UNITYSDK_OFFSET(0xF0FACF0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_F4C9A7CAA07A217B_OFFSET UNITYSDK_OFFSET(0xF0F61A0)
#define CLASS_2_10A9F99BCFBAF496_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xF0F8DC0)
#define CLASS_2_10A9F99BCFBAF496__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0F5E70)
#define CLASS_2_10A9F99BCFBAF496__CTOR_OFFSET UNITYSDK_OFFSET(0xF0F5C10)

inline static constexpr unsigned int Class_2_10A9F99BCFBAF496_TypeDefinitionIndex = 66485;

class Class_2_10A9F99BCFBAF496 : public ::Class_1_BDCD1259222B5A4A
{
public:
	static ::System::Random** StaticGet_Field_2_35()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_2_10A9F99BCFBAF496_TypeDefinitionIndex)->GetStaticField(0x51650);
	}
	static ::System::Single* StaticGet_Field_2_29()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_10A9F99BCFBAF496_TypeDefinitionIndex)->GetStaticField(0x12BF0);
	}
	static ::System::Single* StaticGet_Field_2_30()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_10A9F99BCFBAF496_TypeDefinitionIndex)->GetStaticField(0x12BF4);
	}
	static ::MoleMole::SuperDebug_LogModule* StaticGet_Field_2_28()
	{
		return (::MoleMole::SuperDebug_LogModule*)Il2CppClass::FromTypeDefinitionIndex(Class_2_10A9F99BCFBAF496_TypeDefinitionIndex)->GetStaticField(0x12BF8);
	}
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* Field_2_4; // 0x28
	::Class_1_F0DD91CF91C3B169* Field_2_1; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_12; // 0x38
	::System::Collections::Generic::List_1<::Class_2_10A9F99BCFBAF496_Struct_2_E7B322677315A924>* Field_2_8; // 0x40
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_25; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* Field_2_9; // 0x50
	::UnityEngine::Transform* Field_2_19; // 0x58
	::MoleMole::Battle::ScratchConfigObject* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>* Field_2_11; // 0x68
	::MoleMole::Battle::Entity* Field_2_6; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_10; // 0x78
	::Class_3_D6DA183EF60F02C8* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_17; // 0x88
	::UnityEngine::Transform* Field_2_18; // 0x90
	::UnityEngine::Vector3 Field_2_23; // 0x98
	::UnityEngine::Vector3 Field_2_20; // 0xA4
	::System::Boolean Field_2_14; // 0xB0
	::UnityEngine::Vector3 Field_2_26; // 0xB4
	::System::Int32 Field_2_21; // 0xC0
	::MoleMole::Config::AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus Field_2_13; // 0xC4
	::System::Single Field_2_22; // 0xC8
	::System::Int32 Field_2_15; // 0xCC
	::UnityEngine::Color Field_2_24; // 0xD0
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis Field_2_16; // 0xE0
	::System::Int32 Field_2_31; // 0xE4
	::MoleMole::Config::DamageDecalData Field_2_7; // 0xE8
	::UnityEngine::Vector3 Field_2_27; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496__CCTOR_OFFSET))();
	}

	::System::Void Method_2_546A9C793D154C35(::Class_0_16E4307DCC419505_237* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_237*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_546A9C793D154C35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_F4C9A7CAA07A217B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Boolean& a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_F4C9A7CAA07A217B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2A0F641337364AF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_2A0F641337364AF8_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_9F59C088ACADFAC2_OFFSET))(this);
	}

	::System::Void Method_2_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_B29205EE7F7B640C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C24E7841E1CE0E0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_C24E7841E1CE0E0C_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9C28AB5455C09876(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_9C28AB5455C09876_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BD14406E6DD81325(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_BD14406E6DD81325_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_53183C7EF76DDD45(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_53183C7EF76DDD45_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_2_88667086FB91B538()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_88667086FB91B538_OFFSET))(this);
	}

	::System::Void Method_2_E57D6F9393F28D86(::Class_0_16E4307DCC419505_237* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_237*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_E57D6F9393F28D86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DB49B5407C8FD68_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_7DB49B5407C8FD68_1_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_AE80CBC984AADFD5_1_OFFSET))(this);
	}

	::System::Void Method_2_295DED65211771F6(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_295DED65211771F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B29205EE7F7B640C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_B29205EE7F7B640C_1_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_4EF13288EFAF3AF5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_4EF13288EFAF3AF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_7DB49B5407C8FD68_2_OFFSET))(this);
	}

	::System::Boolean Method_2_7B5E25A21E2E3B54(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_7B5E25A21E2E3B54_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_5A3943A9FA8BC985()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_5A3943A9FA8BC985_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1968CFB403DDD566(::UnityEngine::RaycastHit& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_1968CFB403DDD566_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41EC3FF6D2A88C47(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_METHOD_2_41EC3FF6D2A88C47_OFFSET))(this, a1);
	}
};
