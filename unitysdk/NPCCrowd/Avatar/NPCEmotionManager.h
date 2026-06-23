#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace NPCCrowd::Avatar { class NPCEmotionControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCEMOTIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10D8DCF0)
#define NPCCROWD_AVATAR_NPCEMOTIONMANAGER_REGISTEREMOTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x10D8DE70)
#define NPCCROWD_AVATAR_NPCEMOTIONMANAGER_UNREGISTEREMOTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x10D8DF00)
#define NPCCROWD_AVATAR_NPCEMOTIONMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D8DFA0)
#define NPCCROWD_AVATAR_NPCEMOTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D8E140)
#define NPCCROWD_AVATAR_NPCEMOTIONMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D8E1C0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCEmotionManager_TypeDefinitionIndex = 83264;

	class NPCEmotionManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCEmotionControl*>* _controls; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Avatar::NPCEmotionManager* Get()
		{
			return ((::NPCCrowd::Avatar::NPCEmotionManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONMANAGER_GET_OFFSET))();
		}

		::System::Void RegisterEmotionControl(::NPCCrowd::Avatar::NPCEmotionControl* control)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCEmotionControl*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONMANAGER_REGISTEREMOTIONCONTROL_OFFSET))(this, control);
		}

		::System::Void UnregisterEmotionControl(::NPCCrowd::Avatar::NPCEmotionControl* control)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCEmotionControl*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONMANAGER_UNREGISTEREMOTIONCONTROL_OFFSET))(this, control);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCEMOTIONMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
