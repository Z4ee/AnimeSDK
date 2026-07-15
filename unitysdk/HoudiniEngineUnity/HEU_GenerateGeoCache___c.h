#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1503B4F0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1503B530)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GENERATELODMESHESFROMGEOGROUPS_B__66_0_OFFSET UNITYSDK_OFFSET(0x1503B560)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_B__64_0_OFFSET UNITYSDK_OFFSET(0x1503B540)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache___c_TypeDefinitionIndex = 38482;

	class HEU_GenerateGeoCache___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Material*>** StaticGet___9__64_0()
		{
			return (::System::Predicate_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0xE530);
		}
		static ::HoudiniEngineUnity::HEU_GenerateGeoCache___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::HEU_GenerateGeoCache___c**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0xE538);
		}
		static ::System::Comparison_1<::System::Single>** StaticGet___9__66_0()
		{
			return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HEU_GenerateGeoCache___c_TypeDefinitionIndex)->GetStaticField(0xE540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFinalMaterialsFromComparingNewWithPrevious_b__64_0(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_B__64_0_OFFSET))(this, a1);
		}

		::System::Int32 _GenerateLODMeshesFromGeoGroups_b__66_0(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE___C__GENERATELODMESHESFROMGEOGROUPS_B__66_0_OFFSET))(this, a1, a2);
		}
	};
}
