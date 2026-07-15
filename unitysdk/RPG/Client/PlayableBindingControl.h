#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PLAYABLEBINDINGCONTROL_BINDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1E7570)
#define RPG_CLIENT_PLAYABLEBINDINGCONTROL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A1E6C30)
#define RPG_CLIENT_PLAYABLEBINDINGCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1E6D10)
#define RPG_CLIENT_PLAYABLEBINDINGCONTROL_INITBIND_OFFSET UNITYSDK_OFFSET(0x1A1E6DC0)
#define RPG_CLIENT_PLAYABLEBINDINGCONTROL_INIT_OFFSET UNITYSDK_OFFSET(0x1A1E6CD0)
#define RPG_CLIENT_PLAYABLEBINDINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E6BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayableBindingControl_TypeDefinitionIndex = 66612;

	class PlayableBindingControl : public ::System::Object
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _PlayableDirector; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Playables::PlayableBinding>* _BindingDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEBINDINGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEBINDINGCONTROL_CLEAR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEBINDINGCONTROL_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEBINDINGCONTROL_DISPOSE_OFFSET))(this);
		}

		::System::Void InitBind(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEBINDINGCONTROL_INITBIND_OFFSET))(this, a1);
		}

		::System::Void BindObject(::System::String* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYABLEBINDINGCONTROL_BINDOBJECT_OFFSET))(this, a1, a2);
		}
	};
}
