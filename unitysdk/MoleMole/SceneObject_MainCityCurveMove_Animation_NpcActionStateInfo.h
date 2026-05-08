#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_ActionStateInfo.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo_TypeDefinitionIndex = 47660;

	struct alignas(8) SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo
	{
		::System::Int32 NpcTag; // 0x10
		::MoleMole::SceneObject_MainCityCurveMove_Animation_ActionStateInfo UpInfo; // 0x14
		::MoleMole::SceneObject_MainCityCurveMove_Animation_ActionStateInfo DownInfo; // 0x1C
		::System::Collections::Generic::List_1<::System::String*>* NpcPos; // 0x28
	};
}
