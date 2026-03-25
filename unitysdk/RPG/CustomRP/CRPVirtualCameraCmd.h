#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VirtualCameraCmd.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CRPVIRTUALCAMERACMD_GETCMDREADONLY_OFFSET UNITYSDK_OFFSET(0x16A78B20)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERACMD_GETCMD_OFFSET UNITYSDK_OFFSET(0x16A78B60)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERACMD_ONDESTORY_OFFSET UNITYSDK_OFFSET(0x16A78C90)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERACMD__CTOR_OFFSET UNITYSDK_OFFSET(0x16A78D40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraCmd_TypeDefinitionIndex = 29308;

	class CRPVirtualCameraCmd : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Rendering::CommandBuffer*>* vcCmds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERACMD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::CommandBuffer* GetCmdReadonly(::System::Int32 pos)
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERACMD_GETCMDREADONLY_OFFSET))(this, pos);
		}

		::UnityEngine::Rendering::CommandBuffer* GetCmd(::RPG::CustomRP::VirtualCameraCmd pos, ::System::Boolean clear)
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::PVOID, ::RPG::CustomRP::VirtualCameraCmd, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERACMD_GETCMD_OFFSET))(this, pos, clear);
		}

		::System::Void OnDestory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERACMD_ONDESTORY_OFFSET))(this);
		}
	};
}
