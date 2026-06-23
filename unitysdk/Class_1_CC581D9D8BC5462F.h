#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgSplitScreenGroup; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset; }

#define CLASS_1_CC581D9D8BC5462F_METHOD_1_814CB41B3D4741B1_OFFSET UNITYSDK_OFFSET(0x151CE390)

inline static constexpr unsigned int Class_1_CC581D9D8BC5462F_TypeDefinitionIndex = 40450;

class Class_1_CC581D9D8BC5462F : public ::System::Object
{
public:
	static ::MoleMole::ComicImgSplitScreenGroup* Method_1_814CB41B3D4741B1(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset* a1)
	{
		return ((::MoleMole::ComicImgSplitScreenGroup*(*)(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_1_CC581D9D8BC5462F_METHOD_1_814CB41B3D4741B1_OFFSET))(a1);
	}
};
