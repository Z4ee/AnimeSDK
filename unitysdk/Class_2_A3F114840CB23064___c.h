#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_A3F114840CB23064___C_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x1A0CF810)
#define CLASS_2_A3F114840CB23064___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1A0CF780)
#define CLASS_2_A3F114840CB23064___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF730)
#define CLASS_2_A3F114840CB23064___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF770)

inline static constexpr unsigned int Class_2_A3F114840CB23064___c_TypeDefinitionIndex = 50617;

class Class_2_A3F114840CB23064___c : public ::System::Object
{
public:
	static ::Class_2_A3F114840CB23064___c** StaticGet___9()
	{
		return (::Class_2_A3F114840CB23064___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3F114840CB23064___c_TypeDefinitionIndex)->GetStaticField(0x3D3A0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3F114840CB23064___c_TypeDefinitionIndex)->GetStaticField(0x3D3A8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3F114840CB23064___c_TypeDefinitionIndex)->GetStaticField(0x3D3B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F114840CB23064___C_METHOD_1_CE18697B63E52504_OFFSET))(this);
	}
};
