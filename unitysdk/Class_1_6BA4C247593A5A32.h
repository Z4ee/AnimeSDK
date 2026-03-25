#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_126;
class Class_1_6BA4C247593A5A32_Class_1_28A68C04C83E0C9F;
class Class_1_6BA4C247593A5A32_Class_1_F430351B57E59FB6_2;
class Class_1_ABD54481CEEF9667;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6BA4C247593A5A32_GET__CONTEXT_OFFSET UNITYSDK_OFFSET(0xF37F750)
#define CLASS_1_6BA4C247593A5A32_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xF37F790)
#define CLASS_1_6BA4C247593A5A32_GET__SERVICES_OFFSET UNITYSDK_OFFSET(0xF37F770)
#define CLASS_1_6BA4C247593A5A32_GET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0xF37F7B0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_0A3B90148BF9AF74_OFFSET UNITYSDK_OFFSET(0xF37F660)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xF37F510)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1ADC5E4C222F6999_1_OFFSET UNITYSDK_OFFSET(0xF37FEF0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0xF37FA50)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1DCFA72BF0403A61_OFFSET UNITYSDK_OFFSET(0xF387A90)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1E3DBAF5CED6F908_OFFSET UNITYSDK_OFFSET(0xF384890)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_1E5D842A629207ED_OFFSET UNITYSDK_OFFSET(0xF3844D0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0xF384440)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_3AAD4B5D0F6F1082_OFFSET UNITYSDK_OFFSET(0xF380190)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_40529B96F1C24600_OFFSET UNITYSDK_OFFSET(0xF382500)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_73CCCA4FA7AF7E23_OFFSET UNITYSDK_OFFSET(0xF383810)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_7662D15DAA271391_OFFSET UNITYSDK_OFFSET(0xF3890C0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_79DE8614F7DC76F7_OFFSET UNITYSDK_OFFSET(0xF3892E0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_10_OFFSET UNITYSDK_OFFSET(0xF384B30)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_11_OFFSET UNITYSDK_OFFSET(0xF384BC0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_12_OFFSET UNITYSDK_OFFSET(0xF384CF0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_13_OFFSET UNITYSDK_OFFSET(0xF384C50)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_1_OFFSET UNITYSDK_OFFSET(0xF389250)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_2_OFFSET UNITYSDK_OFFSET(0xF389610)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_3_OFFSET UNITYSDK_OFFSET(0xF385EC0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_4_OFFSET UNITYSDK_OFFSET(0xF388FA0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_5_OFFSET UNITYSDK_OFFSET(0xF389030)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_6_OFFSET UNITYSDK_OFFSET(0xF386950)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_7_OFFSET UNITYSDK_OFFSET(0xF384AA0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_8_OFFSET UNITYSDK_OFFSET(0xF3896A0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_9_OFFSET UNITYSDK_OFFSET(0xF3847F0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xF389580)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_906017439C6C218E_OFFSET UNITYSDK_OFFSET(0xF3821F0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_AC246EF5AE3640DE_OFFSET UNITYSDK_OFFSET(0xF3845A0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_AE36AF318C910B3D_OFFSET UNITYSDK_OFFSET(0xF3869E0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_B7E5F5B43A268964_OFFSET UNITYSDK_OFFSET(0xF385F50)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_C58793D9D6FBCA00_OFFSET UNITYSDK_OFFSET(0xF37FB10)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_C5A330FCA711D6B9_OFFSET UNITYSDK_OFFSET(0xF388CD0)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_DCAFADEDE35928D4_OFFSET UNITYSDK_OFFSET(0xF384D80)
#define CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xF37FE70)
#define CLASS_1_6BA4C247593A5A32_SET__CONTEXT_OFFSET UNITYSDK_OFFSET(0xF37F760)
#define CLASS_1_6BA4C247593A5A32_SET__OWNER_OFFSET UNITYSDK_OFFSET(0xF37F7A0)
#define CLASS_1_6BA4C247593A5A32_SET__SERVICES_OFFSET UNITYSDK_OFFSET(0xF37F780)
#define CLASS_1_6BA4C247593A5A32_SET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0xF37F7C0)
#define CLASS_1_6BA4C247593A5A32__CCTOR_OFFSET UNITYSDK_OFFSET(0xF37F7D0)
#define CLASS_1_6BA4C247593A5A32__CTOR_OFFSET UNITYSDK_OFFSET(0xF37F410)

inline static constexpr unsigned int Class_1_6BA4C247593A5A32_TypeDefinitionIndex = 63392;

