#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/MonoEffectPluginAnimationStateLevel.h"
#include "unitysdk/MoleMole/MonoEffectPluginSyncEntityPosAnimationData.h"
#include "unitysdk/MoleMole/MonoEffectPluginSyncEntityPos_Enum_3_662EA3BE8C1F9A2C.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class INapLevel_SyncAvatarPos;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_POSSYNCTARGET_OFFSET UNITYSDK_OFFSET(0x1384DD10)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_STATEPLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1384DE00)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ISTRANSITIONALLOWED_OFFSET UNITYSDK_OFFSET(0x1384E400)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_5DFDABA56E3FC131_OFFSET UNITYSDK_OFFSET(0x1384E9D0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0x1384DF20)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1384EB70)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1384D990)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1384E690)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1384D890)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1384D9E0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1384DE40)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_PLAYANIMATIONBYSTATE_OFFSET UNITYSDK_OFFSET(0x1384E130)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1384E870)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginSyncEntityPos_TypeDefinitionIndex = 47612;

	class MonoEffectPluginSyncEntityPos : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean IsAvatarEnttiy; // 0x58
		::System::Boolean EnableTransitionCheck; // 0x59
		::MoleMole::GameplayTag entityTag; // 0x60
		::MoleMole::MonoEffectPluginSyncEntityPos_Enum_3_662EA3BE8C1F9A2C syncType; // 0x70
		::System::String* DefaultState; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginSyncEntityPosAnimationData>* animationDataList; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAnimationStateLevel>* animationLevelDataList; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* animationStateMap; // 0x90
		::System::UInt32 Field_7_8; // 0x98
		::INapLevel_SyncAvatarPos* Field_7_15; // 0xA0
		::System::String* Field_7_14; // 0xA8
		::UnityEngine::Animation* Field_7_13; // 0xB0
		::System::Boolean Field_7_12; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnInputPosition(::MoleMole::EntityHandle a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONINPUTPOSITION_OFFSET))(this, a1, a2);
		}

		::INapLevel_SyncAvatarPos* get_posSyncTarget()
		{
			return ((::INapLevel_SyncAvatarPos*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_POSSYNCTARGET_OFFSET))(this);
		}

		::System::String* get_StatePlayMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_STATEPLAYMESSAGE_OFFSET))(this);
		}

		::System::Void OnStateMessage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONSTATEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTransitionAllowed(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ISTRANSITIONALLOWED_OFFSET))(this, a1, a2);
		}

		::System::Boolean PlayAnimationByState(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_PLAYANIMATIONBYSTATE_OFFSET))(this, a1);
		}

		::System::Int32 Method_7_5DFDABA56E3FC131(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_5DFDABA56E3FC131_OFFSET))(this, a1);
		}

		::System::Void Method_7_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_6E6F865C6BBBA8DD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_6E6F865C6BBBA8DD_OFFSET))(this, a1);
		}

		::System::Void Method_7_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
