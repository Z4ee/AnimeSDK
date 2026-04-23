#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1CFC9E4D786ED583;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F1D8F9A07FABFA52;
namespace RPG::GameCore { class FiveDimEvilSmileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_09515A60A00C43B1_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F8F4D0)
#define CLASS_1_09515A60A00C43B1_METHOD_1_00DA02550831206D_OFFSET UNITYSDK_OFFSET(0x8F8B360)
#define CLASS_1_09515A60A00C43B1_METHOD_1_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0x8F92900)
#define CLASS_1_09515A60A00C43B1_METHOD_1_3692E694B9403D74_OFFSET UNITYSDK_OFFSET(0x8F918B0)
#define CLASS_1_09515A60A00C43B1_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x8F8F990)
#define CLASS_1_09515A60A00C43B1_METHOD_1_7073B423B15F467A_OFFSET UNITYSDK_OFFSET(0x8F8FB20)
#define CLASS_1_09515A60A00C43B1_METHOD_1_8E54C5F17525B373_OFFSET UNITYSDK_OFFSET(0x8F92310)
#define CLASS_1_09515A60A00C43B1_METHOD_1_8FBCC2FDB4845840_OFFSET UNITYSDK_OFFSET(0x8F90570)
#define CLASS_1_09515A60A00C43B1_METHOD_1_924E4FC7247F133C_OFFSET UNITYSDK_OFFSET(0x8F90720)
#define CLASS_1_09515A60A00C43B1_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x8F8F820)
#define CLASS_1_09515A60A00C43B1_METHOD_1_9977B44348F4EF99_OFFSET UNITYSDK_OFFSET(0x8F8F6B0)
#define CLASS_1_09515A60A00C43B1_METHOD_1_9BDEDA02DF7DB938_OFFSET UNITYSDK_OFFSET(0x8F8F780)
#define CLASS_1_09515A60A00C43B1_METHOD_1_A245D3BB98FBA0E2_OFFSET UNITYSDK_OFFSET(0x8F903E0)
#define CLASS_1_09515A60A00C43B1_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x8F8F3A0)
#define CLASS_1_09515A60A00C43B1_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x8F8FAB0)
#define CLASS_1_09515A60A00C43B1_METHOD_1_C902BC7DB7C79824_OFFSET UNITYSDK_OFFSET(0x8F8F520)
#define CLASS_1_09515A60A00C43B1_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x8F8AF10)
#define CLASS_1_09515A60A00C43B1_METHOD_1_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x8F92740)
#define CLASS_1_09515A60A00C43B1_METHOD_1_DF4A3B8481FEB8BF_OFFSET UNITYSDK_OFFSET(0x8F8F320)
#define CLASS_1_09515A60A00C43B1_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x8F8B230)
#define CLASS_1_09515A60A00C43B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F92B20)
#define CLASS_1_09515A60A00C43B1__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8B2E0)

inline static constexpr unsigned int Class_1_09515A60A00C43B1_TypeDefinitionIndex = 70802;

class Class_1_09515A60A00C43B1 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_11()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09515A60A00C43B1_TypeDefinitionIndex)->GetStaticField(0x17010);
	}
	static ::System::String** StaticGet_Field_1_13()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09515A60A00C43B1_TypeDefinitionIndex)->GetStaticField(0x17018);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09515A60A00C43B1_TypeDefinitionIndex)->GetStaticField(0x17020);
	}
	static ::System::Single* StaticGet_Field_1_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_09515A60A00C43B1_TypeDefinitionIndex)->GetStaticField(0x6500);
	}
	::Il2CppArray<::System::Boolean>* Field_1_9; // 0x10
	::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* Field_1_8; // 0x18
	::Class_2_1CFC9E4D786ED583* Field_1_1; // 0x20
	::RPG::GameCore::FloatCurve* Field_1_4; // 0x28
	::RPG::GameCore::FiveDimEvilSmileState Field_1_0; // 0x30
	::System::Single Field_1_3; // 0x34
	::System::Single Field_1_2; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Single Field_1_5; // 0x40
	::System::Single Field_1_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DF4A3B8481FEB8BF(::Class_2_1CFC9E4D786ED583* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1CFC9E4D786ED583*))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_DF4A3B8481FEB8BF_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_1_9BDEDA02DF7DB938(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_9BDEDA02DF7DB938_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_1_00DA02550831206D(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_00DA02550831206D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Void Method_1_7073B423B15F467A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_7073B423B15F467A_OFFSET))(this);
	}

	::System::Void Method_1_3692E694B9403D74(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_3692E694B9403D74_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_924E4FC7247F133C(::Class_2_F1D8F9A07FABFA52* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F1D8F9A07FABFA52*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_924E4FC7247F133C_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam* Method_1_8FBCC2FDB4845840()
	{
		return ((::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_8FBCC2FDB4845840_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileMoveConfig* Method_1_C902BC7DB7C79824()
	{
		return ((::RPG::GameCore::FiveDimEvilSmileMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_C902BC7DB7C79824_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig* Method_1_9977B44348F4EF99()
	{
		return ((::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_9977B44348F4EF99_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_8E54C5F17525B373()
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_8E54C5F17525B373_OFFSET))(this);
	}

	::System::Boolean Method_1_A245D3BB98FBA0E2(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_A245D3BB98FBA0E2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_D58849E1895DD394_OFFSET))(this);
	}

	::System::Boolean Method_1_1ADC5E4C222F6999()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09515A60A00C43B1_METHOD_1_1ADC5E4C222F6999_OFFSET))(this);
	}
};
