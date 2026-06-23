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

#define MESHDECIMATORUNITYENGINEAPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A678A0)
#define MESHDECIMATORUNITYENGINEAPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A678E0)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_0_OFFSET UNITYSDK_OFFSET(0x11A678F0)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_1_OFFSET UNITYSDK_OFFSET(0x11A67970)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_2_OFFSET UNITYSDK_OFFSET(0x11A679D0)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_3_OFFSET UNITYSDK_OFFSET(0x11A67A30)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_4_OFFSET UNITYSDK_OFFSET(0x11A67A90)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_5_OFFSET UNITYSDK_OFFSET(0x11A67AF0)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_6_OFFSET UNITYSDK_OFFSET(0x11A67B00)
#define MESHDECIMATORUNITYENGINEAPI___C__MESH2DECMESH_B__0_7_OFFSET UNITYSDK_OFFSET(0x11A67B20)

inline static constexpr unsigned int MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex = 91435;

class MeshDecimatorUnityEngineAPI___c : public ::System::Object
{
public:
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_4()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F320);
	}
	static ::System::Converter_2<::UnityEngine::Color, ::MeshDecimator::Math::Vector4>** StaticGet___9__0_5()
	{
		return (::System::Converter_2<::UnityEngine::Color, ::MeshDecimator::Math::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F328);
	}
	static ::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3d>** StaticGet___9__0_0()
	{
		return (::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3d>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F330);
	}
	static ::MeshDecimatorUnityEngineAPI___c** StaticGet___9()
	{
		return (::MeshDecimatorUnityEngineAPI___c**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F338);
	}
	static ::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3>** StaticGet___9__0_7()
	{
		return (::System::Converter_2<::UnityEngine::Vector3, ::MeshDecimator::Math::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F340);
	}
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_3()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F348);
	}
	static ::System::Converter_2<::UnityEngine::BoneWeight, ::MeshDecimator::BoneWeight>** StaticGet___9__0_6()
	{
		return (::System::Converter_2<::UnityEngine::BoneWeight, ::MeshDecimator::BoneWeight>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F350);
	}
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_2()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F358);
	}
	static ::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>** StaticGet___9__0_1()
	{
		return (::System::Converter_2<::UnityEngine::Vector2, ::MeshDecimator::Math::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MeshDecimatorUnityEngineAPI___c_TypeDefinitionIndex)->GetStaticField(0x4F360);
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
