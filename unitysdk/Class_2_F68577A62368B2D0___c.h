#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F68577A62368B2D0___C_METHOD_1_40229E55B18360C7_OFFSET UNITYSDK_OFFSET(0x145E38E0)
#define CLASS_2_F68577A62368B2D0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145E3890)
#define CLASS_2_F68577A62368B2D0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145E38D0)

inline static constexpr unsigned int Class_2_F68577A62368B2D0___c_TypeDefinitionIndex = 61630;

class Class_2_F68577A62368B2D0___c : public ::System::Object
{
public:
	static ::System::Action_1<::UnityEngine::RectTransform*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F68577A62368B2D0___c_TypeDefinitionIndex)->GetStaticField(0x39490);
	}
	static ::Class_2_F68577A62368B2D0___c** StaticGet___9()
	{
		return (::Class_2_F68577A62368B2D0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F68577A62368B2D0___c_TypeDefinitionIndex)->GetStaticField(0x39498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F68577A62368B2D0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F68577A62368B2D0___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_40229E55B18360C7(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_F68577A62368B2D0___C_METHOD_1_40229E55B18360C7_OFFSET))(this, a1);
	}
};
