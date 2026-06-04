#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C1D1D7E172034A6;
namespace RPG::GameCore { class EntityLodLoadingData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13C97200)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_55D86343A23F57E8_OFFSET UNITYSDK_OFFSET(0x13C96190)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x13C96E10)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_719C91AA066BB16B_OFFSET UNITYSDK_OFFSET(0x13C96DC0)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x13C96860)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13C96D30)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x13C96B40)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x13C962B0)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_B965CEE892F95FE3_OFFSET UNITYSDK_OFFSET(0x13C96970)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_D05F37F7E5D1C36C_OFFSET UNITYSDK_OFFSET(0x13C97030)
#define CLASS_1_2DE6E652B33A5FF1_METHOD_1_FA013307F30F3628_OFFSET UNITYSDK_OFFSET(0x13C966A0)
#define CLASS_1_2DE6E652B33A5FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C97260)

inline static constexpr unsigned int Class_1_2DE6E652B33A5FF1_TypeDefinitionIndex = 53544;

class Class_1_2DE6E652B33A5FF1 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_3C1D1D7E172034A6*>* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_3C1D1D7E172034A6*>* Field_1_4; // 0x30
	::System::Action_3<::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* Field_1_5; // 0x38
	::RPG::GameCore::EntityLodLoadingData* Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_55D86343A23F57E8(::RPG::GameCore::EntityLodLoadingData* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodLoadingData*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_55D86343A23F57E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FA013307F30F3628(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_FA013307F30F3628_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B965CEE892F95FE3(::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_B965CEE892F95FE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_719C91AA066BB16B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_719C91AA066BB16B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_1_D05F37F7E5D1C36C(::Class_1_3C1D1D7E172034A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C1D1D7E172034A6*))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_D05F37F7E5D1C36C_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DE6E652B33A5FF1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
