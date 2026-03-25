#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_METHOD_5_691A1C2F360A8C86_OFFSET UNITYSDK_OFFSET(0x98E03E0)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_METHOD_5_B7C6DAE40A066421_OFFSET UNITYSDK_OFFSET(0x98E0120)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x98E06A0)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x98E0750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUIDragEventListener_TypeDefinitionIndex = 59875;

	class GridFightUIDragEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::UI::Selectable*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* _DisableCanvasGroupList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_B7C6DAE40A066421()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_METHOD_5_B7C6DAE40A066421_OFFSET))(this);
		}

		::System::Void Method_5_691A1C2F360A8C86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_METHOD_5_691A1C2F360A8C86_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_ONDESTROY_OFFSET))(this);
		}
	};
}
