#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIHOLLOWCHESSPIECEINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEE050)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceInspector_TypeDefinitionIndex = 90698;

	class UIHollowChessPieceInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEINSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
