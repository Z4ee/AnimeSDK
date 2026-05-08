#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_22DECF2702AF09AC___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0xF5CFC50)
#define CLASS_5_22DECF2702AF09AC___C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xF5CF7B0)
#define CLASS_5_22DECF2702AF09AC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5CF760)
#define CLASS_5_22DECF2702AF09AC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF5CF7A0)

inline static constexpr unsigned int Class_5_22DECF2702AF09AC___c_TypeDefinitionIndex = 80911;

class Class_5_22DECF2702AF09AC___c : public ::System::Object
{
public:
	static ::Class_5_22DECF2702AF09AC___c** StaticGet___9()
	{
		return (::Class_5_22DECF2702AF09AC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_22DECF2702AF09AC___c_TypeDefinitionIndex)->GetStaticField(0x397D0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__2_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_5_22DECF2702AF09AC___c_TypeDefinitionIndex)->GetStaticField(0x397D8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_22DECF2702AF09AC___c_TypeDefinitionIndex)->GetStaticField(0x397E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC___C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}
};
