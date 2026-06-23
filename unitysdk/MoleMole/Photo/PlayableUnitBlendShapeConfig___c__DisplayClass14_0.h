#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19173420)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG___C__DISPLAYCLASS14_0__GETSKINNEDMESHRENDERERS_B__0_OFFSET UNITYSDK_OFFSET(0x19173430)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableUnitBlendShapeConfig___c__DisplayClass14_0_TypeDefinitionIndex = 48815;

	class PlayableUnitBlendShapeConfig___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* transformPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkinnedMeshRenderers_b__0(::UnityEngine::SkinnedMeshRenderer* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG___C__DISPLAYCLASS14_0__GETSKINNEDMESHRENDERERS_B__0_OFFSET))(this, item);
		}
	};
}
