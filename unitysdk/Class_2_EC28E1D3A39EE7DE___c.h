#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_2_EC28E1D3A39EE7DE___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x18C76620)
#define CLASS_2_EC28E1D3A39EE7DE___C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18C76610)
#define CLASS_2_EC28E1D3A39EE7DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C765C0)
#define CLASS_2_EC28E1D3A39EE7DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C76600)

inline static constexpr unsigned int Class_2_EC28E1D3A39EE7DE___c_TypeDefinitionIndex = 80258;

class Class_2_EC28E1D3A39EE7DE___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction_1<::System::Int32>** StaticGet___9__28_0()
	{
		return (::UnityEngine::Events::UnityAction_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE___c_TypeDefinitionIndex)->GetStaticField(0x35180);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__20_18()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE___c_TypeDefinitionIndex)->GetStaticField(0x35188);
	}
	static ::Class_2_EC28E1D3A39EE7DE___c** StaticGet___9()
	{
		return (::Class_2_EC28E1D3A39EE7DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE___c_TypeDefinitionIndex)->GetStaticField(0x35190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE___C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}
};
