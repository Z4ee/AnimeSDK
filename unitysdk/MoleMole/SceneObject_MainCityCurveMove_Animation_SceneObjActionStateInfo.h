#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_ActionStateInfo.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo_TypeDefinitionIndex = 47661;

	struct alignas(8) SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo
	{
		::System::String* Name; // 0x10
		::MoleMole::SceneObject_MainCityCurveMove_Animation_ActionStateInfo UpInfo; // 0x18
		::MoleMole::SceneObject_MainCityCurveMove_Animation_ActionStateInfo DownInfo; // 0x20
	};
}
