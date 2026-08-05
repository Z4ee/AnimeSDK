#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_8CC859447F33469F_Enum_3_0F0F55A61BF5F171.h"
#include "unitysdk/Class_3_8CC859447F33469F_Enum_3_26C7E5CD34264387.h"
#include "unitysdk/Class_3_8CC859447F33469F_Enum_3_DD167275934A9846.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole::Level { class LevelConfig_SceneMoveElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_8CC859447F33469F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14E9DF00)
#define CLASS_3_8CC859447F33469F_METHOD_3_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x14E9E170)
#define CLASS_3_8CC859447F33469F_METHOD_3_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x14E9E2B0)
#define CLASS_3_8CC859447F33469F_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14E9E110)
#define CLASS_3_8CC859447F33469F_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x14E9E050)
#define CLASS_3_8CC859447F33469F_METHOD_3_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x14E9E1D0)
#define CLASS_3_8CC859447F33469F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14E9E310)
#define CLASS_3_8CC859447F33469F_METHOD_3_B3ACB3B875A11E64_OFFSET UNITYSDK_OFFSET(0x14E9E3A0)
#define CLASS_3_8CC859447F33469F_METHOD_3_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x14E9E410)
#define CLASS_3_8CC859447F33469F_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14E9E040)
#define CLASS_3_8CC859447F33469F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14E9DD90)
#define CLASS_3_8CC859447F33469F__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E9DF50)
#define CLASS_3_8CC859447F33469F__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9DFE0)

inline static constexpr unsigned int Class_3_8CC859447F33469F_TypeDefinitionIndex = 52419;

class Class_3_8CC859447F33469F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8CC859447F33469F_TypeDefinitionIndex)->GetStaticField(0xFF40);
	}
	// static const ::System::Int32 Field_3_21 = 0x60; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_4; // 0x48
	::UnityEngine::GameObject* Field_3_1; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_7; // 0x58
	::System::String* Field_3_2; // 0x60
	::MoleMole::Level::LevelConfig_SceneMoveElement* Field_3_0; // 0x68
	::System::Int32 Field_3_23; // 0x70
	::System::Single Field_3_18; // 0x74
	::System::Single Field_3_9; // 0x78
	::System::Int32 Field_3_6; // 0x7C
	::System::Single Field_3_12; // 0x80
	::UnityEngine::Vector3 Field_3_10; // 0x84
	::Class_3_8CC859447F33469F_Enum_3_0F0F55A61BF5F171 Field_3_13; // 0x90
	::Class_3_8CC859447F33469F_Enum_3_26C7E5CD34264387 Field_3_15; // 0x94
	::System::Single Field_3_17; // 0x98
	::Class_3_8CC859447F33469F_Enum_3_DD167275934A9846 Field_3_14; // 0x9C
	::System::Single Field_3_11; // 0xA0
	::UnityEngine::Vector3 Field_3_8; // 0xA4
	::System::Single Field_3_16; // 0xB0
	::System::UInt32 Field_3_5; // 0xB4
	::System::Single Field_3_19; // 0xB8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_3_8CC859447F33469F* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_8CC859447F33469F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_1D4018D4200358D0_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_B3ACB3B875A11E64(::MoleMole::MonoSceneMoveObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoSceneMoveObject*))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_B3ACB3B875A11E64_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC859447F33469F_METHOD_3_BF972395CC722BF9_OFFSET))(this);
	}
};
