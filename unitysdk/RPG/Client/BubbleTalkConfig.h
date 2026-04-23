#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AD848C39BD69FDC;
namespace RPG::Client { class IBubbleInfoGroupProvider; }
namespace RPG::Client { class IBubbleInfoProvider; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9EB85C0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_2_OFFSET UNITYSDK_OFFSET(0x9EB86D0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_3_OFFSET UNITYSDK_OFFSET(0x9EB8760)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_4_OFFSET UNITYSDK_OFFSET(0x9EB89A0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_5_OFFSET UNITYSDK_OFFSET(0x9EB90B0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9EB8390)
#define RPG_CLIENT_BUBBLETALKCONFIG_GETBUBBLEINFOPROVIDERLIST_OFFSET UNITYSDK_OFFSET(0x9EB92C0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_BUBBLETALKTYPE_OFFSET UNITYSDK_OFFSET(0x9EB9390)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x9EB93B0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_LOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x9EB93D0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9EB93F0)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET__BUBBLEINFOGROUP_OFFSET UNITYSDK_OFFSET(0x9EB9410)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_BUBBLETALKTYPE_OFFSET UNITYSDK_OFFSET(0x9EB93A0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x9EB93C0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_LOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x9EB93E0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9EB9400)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET__BUBBLEINFOGROUP_OFFSET UNITYSDK_OFFSET(0x9EB9420)
#define RPG_CLIENT_BUBBLETALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB85A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleTalkConfig_TypeDefinitionIndex = 57975;

	class BubbleTalkConfig : public ::System::Object
	{
	public:
		::RPG::Client::IBubbleInfoGroupProvider* __BubbleInfoGroup_k__BackingField; // 0x10
		::System::String* _UniqueName_k__BackingField; // 0x18
		::RPG::GameCore::BubbleTalkType _BubbleTalkType_k__BackingField; // 0x20
		::System::Single _LoopInterval_k__BackingField; // 0x24
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

		static ::RPG::Client::BubbleTalkConfig* Create_3(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID, ::System::Int32 littleGameRuntimeID, ::RPG::GameCore::FiveDimBubbleTalkAction* fiveDimConfig)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_3_OFFSET))(containerGroupID, containerInstanceID, littleGameRuntimeID, fiveDimConfig);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_4(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID, ::System::Int32 littleGameRuntimeID, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* fiveDimConfig)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_4_OFFSET))(containerGroupID, containerInstanceID, littleGameRuntimeID, fiveDimConfig);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_5(::Class_1_7AD848C39BD69FDC* message, ::System::UInt32 runtimeID)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::Class_1_7AD848C39BD69FDC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_5_OFFSET))(message, runtimeID);
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
