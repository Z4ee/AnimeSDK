#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_SCROLLVIEWDUMMYITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1792D830)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM_GETLAYOUTELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1792D9B0)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1792DAA0)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM_SETLAYOUTELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1792D900)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1792DA40)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewDummyItem_TypeDefinitionIndex = 87111;

	class ScrollViewDummyItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 DataIndex; // 0x18
		::UnityEngine::UI::LayoutElement* Field_5_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_AWAKE_OFFSET))(this);
		}

		::System::Void SetLayoutElementSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_SETLAYOUTELEMENTSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetLayoutElementSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_GETLAYOUTELEMENTSIZE_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
