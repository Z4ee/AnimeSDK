#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C59DE0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C59E20)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GENERATELODMESHESFROMGEOGROUPS_B__65_0_OFFSET UNITYSDK_OFFSET(0x8C59E50)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_B__63_0_OFFSET UNITYSDK_OFFSET(0x8C59E30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache___c_TypeDefinitionIndex = 43695;

	class HEU_GenerateGeoCache___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Single>** StaticGet___9__65_0()
		{
			return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0x3E6B0);
		}
		static ::HoudiniEngineUnity::HEU_GenerateGeoCache___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::HEU_GenerateGeoCache___c**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0x3E6B8);
		}
		static ::System::Predicate_1<::UnityEngine::Material*>** StaticGet___9__63_0()
		{
			return (::System::Predicate_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0x3E6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_B__63_0_OFFSET))(this, material);
		}

		::System::Int32 _GenerateLODMeshesFromGeoGroups_b__65_0(::System::Single a, ::System::Single b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GENERATELODMESHESFROMGEOGROUPS_B__65_0_OFFSET))(this, a, b);
		}
	};
}
