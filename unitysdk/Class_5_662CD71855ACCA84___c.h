#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_662CD71855ACCA84___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0xC99D410)
#define CLASS_5_662CD71855ACCA84___C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xC99D520)
#define CLASS_5_662CD71855ACCA84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC99D3C0)
#define CLASS_5_662CD71855ACCA84___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC99D400)

inline static constexpr unsigned int Class_5_662CD71855ACCA84___c_TypeDefinitionIndex = 60022;

class Class_5_662CD71855ACCA84___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_662CD71855ACCA84___c_TypeDefinitionIndex)->GetStaticField(0x3F7B0);
	}
	static ::Class_5_662CD71855ACCA84___c** StaticGet___9()
	{
		return (::Class_5_662CD71855ACCA84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_662CD71855ACCA84___c_TypeDefinitionIndex)->GetStaticField(0x3F7B8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__2_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_5_662CD71855ACCA84___c_TypeDefinitionIndex)->GetStaticField(0x3F7C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84___C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}
};
