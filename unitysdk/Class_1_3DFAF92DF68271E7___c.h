#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3DFAF92DF68271E7___C_METHOD_1_D3CBCAFC7D372E83_OFFSET UNITYSDK_OFFSET(0x15173FC0)
#define CLASS_1_3DFAF92DF68271E7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15173F70)
#define CLASS_1_3DFAF92DF68271E7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15173FB0)

inline static constexpr unsigned int Class_1_3DFAF92DF68271E7___c_TypeDefinitionIndex = 42662;

class Class_1_3DFAF92DF68271E7___c : public ::System::Object
{
public:
	static ::Class_1_3DFAF92DF68271E7___c** StaticGet___9()
	{
		return (::Class_1_3DFAF92DF68271E7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DFAF92DF68271E7___c_TypeDefinitionIndex)->GetStaticField(0x45010);
	}
	static ::System::Comparison_1<::UnityEngine::Vector3>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DFAF92DF68271E7___c_TypeDefinitionIndex)->GetStaticField(0x45018);
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
