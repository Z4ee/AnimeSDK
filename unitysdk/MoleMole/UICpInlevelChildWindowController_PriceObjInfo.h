#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PRICEOBJINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50FB80)

namespace MoleMole
{
	inline static constexpr unsigned int UICpInlevelChildWindowController_PriceObjInfo_TypeDefinitionIndex = 85333;

	class UICpInlevelChildWindowController_PriceObjInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PriceObj; // 0x10
		::UnityEngine::Transform* priceIcon; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPINLEVELCHILDWINDOWCONTROLLER_PRICEOBJINFO__CTOR_OFFSET))(this);
		}
	};
}
