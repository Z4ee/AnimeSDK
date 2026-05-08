#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_MONOCHESSBOARDDIAMONDLAYOUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12F9B220)

namespace MoleMole
{
	inline static constexpr unsigned int MonoChessboardDiamondLayoutData_TypeDefinitionIndex = 50050;

	class MonoChessboardDiamondLayoutData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 Size; // 0x18
		::UnityEngine::Vector2 Interval; // 0x20
		::UnityEngine::TextAnchor ChildAlignment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCHESSBOARDDIAMONDLAYOUTDATA__CTOR_OFFSET))(this);
		}
	};
}
