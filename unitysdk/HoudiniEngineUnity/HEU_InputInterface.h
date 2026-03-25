#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x845C5E0)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACE_REGISTERINTERFACE_OFFSET UNITYSDK_OFFSET(0x845C600)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x845C5F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterface_TypeDefinitionIndex = 37823;

	class HEU_InputInterface : public ::System::Object
	{
	public:
		// static const ::System::Int32 DEFAULT_PRIORITY = 0x64; // 0x0
		::System::Int32 _priority; // 0x10

		::System::Void _ctor(::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACE__CTOR_OFFSET))(this, priority);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void RegisterInterface()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACE_REGISTERINTERFACE_OFFSET))(this);
		}
	};
}
