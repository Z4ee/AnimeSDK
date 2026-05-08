#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_GET_ONMOVECONTENT_OFFSET UNITYSDK_OFFSET(0x1235DFD0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_1_OFFSET UNITYSDK_OFFSET(0x1235E080)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_OFFSET UNITYSDK_OFFSET(0x1235DFF0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_SET_ONMOVECONTENT_OFFSET UNITYSDK_OFFSET(0x1235DFE0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1235E120)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursorViewRectCallback_TypeDefinitionIndex = 59325;

	class MonoGamepadVirtualCursorViewRectCallback : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK__CTOR_OFFSET))(this);
		}

		::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* get_OnMoveContent()
		{
			return ((::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_GET_ONMOVECONTENT_OFFSET))(this);
		}

		::System::Void set_OnMoveContent(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_SET_ONMOVECONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 MoveContent(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 MoveContent_1(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_1_OFFSET))(this, a1, a2);
		}
	};
}
