#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B46798A9584868B1_Struct_2_AB49E166385563AB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class PhysicMaterial; }

#define CLASS_1_B46798A9584868B1_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x14164590)
#define CLASS_1_B46798A9584868B1_METHOD_1_4181217681EC94BE_OFFSET UNITYSDK_OFFSET(0x14164AF0)
#define CLASS_1_B46798A9584868B1_METHOD_1_8764DB0032F02686_1_OFFSET UNITYSDK_OFFSET(0x14164EA0)
#define CLASS_1_B46798A9584868B1_METHOD_1_8764DB0032F02686_OFFSET UNITYSDK_OFFSET(0x14164200)
#define CLASS_1_B46798A9584868B1_METHOD_1_9CD90D96D55440C5_OFFSET UNITYSDK_OFFSET(0x14164450)
#define CLASS_1_B46798A9584868B1_METHOD_1_A8A120D74F03B74E_1_OFFSET UNITYSDK_OFFSET(0x141651C0)
#define CLASS_1_B46798A9584868B1_METHOD_1_A8A120D74F03B74E_OFFSET UNITYSDK_OFFSET(0x141650F0)
#define CLASS_1_B46798A9584868B1_METHOD_1_CE7A9FD89D7F3201_OFFSET UNITYSDK_OFFSET(0x14164710)
#define CLASS_1_B46798A9584868B1__CTOR_OFFSET UNITYSDK_OFFSET(0x14164050)

inline static constexpr unsigned int Class_1_B46798A9584868B1_TypeDefinitionIndex = 42882;

class Class_1_B46798A9584868B1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x10
	::UnityEngine::PhysicMaterial* Field_1_4; // 0x18
	::UnityEngine::PhysicMaterial* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B46798A9584868B1_Struct_2_AB49E166385563AB>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B46798A9584868B1_Struct_2_AB49E166385563AB>* Field_1_5; // 0x38
	::System::Single Field_1_2; // 0x40
	::UnityEngine::PhysicMaterialCombine Field_1_0; // 0x44
	::System::Single Field_1_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8764DB0032F02686(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::PhysicMaterialCombine a4, ::System::String* a5, ::UnityEngine::Collider* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::PhysicMaterialCombine, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_8764DB0032F02686_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_9CD90D96D55440C5(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_9CD90D96D55440C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE7A9FD89D7F3201(::Class_1_B46798A9584868B1_Struct_2_AB49E166385563AB a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B46798A9584868B1_Struct_2_AB49E166385563AB, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_CE7A9FD89D7F3201_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8764DB0032F02686_1(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::PhysicMaterialCombine a4, ::System::String* a5, ::UnityEngine::Collider* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::PhysicMaterialCombine, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_8764DB0032F02686_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_A8A120D74F03B74E(::System::String* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_A8A120D74F03B74E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8A120D74F03B74E_1(::System::String* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_A8A120D74F03B74E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4181217681EC94BE(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_B46798A9584868B1_METHOD_1_4181217681EC94BE_OFFSET))(this, a1);
	}
};
