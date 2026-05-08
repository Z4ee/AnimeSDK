#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine::Rendering::Universal { class CharacterColorCorrection; }

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHARACTERCOLORCORRECTIONPARAMS_CACHEPARAMS_OFFSET UNITYSDK_OFFSET(0x1679C7C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHARACTERCOLORCORRECTIONPARAMS_RECOVERPARAMS_OFFSET UNITYSDK_OFFSET(0x1679CCD0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHARACTERCOLORCORRECTIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1679C7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController_CharacterColorCorrectionParams_TypeDefinitionIndex = 70356;

	class UIGachaPerformance3DModelController_CharacterColorCorrectionParams : public ::System::Object
	{
	public:
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* shadowTint; // 0x10
		::System::Tuple_2<::System::Boolean, ::System::Boolean>* useShadowTintAsOutline; // 0x18
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* shadowFadeTint; // 0x20
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* frontTint; // 0x28
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* ambient; // 0x30
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* shallowFadeTint; // 0x38
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* sssTint; // 0x40
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* ambientGradient; // 0x48
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* shallowTint; // 0x50
		::System::Tuple_2<::System::Boolean, ::UnityEngine::Color>* outlineTint; // 0x58
		::UnityEngine::Rendering::Universal::CharacterColorCorrection* _sourceData; // 0x60

		::System::Void _ctor(::UnityEngine::Rendering::Universal::CharacterColorCorrection* sourceData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::CharacterColorCorrection*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHARACTERCOLORCORRECTIONPARAMS__CTOR_OFFSET))(this, sourceData);
		}

		::System::Void CacheParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHARACTERCOLORCORRECTIONPARAMS_CACHEPARAMS_OFFSET))(this);
		}

		::System::Void RecoverParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER_CHARACTERCOLORCORRECTIONPARAMS_RECOVERPARAMS_OFFSET))(this);
		}
	};
}
