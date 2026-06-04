#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_EE082513A4283E14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136EC550)
#define CLASS_1_EE082513A4283E14_METHOD_1_89AD049B94B0938D_OFFSET UNITYSDK_OFFSET(0x136EC670)
#define CLASS_1_EE082513A4283E14_METHOD_1_C1186FA6CD230006_OFFSET UNITYSDK_OFFSET(0x136EC590)
#define CLASS_1_EE082513A4283E14__CTOR_OFFSET UNITYSDK_OFFSET(0x136EC540)

inline static constexpr unsigned int Class_1_EE082513A4283E14_TypeDefinitionIndex = 71400;

class Class_1_EE082513A4283E14 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_1_B4357A1C72BABC6B* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_EE082513A4283E14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE082513A4283E14_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C1186FA6CD230006(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EE082513A4283E14_METHOD_1_C1186FA6CD230006_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89AD049B94B0938D(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE082513A4283E14_METHOD_1_89AD049B94B0938D_OFFSET))(this, a1, a2);
	}
};
