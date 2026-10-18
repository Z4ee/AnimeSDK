#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_732;
namespace RPG::GameCore { class AdventureAttackDetectCircleConfig; }
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_60447C5FED0696D8_METHOD_1_05727442EF521470_OFFSET UNITYSDK_OFFSET(0x15D1AD60)
#define CLASS_1_60447C5FED0696D8_METHOD_1_28F3AF2D57193AC1_OFFSET UNITYSDK_OFFSET(0x15D19C50)
#define CLASS_1_60447C5FED0696D8_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15D19D00)
#define CLASS_1_60447C5FED0696D8_METHOD_1_4645188E8F6073E0_OFFSET UNITYSDK_OFFSET(0x15D1A650)
#define CLASS_1_60447C5FED0696D8_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x15D1AF60)
#define CLASS_1_60447C5FED0696D8_METHOD_1_6D61B03F6C5C99F0_OFFSET UNITYSDK_OFFSET(0x15D19DC0)
#define CLASS_1_60447C5FED0696D8_METHOD_1_9083CB1DF3ADEC4C_OFFSET UNITYSDK_OFFSET(0x15D1AFE0)
#define CLASS_1_60447C5FED0696D8_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x15D1B250)
#define CLASS_1_60447C5FED0696D8_METHOD_1_BC671189DA5F905B_OFFSET UNITYSDK_OFFSET(0x15D1A300)
#define CLASS_1_60447C5FED0696D8_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x15D19AD0)
#define CLASS_1_60447C5FED0696D8_METHOD_1_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x15D19B50)
#define CLASS_1_60447C5FED0696D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D1B400)

inline static constexpr unsigned int Class_1_60447C5FED0696D8_TypeDefinitionIndex = 59020;

class Class_1_60447C5FED0696D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_732*>** StaticGet_KKHALCLJGNJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_732*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60447C5FED0696D8_TypeDefinitionIndex)->GetStaticField(0x21AD0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_PDMOHLIKPCI()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60447C5FED0696D8_TypeDefinitionIndex)->GetStaticField(0x21AD8);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_732*>** StaticGet_AMBOGOJCOBA()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_732*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60447C5FED0696D8_TypeDefinitionIndex)->GetStaticField(0x21AE0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_JEINNGHENIM()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60447C5FED0696D8_TypeDefinitionIndex)->GetStaticField(0x21AE8);
	}
	// static const ::System::Single CDCBGBAPKGO; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_732* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_732*))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_EF7FF4D68C8A0DF5_OFFSET))(a1);
	}

	static ::System::Void Method_1_28F3AF2D57193AC1(::Class_0_16E4307DCC419505_732* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_732*))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_28F3AF2D57193AC1_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_6D61B03F6C5C99F0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_6D61B03F6C5C99F0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_05727442EF521470(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_05727442EF521470_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BC671189DA5F905B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_BC671189DA5F905B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4645188E8F6073E0(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::RPG::GameCore::AdventureAttackDetectCircleConfig* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::AdventureAttackDetectCircleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_4645188E8F6073E0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_9083CB1DF3ADEC4C(::UnityEngine::Collider* a1, ::Class_0_16E4307DCC419505_732*& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_732*&))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_9083CB1DF3ADEC4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_A3C36642AA77866E_OFFSET))();
	}

	static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60447C5FED0696D8_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
	}
};
