#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectOffset; }

#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP_UIADAPTORRECTOFFSET_SET_OFFSET UNITYSDK_OFFSET(0x17219650)
#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP_UIADAPTORRECTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x17219600)

namespace MoleMole
{
	inline static constexpr unsigned int UIHorizontalLayoutGroup_UIAdaptorRectOffset_TypeDefinitionIndex = 61679;

	class UIHorizontalLayoutGroup_UIAdaptorRectOffset : public ::System::Object
	{
	public:
		::System::Int32 m_Left; // 0x10
		::System::Int32 m_Right; // 0x14
		::System::Int32 m_Top; // 0x18
		::System::Int32 m_Bottom; // 0x1C

		::System::Void _ctor(::UnityEngine::RectOffset* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP_UIADAPTORRECTOFFSET__CTOR_OFFSET))(this, rect);
		}

		::System::Void Set(::UnityEngine::RectOffset* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP_UIADAPTORRECTOFFSET_SET_OFFSET))(this, rect);
		}
	};
}
