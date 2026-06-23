#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D840400A176259F3_Struct_2_3C3E20133D21B794.h"
#include "unitysdk/Class_1_D840400A176259F3_Struct_2_EE378F408834D807.h"
#include "unitysdk/Enum_3_3836B6CAAF62D294.h"
#include "unitysdk/Enum_3_4FB4BBF8DD771DEE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_573;
namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D840400A176259F3_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xFB2A4E0)
#define CLASS_1_D840400A176259F3_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xFB2A4D0)
#define CLASS_1_D840400A176259F3_METHOD_1_3937EDA9E58FAFBE_OFFSET UNITYSDK_OFFSET(0xFB2AE80)
#define CLASS_1_D840400A176259F3_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xFB2AAD0)
#define CLASS_1_D840400A176259F3_METHOD_1_775B6D644F07B554_1_OFFSET UNITYSDK_OFFSET(0xFB2A700)
#define CLASS_1_D840400A176259F3_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xFB2AC90)
#define CLASS_1_D840400A176259F3_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0xFB2A570)
#define CLASS_1_D840400A176259F3_METHOD_1_AFEAEC897F17AD94_OFFSET UNITYSDK_OFFSET(0xFB2A930)
#define CLASS_1_D840400A176259F3_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0xFB2A870)
#define CLASS_1_D840400A176259F3_METHOD_1_E0C935AE223B555F_OFFSET UNITYSDK_OFFSET(0xFB2ADB0)
#define CLASS_1_D840400A176259F3_METHOD_1_E2030E810407E26B_OFFSET UNITYSDK_OFFSET(0xFB2A810)
#define CLASS_1_D840400A176259F3_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xFB2A5C0)
#define CLASS_1_D840400A176259F3__CTOR_OFFSET UNITYSDK_OFFSET(0xFB2A4F0)

inline static constexpr unsigned int Class_1_D840400A176259F3_TypeDefinitionIndex = 59384;

class Class_1_D840400A176259F3 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D840400A176259F3_TypeDefinitionIndex)->GetStaticField(0xE430);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D840400A176259F3_TypeDefinitionIndex)->GetStaticField(0xE43C);
	}
	// static const ::System::Int32 Field_1_20 = 0x4; // 0x0
	::System::String* Field_1_1; // 0x10
	::MoleMole::SceneSoundPolygonData* Field_1_10; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20
	::Class_0_16E4307DCC419505_573* Field_1_5; // 0x28
	::Il2CppArray<::Class_1_D840400A176259F3_Struct_2_3C3E20133D21B794>* Field_1_18; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>* Field_1_16; // 0x38
	::MoleMole::SceneSoundPolygonData* Field_1_9; // 0x40
	::UnityEngine::Vector3 Field_1_15; // 0x48
	::System::Int32 Field_1_2; // 0x54
	::System::Single Field_1_12; // 0x58
	::System::Single Field_1_11; // 0x5C
	::Enum_3_3836B6CAAF62D294 Field_1_8; // 0x60
	::System::Boolean Field_1_4; // 0x64
	::System::Boolean Field_1_13; // 0x65
	::System::Int32 Field_1_19; // 0x68
	::System::Int32 Field_1_17; // 0x6C
	::System::Single Field_1_22; // 0x70
	::Enum_3_4FB4BBF8DD771DEE Field_1_3; // 0x74
	::UnityEngine::Vector3 Field_1_14; // 0x78
	::Class_1_D840400A176259F3_Struct_2_EE378F408834D807 Field_1_21; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E2030E810407E26B(::Enum_3_3836B6CAAF62D294 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_3836B6CAAF62D294))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_E2030E810407E26B_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_1_AFEAEC897F17AD94(::Class_1_D840400A176259F3_Struct_2_EE378F408834D807 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3_Struct_2_EE378F408834D807))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_AFEAEC897F17AD94_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_E0C935AE223B555F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_E0C935AE223B555F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::Class_1_D840400A176259F3_Struct_2_EE378F408834D807 Method_1_3937EDA9E58FAFBE()
	{
		return ((::Class_1_D840400A176259F3_Struct_2_EE378F408834D807(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_3937EDA9E58FAFBE_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D840400A176259F3_METHOD_1_775B6D644F07B554_1_OFFSET))(this);
	}
};
