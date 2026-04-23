#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xADDD940)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0xADDDAA0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xADDDB80)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xADDDB70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationMockAnimator_TypeDefinitionIndex = 71942;

	class ChimeraEvaluationMockAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraEvaluationMockAnimator_TypeDefinitionIndex)->GetStaticField(0x2990);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraEvaluationMockAnimator_TypeDefinitionIndex)->GetStaticField(0x2994);
		}
		::UnityEngine::Animator* ChimeraAnimator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CCTOR_OFFSET))();
		}

		::System::Void LikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET))(this);
		}

		::System::Void UnlikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET))(this);
		}
	};
}
