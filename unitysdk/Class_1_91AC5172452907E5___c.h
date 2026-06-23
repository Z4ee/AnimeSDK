#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapGradientAlphaKey.h"
#include "unitysdk/NapGradientColorKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_91AC5172452907E5___C_METHOD_1_347B3D903121FAD3_OFFSET UNITYSDK_OFFSET(0x17FB06C0)
#define CLASS_1_91AC5172452907E5___C_METHOD_1_A0A2ED958A086248_OFFSET UNITYSDK_OFFSET(0x17FB0720)
#define CLASS_1_91AC5172452907E5___C_METHOD_1_E7E4BE6859AB676A_OFFSET UNITYSDK_OFFSET(0x17FB0780)
#define CLASS_1_91AC5172452907E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB0670)
#define CLASS_1_91AC5172452907E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB06B0)

inline static constexpr unsigned int Class_1_91AC5172452907E5___c_TypeDefinitionIndex = 60456;

class Class_1_91AC5172452907E5___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::NapGradientColorKey>** StaticGet___9__35_0()
	{
		return (::System::Comparison_1<::NapGradientColorKey>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91AC5172452907E5___c_TypeDefinitionIndex)->GetStaticField(0x3AB00);
	}
	static ::Class_1_91AC5172452907E5___c** StaticGet___9()
	{
		return (::Class_1_91AC5172452907E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91AC5172452907E5___c_TypeDefinitionIndex)->GetStaticField(0x3AB08);
	}
	static ::System::Comparison_1<::NapGradientAlphaKey>** StaticGet___9__35_1()
	{
		return (::System::Comparison_1<::NapGradientAlphaKey>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91AC5172452907E5___c_TypeDefinitionIndex)->GetStaticField(0x3AB10);
	}
	static ::System::Comparison_1<::UnityEngine::Keyframe>** StaticGet___9__38_3()
	{
		return (::System::Comparison_1<::UnityEngine::Keyframe>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91AC5172452907E5___c_TypeDefinitionIndex)->GetStaticField(0x3AB18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_347B3D903121FAD3(::NapGradientColorKey a1, ::NapGradientColorKey a2)
	{
		return ((::System::Int32(*)(::PVOID, ::NapGradientColorKey, ::NapGradientColorKey))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5___C_METHOD_1_347B3D903121FAD3_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A0A2ED958A086248(::NapGradientAlphaKey a1, ::NapGradientAlphaKey a2)
	{
		return ((::System::Int32(*)(::PVOID, ::NapGradientAlphaKey, ::NapGradientAlphaKey))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5___C_METHOD_1_A0A2ED958A086248_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_E7E4BE6859AB676A(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_91AC5172452907E5___C_METHOD_1_E7E4BE6859AB676A_OFFSET))(this, a1, a2);
	}
};
