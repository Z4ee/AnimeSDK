#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x1585C980)
#define CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_E6EAA31670F1F088_OFFSET UNITYSDK_OFFSET(0x1585CB00)
#define CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x1585C5D0)
#define CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_F97479261056FE64_OFFSET UNITYSDK_OFFSET(0x1585CAD0)
#define CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28__CTOR_OFFSET UNITYSDK_OFFSET(0x1585C5C0)

inline static constexpr unsigned int Class_4_2B4CACAEF27FAB52_Class_1_1DFC535E84C58D28_TypeDefinitionIndex = 72736;

class Class_4_2B4CACAEF27FAB52_Class_1_1DFC535E84C58D28 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_4; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_7; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x58
	::System::String* Field_1_0; // 0x60
	::Class_1_07A210D994F284D8_4* Field_1_1; // 0x68
	::System::Boolean Field_1_3; // 0x70
	::System::Int32 Field_1_5; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Void Method_1_F97479261056FE64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_F97479261056FE64_OFFSET))(this, a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_E6EAA31670F1F088(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_CLASS_1_1DFC535E84C58D28_METHOD_1_E6EAA31670F1F088_OFFSET))(this, a1, a2);
	}
};
