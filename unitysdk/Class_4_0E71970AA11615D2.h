#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B76BCE1DE5BE597.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_0E71970AA11615D2_METHOD_4_292F5DF952F180C0_OFFSET UNITYSDK_OFFSET(0x115D86B0)
#define CLASS_4_0E71970AA11615D2_METHOD_4_51C447A007739136_OFFSET UNITYSDK_OFFSET(0x115D8C10)
#define CLASS_4_0E71970AA11615D2_METHOD_4_6CCB93D1016E82CD_OFFSET UNITYSDK_OFFSET(0x115D8830)
#define CLASS_4_0E71970AA11615D2_METHOD_4_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x115D8770)
#define CLASS_4_0E71970AA11615D2_METHOD_4_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x115D8730)
#define CLASS_4_0E71970AA11615D2__CTOR_OFFSET UNITYSDK_OFFSET(0x115D8C70)

inline static constexpr unsigned int Class_4_0E71970AA11615D2_TypeDefinitionIndex = 40174;

class Class_4_0E71970AA11615D2 : public ::Class_3_3B76BCE1DE5BE597<::UnityEngine::GameObject*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_4_292F5DF952F180C0()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_292F5DF952F180C0_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_4_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::String* Method_4_9F2E2B246015406C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_9F2E2B246015406C_OFFSET))(this);
	}

	::System::Void Method_4_6CCB93D1016E82CD(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_6CCB93D1016E82CD_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_4_51C447A007739136(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0E71970AA11615D2_METHOD_4_51C447A007739136_OFFSET))(this, a1, a2, a3);
	}
};
