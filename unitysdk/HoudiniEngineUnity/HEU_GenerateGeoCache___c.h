#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8431D70)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8431DB0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GENERATELODMESHESFROMGEOGROUPS_B__65_0_OFFSET UNITYSDK_OFFSET(0x8431DE0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_B__63_0_OFFSET UNITYSDK_OFFSET(0x8431DC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache___c_TypeDefinitionIndex = 37818;

	class HEU_GenerateGeoCache___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_GenerateGeoCache___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::HEU_GenerateGeoCache___c**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0x44100);
		}
		static ::System::Predicate_1<::UnityEngine::Material*>** StaticGet___9__63_0()
		{
			return (::System::Predicate_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0x44108);
		}
		static ::System::Comparison_1<::System::Single>** StaticGet___9__65_0()
		{
			return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0x44110);
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
