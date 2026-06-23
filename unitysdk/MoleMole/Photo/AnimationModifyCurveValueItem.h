#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class PlayableGraphReferenceCurveConfig; }

#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUEITEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x141A2450)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x141A24B0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationModifyCurveValueItem_TypeDefinitionIndex = 47445;

	class AnimationModifyCurveValueItem : public ::System::Object
	{
	public:
		::PipelineCamera::SerializableHashString name; // 0x10
		::System::Boolean useCurve; // 0x20
		::System::Single value; // 0x24
		::MoleMole::Photo::PlayableGraphReferenceCurveConfig* curve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUEITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUEITEM_GET_ISVALID_OFFSET))(this);
		}
	};
}