class Class_1_6BA4C247593A5A32 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA4C247593A5A32_TypeDefinitionIndex)->GetStaticField(0x8370);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_28A68C04C83E0C9F*>** StaticGet_Field_1_12()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_28A68C04C83E0C9F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA4C247593A5A32_TypeDefinitionIndex)->GetStaticField(0x8378);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_F430351B57E59FB6_2*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6BA4C247593A5A32_Class_1_F430351B57E59FB6_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BA4C247593A5A32_TypeDefinitionIndex)->GetStaticField(0x8380);
	}
	// static const ::System::Int32 Field_1_4 = 0x10; // 0x0
	// static const ::System::Single Field_1_9; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	::Class_1_ABD54481CEEF9667* Field_1_13; // 0x10
	::Class_0_16E4307DCC419505_126* __StateMachine_k__BackingField; // 0x18
	::Class_2_181A7F9409C60DBC* __Owner_k__BackingField; // 0x20
	::Class_2_E9C9AAD7C711B3E3* __Context_k__BackingField; // 0x28
	::Il2CppArray<::System::Single>* Field_1_7; // 0x30
	::Il2CppArray<::System::Single>* Field_1_8; // 0x38
	::Class_3_543326C044264182* __Services_k__BackingField; // 0x40
	::Il2CppArray<::System::Single>* Field_1_6; // 0x48
	::System::Single Field_1_14; // 0x50

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2, ::Class_2_181A7F9409C60DBC* a3, ::Class_0_16E4307DCC419505_126* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*, ::Class_2_181A7F9409C60DBC*, ::Class_0_16E4307DCC419505_126*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_1_0A3B90148BF9AF74()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_0A3B90148BF9AF74_OFFSET))(this);
	}

	::Class_2_E9C9AAD7C711B3E3* get__Context()
	{
		return ((::Class_2_E9C9AAD7C711B3E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__CONTEXT_OFFSET))(this);
	}

	::System::Void set__Context(::Class_2_E9C9AAD7C711B3E3* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__CONTEXT_OFFSET))(this, value);
	}

	::Class_3_543326C044264182* get__Services()
	{
		return ((::Class_3_543326C044264182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__SERVICES_OFFSET))(this);
	}

	::System::Void set__Services(::Class_3_543326C044264182* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__SERVICES_OFFSET))(this, value);
	}

	::Class_2_181A7F9409C60DBC* get__Owner()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__OWNER_OFFSET))(this);
	}

	::System::Void set__Owner(::Class_2_181A7F9409C60DBC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__OWNER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_126* get__StateMachine()
	{
		return ((::Class_0_16E4307DCC419505_126*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_GET__STATEMACHINE_OFFSET))(this);
	}

	::System::Void set__StateMachine(::Class_0_16E4307DCC419505_126* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_126*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_SET__STATEMACHINE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1ADC5E4C222F6999()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1ADC5E4C222F6999_OFFSET))(this);
	}

	::System::Boolean Method_1_C58793D9D6FBCA00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_C58793D9D6FBCA00_OFFSET))(this);
	}

	::System::Boolean Method_1_1ADC5E4C222F6999_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1ADC5E4C222F6999_1_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3AAD4B5D0F6F1082(::Class_2_181A7F9409C60DBC* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_3AAD4B5D0F6F1082_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_1E3DBAF5CED6F908(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1E3DBAF5CED6F908_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E5D842A629207ED(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1E5D842A629207ED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC246EF5AE3640DE(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_AC246EF5AE3640DE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>* Method_1_40529B96F1C24600(::Class_2_181A7F9409C60DBC* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_40529B96F1C24600_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_906017439C6C218E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_906017439C6C218E_OFFSET))(this, a1);
	}

	::System::Void Method_1_73CCCA4FA7AF7E23(::Class_2_181A7F9409C60DBC* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_73CCCA4FA7AF7E23_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_DCAFADEDE35928D4(::Class_2_181A7F9409C60DBC* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_DCAFADEDE35928D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7E5F5B43A268964(::Class_2_181A7F9409C60DBC* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a4, ::Class_2_E9C9AAD7C711B3E3* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_B7E5F5B43A268964_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Quaternion Method_1_C5A330FCA711D6B9(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_C5A330FCA711D6B9_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_AE36AF318C910B3D(::Class_2_181A7F9409C60DBC* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a2, ::Class_2_E9C9AAD7C711B3E3* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_E9C9AAD7C711B3E3*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_AE36AF318C910B3D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_7662D15DAA271391(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_7662D15DAA271391_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_1DCFA72BF0403A61(::Class_2_181A7F9409C60DBC* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* a2, ::Class_2_E9C9AAD7C711B3E3* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>*, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_1DCFA72BF0403A61_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_79DE8614F7DC76F7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_79DE8614F7DC76F7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_1_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_2_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_3_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_4_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_5_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_6_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_7_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_8_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_9_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_10()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_10_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_11()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_11_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_12()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_12_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2_13()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA4C247593A5A32_METHOD_1_861970C5F2C21AB2_13_OFFSET))(this);
	}
};
