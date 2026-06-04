#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/GridType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_CANNAVI_OFFSET UNITYSDK_OFFSET(0xD09C5B0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ISPCSIZE_OFFSET UNITYSDK_OFFSET(0xD09C220)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ISREDEFINESIZE_OFFSET UNITYSDK_OFFSET(0xD09C2A0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ISTITLE_OFFSET UNITYSDK_OFFSET(0xD09C5A0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0xD09C2F0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0xD09C730)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET__RTF_OFFSET UNITYSDK_OFFSET(0xD09C170)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD09C850)

namespace SuperScrollView
{
	inline static constexpr unsigned int FlexibleGridConfData_TypeDefinitionIndex = 44933;

	class FlexibleGridConfData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10
		::UnityEngine::Vector2 PCItemSize; // 0x18
		::UnityEngine::Vector2 ReDefineSize; // 0x20
		::SuperScrollView::GridType GridType; // 0x28
		::System::Single TopSpacing; // 0x2C
		::System::Single DownSpacing; // 0x30
		::System::Single LeftSpacing; // 0x34
		::System::Single RightSpacing; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get__Rtf()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET__RTF_OFFSET))(this);
		}

		::System::Boolean get_IsPCSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ISPCSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsRedefineSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ISREDEFINESIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_ISTITLE_OFFSET))(this);
		}

		::System::Boolean get_CanNavi()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_CANNAVI_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_SizeDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDCONFDATA_GET_SIZEDELTA_OFFSET))(this);
		}
	};
}
