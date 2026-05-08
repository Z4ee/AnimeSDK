#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshDecimator/BoneWeight.h"
#include "unitysdk/MeshDecimator/Math/Vector2.h"
#include "unitysdk/MeshDecimator/Math/Vector3.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/MeshDecimator/Math/Vector4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define MESHDECIMATORUNITYENGINEAPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x103425C0)
#define MESHDECIMATORUNITYENGINEAPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10342600)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_0_OFFSET UNITYSDK_OFFSET(0x10342610)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_1_OFFSET UNITYSDK_OFFSET(0x10342690)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_2_OFFSET UNITYSDK_OFFSET(0x103426F0)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_3_OFFSET UNITYSDK_OFFSET(0x10342750)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_4_OFFSET UNITYSDK_OFFSET(0x103427B0)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_5_OFFSET UNITYSDK_OFFSET(0x10342810)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_6_OFFSET UNITYSDK_OFFSET(0x10342820)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_7_OFFSET UNITYSDK_OFFSET(0x10342840)

inline static constexpr unsigned int MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex = 85906;

class MeshDecimatorUnityEngineAPI___c : public ::System::Object
{
public:
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_4()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC30);
	}
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_3()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC38);
	}
	static ::System::Converter_2<::UnityEngine::Color, ::MeshDecimator::Math::Vector4>** StaticGet___9__0_5()
	{
		return (::System::Converter_2<::UnityEngine::Color, ::MeshDecimator::Math::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC40);
	}
	static ::MeshDecimatorUnityEngineAPI___c** StaticGet___9()
	{
		return (::MeshDecimatorUnityEngineAPI___c**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC48);
	}
	static ::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3>** StaticGet___9__0_7()
	{
		return (::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC50);
	}
	static ::System::Converter_2<::UnityEngine::BoneWeight, ::MeshDecimator::BoneWeight>** StaticGet___9__0_6()
	{
		return (::System::Converter_2<::UnityEngine::BoneWeight, ::MeshDecimator::BoneWeight>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC58);
	}
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_1()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC60);
	}
	static ::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3d>** StaticGet___9__0_0()
	{
		return (::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3d>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC68);
	}
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_2()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4AC70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__CTOR_OFFSET))(this);
	}

	::MeshDecimator::Math::Vector3d _Mesh2DecMesh_b__0_0(::UnityEngine::Vector3 item)
	{
		return ((::MeshDecimator::Math::Vector3d(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_0_OFFSET))(this, item);
	}

	::MeshDecimator::Math::Vector2 _Mesh2DecMesh_b__0_1(::UnityEngine::Vector2 item)
	{
		return ((::MeshDecimator::Math::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_1_OFFSET))(this, item);
	}

	::MeshDecimator::Math::Vector2 _Mesh2DecMesh_b__0_2(::UnityEngine::Vector2 item)
	{
		return ((::MeshDecimator::Math::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_2_OFFSET))(this, item);
	}

	::MeshDecimator::Math::Vector2 _Mesh2DecMesh_b__0_3(::UnityEngine::Vector2 item)
	{
		return ((::MeshDecimator::Math::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_3_OFFSET))(this, item);
	}

	::MeshDecimator::Math::Vector2 _Mesh2DecMesh_b__0_4(::UnityEngine::Vector2 item)
	{
		return ((::MeshDecimator::Math::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_4_OFFSET))(this, item);
	}

	::MeshDecimator::Math::Vector4 _Mesh2DecMesh_b__0_5(::UnityEngine::Color item)
	{
		return ((::MeshDecimator::Math::Vector4(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_5_OFFSET))(this, item);
	}

	::MeshDecimator::BoneWeight _Mesh2DecMesh_b__0_6(::UnityEngine::BoneWeight item)
	{
		return ((::MeshDecimator::BoneWeight(*)(::PVOID, ::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_6_OFFSET))(this, item);
	}

	::MeshDecimator::Math::Vector3 _Mesh2DecMesh_b__0_7(::UnityEngine::Vector3 item)
	{
		return ((::MeshDecimator::Math::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_7_OFFSET))(this, item);
	}
};
