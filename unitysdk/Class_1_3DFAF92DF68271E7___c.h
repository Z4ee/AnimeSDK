#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3DFAF92DF68271E7___C_METHOD_1_D3CBCAFC7D372E83_OFFSET UNITYSDK_OFFSET(0xF73CA50)
#define CLASS_1_3DFAF92DF68271E7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF73CA00)
#define CLASS_1_3DFAF92DF68271E7___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF73CA40)

inline static constexpr unsigned int Class_1_3DFAF92DF68271E7___c_TypeDefinitionIndex = 86628;

class Class_1_3DFAF92DF68271E7___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::UnityEngine::Vector3>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DFAF92DF68271E7___c_TypeDefinitionIndex)->GetStaticField(0x4B0B0);
	}
	static ::Class_1_3DFAF92DF68271E7___c** StaticGet___9()
	{
		return (::Class_1_3DFAF92DF68271E7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DFAF92DF68271E7___c_TypeDefinitionIndex)->GetStaticField(0x4B0B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_D3CBCAFC7D372E83(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7___C_METHOD_1_D3CBCAFC7D372E83_OFFSET))(this, a1, a2);
	}
};
