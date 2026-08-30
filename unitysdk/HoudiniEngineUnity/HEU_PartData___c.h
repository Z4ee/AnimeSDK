#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"

namespace System { template <typename T> class Comparison_1; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A90500)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__COPYGAMEOBJECTCOMPONENTS_B__96_0_OFFSET UNITYSDK_OFFSET(0x11A90550)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A90540)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData___c_TypeDefinitionIndex = 39121;

	class HEU_PartData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::LOD>** StaticGet___9__96_0()
		{
			return (::System::Comparison_1<::UnityEngine::LOD>**)Il2CppClass::FromTypeDefinitionIndex(HEU_PartData___c_TypeDefinitionIndex)->GetStaticField(0x58EB0);
		}
		static ::HoudiniEngineUnity::HEU_PartData___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::HEU_PartData___c**)Il2CppClass::FromTypeDefinitionIndex(HEU_PartData___c_TypeDefinitionIndex)->GetStaticField(0x58EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CopyGameObjectComponents_b__96_0(::UnityEngine::LOD a1, ::UnityEngine::LOD a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::LOD, ::UnityEngine::LOD))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__COPYGAMEOBJECTCOMPONENTS_B__96_0_OFFSET))(this, a1, a2);
		}
	};
}
