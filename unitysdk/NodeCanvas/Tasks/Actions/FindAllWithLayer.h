#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_FINDALLWITHLAYER_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B4A52B0)
#define NODECANVAS_TASKS_ACTIONS_FINDALLWITHLAYER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4A5500)
#define NODECANVAS_TASKS_ACTIONS_FINDALLWITHLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A55F0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindAllWithLayer_TypeDefinitionIndex = 27438;

	class FindAllWithLayer : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* targetLayers; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDALLWITHLAYER__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDALLWITHLAYER_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDALLWITHLAYER_ONEXECUTE_OFFSET))(this);
		}
	};
}
