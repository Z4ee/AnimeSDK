#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_COMICTWEENMOVEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA6900)

namespace MoleMole
{
	inline static constexpr unsigned int ComicTweenMoveAnim_TypeDefinitionIndex = 32134;

	class ComicTweenMoveAnim : public ::System::Object
	{
	public:
		::MoleMole::ComicImgPart imgTarget; // 0x10
		::UnityEngine::Vector2 targetAnchorPos; // 0x14
		::UnityEngine::Vector2 targetAnchorSize; // 0x1C
		::UnityEngine::Vector2 targetImgAnchorPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICTWEENMOVEANIM__CTOR_OFFSET))(this);
		}
	};
}
