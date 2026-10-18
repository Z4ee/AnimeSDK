#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define CLASS_1_30140422EFA5C485_METHOD_1_2D1CACD03E1E1C5D_OFFSET UNITYSDK_OFFSET(0x11FE8330)
#define CLASS_1_30140422EFA5C485_METHOD_1_3292E228E823A047_OFFSET UNITYSDK_OFFSET(0x11FE89F0)
#define CLASS_1_30140422EFA5C485_METHOD_1_4F742642864998B7_OFFSET UNITYSDK_OFFSET(0x11FE9190)
#define CLASS_1_30140422EFA5C485_METHOD_1_5B0AAAC7D524B1DD_OFFSET UNITYSDK_OFFSET(0x11FE9220)
#define CLASS_1_30140422EFA5C485_METHOD_1_90AD883315D7823B_OFFSET UNITYSDK_OFFSET(0x11FE83A0)
#define CLASS_1_30140422EFA5C485_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x11FE82E0)
#define CLASS_1_30140422EFA5C485_METHOD_1_9F61B49E78609EA5_OFFSET UNITYSDK_OFFSET(0x11FE82A0)
#define CLASS_1_30140422EFA5C485_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x11FE8850)
#define CLASS_1_30140422EFA5C485_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x11FE8EA0)
#define CLASS_1_30140422EFA5C485__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FE96E0)
#define CLASS_1_30140422EFA5C485__CTOR_OFFSET UNITYSDK_OFFSET(0x11FE8060)

inline static constexpr unsigned int Class_1_30140422EFA5C485_TypeDefinitionIndex = 72560;

class Class_1_30140422EFA5C485 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CDHJKBKDBEC()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30140422EFA5C485_TypeDefinitionIndex)->GetStaticField(0x6F660);
	}
	::UnityEngine::Transform* NHJIMBADBEN; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* FEKNFHANPFB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>*>* BEHHICMOFIE; // 0x20
	::UnityEngine::UI::ScrollRect* DNGOBOCIMNC; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* HBMIEFPCNLK; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OGCDJMKECHP; // 0x38
	::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* NELHFBDKJFJ; // 0x40
	::UnityEngine::Transform* MJCCOGIFANB; // 0x48
	::System::Action_1<::UnityEngine::GameObject*>* MCKAFONACMF; // 0x50
	::System::Int32 GHPNCNFMMEH; // 0x58

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485__CCTOR_OFFSET))();
	}

	::UnityEngine::UI::ScrollRect* Method_1_9F61B49E78609EA5()
	{
		return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_9F61B49E78609EA5_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_2D1CACD03E1E1C5D(::System::Int32 a1, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* a2, ::System::Action_1<::UnityEngine::GameObject*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_2D1CACD03E1E1C5D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_90AD883315D7823B(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_90AD883315D7823B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_3292E228E823A047(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_3292E228E823A047_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_4F742642864998B7(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_4F742642864998B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0AAAC7D524B1DD(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_5B0AAAC7D524B1DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30140422EFA5C485_METHOD_1_BB2928BEC244DEB7_OFFSET))(this);
	}
};
