#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IBubbleInfoGroupProvider; }
namespace RPG::Client { class IBubbleInfoProvider; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_1_OFFSET UNITYSDK_OFFSET(0x920F2F0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_2_OFFSET UNITYSDK_OFFSET(0x920F400)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_3_OFFSET UNITYSDK_OFFSET(0x920F490)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_4_OFFSET UNITYSDK_OFFSET(0x920F6D0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x920F0C0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GETBUBBLEINFOPROVIDERLIST_OFFSET UNITYSDK_OFFSET(0x920FDE0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_BUBBLETALKTYPE_OFFSET UNITYSDK_OFFSET(0x920FEB0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x920FED0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_LOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x920FEF0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x920FF10)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET__BUBBLEINFOGROUP_OFFSET UNITYSDK_OFFSET(0x920FF30)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_BUBBLETALKTYPE_OFFSET UNITYSDK_OFFSET(0x920FEC0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x920FEE0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_LOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x920FF00)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x920FF20)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET__BUBBLEINFOGROUP_OFFSET UNITYSDK_OFFSET(0x920FF40)
#define RPG_CLIENT_BUBBLETALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x920F2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleTalkConfig_TypeDefinitionIndex = 51090;

	class BubbleTalkConfig : public ::System::Object
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::RPG::Client::IBubbleInfoGroupProvider* __BubbleInfoGroup_k__BackingField; // 0x18
		::System::Single _LoopInterval_k__BackingField; // 0x20
		::RPG::GameCore::BubbleTalkType _BubbleTalkType_k__BackingField; // 0x24
		::System::Boolean _IsLoop_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BubbleTalkConfig* Create(::RPG::GameCore::PlayNPCBubbleTalk* bubbleTalk)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_OFFSET))(bubbleTalk);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_1(::System::String* uniqueName, ::System::Single loopInterval, ::System::Boolean isLoop, ::RPG::GameCore::BubbleTalkType bubbleTalkType, ::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* bubbleInfoProviders)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::String*, ::System::Single, ::System::Boolean, ::RPG::GameCore::BubbleTalkType, ::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_1_OFFSET))(uniqueName, loopInterval, isLoop, bubbleTalkType, bubbleInfoProviders);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_2(::System::String* uniqueName, ::System::Single loopInterval, ::System::Boolean isLoop, ::RPG::GameCore::BubbleTalkType bubbleTalkType, ::RPG::Client::IBubbleInfoGroupProvider* bubbleInfoGroupProviders)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::String*, ::System::Single, ::System::Boolean, ::RPG::GameCore::BubbleTalkType, ::RPG::Client::IBubbleInfoGroupProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_2_OFFSET))(uniqueName, loopInterval, isLoop, bubbleTalkType, bubbleInfoGroupProviders);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_3(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID, ::System::UInt32 littleGameEntityID, ::RPG::GameCore::FiveDimBubbleTalkAction* fiveDimConfig)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_3_OFFSET))(containerGroupID, containerInstanceID, littleGameEntityID, fiveDimConfig);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_4(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID, ::System::UInt32 littleGameEntityID, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* fiveDimConfig)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_4_OFFSET))(containerGroupID, containerInstanceID, littleGameEntityID, fiveDimConfig);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* GetBubbleInfoProviderList()
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GETBUBBLEINFOPROVIDERLIST_OFFSET))(this);
		}

		::RPG::GameCore::BubbleTalkType get_BubbleTalkType()
		{
			return ((::RPG::GameCore::BubbleTalkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_BUBBLETALKTYPE_OFFSET))(this);
		}

		::System::Void set_BubbleTalkType(::RPG::GameCore::BubbleTalkType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_BUBBLETALKTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_ISLOOP_OFFSET))(this);
		}

		::System::Void set_IsLoop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_ISLOOP_OFFSET))(this, value);
		}

		::System::Single get_LoopInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_LOOPINTERVAL_OFFSET))(this);
		}

		::System::Void set_LoopInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_LOOPINTERVAL_OFFSET))(this, value);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_UNIQUENAME_OFFSET))(this, value);
		}

		::RPG::Client::IBubbleInfoGroupProvider* get__BubbleInfoGroup()
		{
			return ((::RPG::Client::IBubbleInfoGroupProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET__BUBBLEINFOGROUP_OFFSET))(this);
		}

		::System::Void set__BubbleInfoGroup(::RPG::Client::IBubbleInfoGroupProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBubbleInfoGroupProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET__BUBBLEINFOGROUP_OFFSET))(this, value);
		}
	};
}
