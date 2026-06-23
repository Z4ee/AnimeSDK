#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace UnityEngine { class AnimationCurve; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_GET_MIXCURVE_OFFSET UNITYSDK_OFFSET(0x1DB182D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1DB18080)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1DB18360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_RESET_OFFSET UNITYSDK_OFFSET(0x1DB18320)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_SET_MIXCURVE_OFFSET UNITYSDK_OFFSET(0x1DB182E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB188B0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierVariableMixShapes_TypeDefinitionIndex = 38992;

	class ModifierVariableMixShapes : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InShapeA; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InShapeB; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutShape; // 0xC8
		::UnityEngine::AnimationCurve* m_MixCurve; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES__CTOR_OFFSET))(this);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_GET_PATHISCLOSED_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_MixCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_GET_MIXCURVE_OFFSET))(this);
		}

		::System::Void set_MixCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_SET_MIXCURVE_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_RESET_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERVARIABLEMIXSHAPES_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}
	};
}
