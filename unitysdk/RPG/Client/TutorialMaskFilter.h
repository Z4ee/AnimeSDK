#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_TUTORIALMASKFILTER_ADDFILTERAREA_OFFSET UNITYSDK_OFFSET(0xCAF9DF0)
#define RPG_CLIENT_TUTORIALMASKFILTER_CLEAR_OFFSET UNITYSDK_OFFSET(0xCAF9CC0)
#define RPG_CLIENT_TUTORIALMASKFILTER_ENABLEDEBUGDRAW_OFFSET UNITYSDK_OFFSET(0xCAFBE90)
#define RPG_CLIENT_TUTORIALMASKFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xCAFBD00)
#define RPG_CLIENT_TUTORIALMASKFILTER_REMOVEFILTERAREA_OFFSET UNITYSDK_OFFSET(0xCAFBE00)
#define RPG_CLIENT_TUTORIALMASKFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCAFBEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialMaskFilter_TypeDefinitionIndex = 64559;

	class TutorialMaskFilter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Nullable_1<::UnityEngine::Rect>>* Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALMASKFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALMASKFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALMASKFILTER_CLEAR_OFFSET))(this);
		}

		::System::Int32 AddFilterArea(::UnityEngine::Rect a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALMASKFILTER_ADDFILTERAREA_OFFSET))(this, a1);
		}

		::System::Void RemoveFilterArea(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALMASKFILTER_REMOVEFILTERAREA_OFFSET))(this, a1);
		}

		::System::Void EnableDebugDraw(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALMASKFILTER_ENABLEDEBUGDRAW_OFFSET))(this, a1);
		}
	};
}
