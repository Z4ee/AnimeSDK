#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A87E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A8820)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__GET_BOUNDSNAMES_B__57_0_OFFSET UNITYSDK_OFFSET(0x1F7A8830)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeSpots___c_TypeDefinitionIndex = 39601;

	class BuildVolumeSpots___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::GUIContent*>**)Il2CppClass::FromTypeDefinitionIndex(BuildVolumeSpots___c_TypeDefinitionIndex)->GetStaticField(0x2ADA0);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots___c**)Il2CppClass::FromTypeDefinitionIndex(BuildVolumeSpots___c_TypeDefinitionIndex)->GetStaticField(0x2ADA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GUIContent* _get_BoundsNames_b__57_0(::System::String* n)
		{
			return ((::UnityEngine::GUIContent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__GET_BOUNDSNAMES_B__57_0_OFFSET))(this, n);
		}
	};
}
