#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class BoxCollider2D; }

#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x1936BA50)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1936BA90)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_METHOD_6_2A15EFEB0B7E1616_OFFSET UNITYSDK_OFFSET(0x1936B890)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_ONAFTERAPPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1936B640)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1936BAA0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1936BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBoxCollider2DAdapter_TypeDefinitionIndex = 87292;

	class UIBoxCollider2DAdapter : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::BoxCollider2D* Field_6_0; // 0x18
		::System::Boolean Field_6_7; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterApplyLayoutByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_ONAFTERAPPLYLAYOUTBYPLATFORM_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_CALCULATELAYOUT_OFFSET))(this);
		}

		::System::Boolean get_Pause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_GET_PAUSE_OFFSET))(this);
		}

		::System::Void set_Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_SET_PAUSE_OFFSET))(this, a1);
		}

		::UnityEngine::BoxCollider2D* Method_6_2A15EFEB0B7E1616()
		{
			return ((::UnityEngine::BoxCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_METHOD_6_2A15EFEB0B7E1616_OFFSET))(this);
		}
	};
}
