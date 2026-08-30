#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B76BCE1DE5BE597.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_0E71970AA11615D2_METHOD_4_0986E23AB72F8F9A_OFFSET UNITYSDK_OFFSET(0x1589FFD0)
#define CLASS_4_0E71970AA11615D2_METHOD_4_51C447A007739136_OFFSET UNITYSDK_OFFSET(0x158A04D0)
#define CLASS_4_0E71970AA11615D2_METHOD_4_5D908AB1FE0AD7F0_OFFSET UNITYSDK_OFFSET(0x158A00C0)
#define CLASS_4_0E71970AA11615D2_METHOD_4_664B011BC45034D7_OFFSET UNITYSDK_OFFSET(0x1589FF10)
#define CLASS_4_0E71970AA11615D2_METHOD_4_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x1589FF90)
#define CLASS_4_0E71970AA11615D2__CTOR_OFFSET UNITYSDK_OFFSET(0x158A0530)

inline static constexpr unsigned int Class_4_0E71970AA11615D2_TypeDefinitionIndex = 49912;

class Class_4_0E71970AA11615D2 : public ::Class_3_3B76BCE1DE5BE597<::UnityEngine::GameObject*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_4_664B011BC45034D7()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_664B011BC45034D7_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_4_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::String* Method_4_0986E23AB72F8F9A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_0986E23AB72F8F9A_OFFSET))(this);
	}

	::System::Void Method_4_5D908AB1FE0AD7F0(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_5D908AB1FE0AD7F0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_4_51C447A007739136(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_51C447A007739136_OFFSET))(this, a1, a2, a3);
	}
};
