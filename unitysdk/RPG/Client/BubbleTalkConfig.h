#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7AD848C39BD69FDC;
class Class_3_137788980064817E;
namespace RPG::Client { class IBubbleInfoGroupProvider; }
namespace RPG::Client { class IBubbleInfoProvider; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }

#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB454A30)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_2_OFFSET UNITYSDK_OFFSET(0xB454C30)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_3_OFFSET UNITYSDK_OFFSET(0xB454D40)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_4_OFFSET UNITYSDK_OFFSET(0xB454DD0)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_5_OFFSET UNITYSDK_OFFSET(0xB455000)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_6_OFFSET UNITYSDK_OFFSET(0xB455660)
#define RPG_CLIENT_BUBBLETALKCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xB454810)
#define RPG_CLIENT_BUBBLETALKCONFIG_GETBUBBLEINFOPROVIDERLIST_OFFSET UNITYSDK_OFFSET(0xB455850)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_BUBBLETALKTYPE_OFFSET UNITYSDK_OFFSET(0xB455930)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0xB455950)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_LOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0xB455970)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB455990)
#define RPG_CLIENT_BUBBLETALKCONFIG_GET__BUBBLEINFOGROUP_OFFSET UNITYSDK_OFFSET(0xB4559B0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_BUBBLETALKTYPE_OFFSET UNITYSDK_OFFSET(0xB455940)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0xB455960)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_LOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0xB455980)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB4559A0)
#define RPG_CLIENT_BUBBLETALKCONFIG_SET__BUBBLEINFOGROUP_OFFSET UNITYSDK_OFFSET(0xB4559C0)
#define RPG_CLIENT_BUBBLETALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB454A10)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleTalkConfig_TypeDefinitionIndex = 58891;

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

		static ::RPG::Client::BubbleTalkConfig* Create(::RPG::GameCore::PlayNPCBubbleTalk* a1)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_1(::Class_3_137788980064817E* a1)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::Class_3_137788980064817E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_2(::System::String* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::BubbleTalkType a4, ::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* a5)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::String*, ::System::Single, ::System::Boolean, ::RPG::GameCore::BubbleTalkType, ::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_3(::System::String* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::BubbleTalkType a4, ::RPG::Client::IBubbleInfoGroupProvider* a5)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::String*, ::System::Single, ::System::Boolean, ::RPG::GameCore::BubbleTalkType, ::RPG::Client::IBubbleInfoGroupProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_4(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::GameCore::FiveDimBubbleTalkAction* a4)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_5(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a4)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::BubbleTalkConfig* Create_6(::Class_1_7AD848C39BD69FDC* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::BubbleTalkConfig*(*)(::Class_1_7AD848C39BD69FDC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_CREATE_6_OFFSET))(a1, a2);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* GetBubbleInfoProviderList()
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GETBUBBLEINFOPROVIDERLIST_OFFSET))(this);
		}

		::RPG::GameCore::BubbleTalkType get_BubbleTalkType()
		{
			return ((::RPG::GameCore::BubbleTalkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_BUBBLETALKTYPE_OFFSET))(this);
		}

		::System::Void set_BubbleTalkType(::RPG::GameCore::BubbleTalkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_BUBBLETALKTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_ISLOOP_OFFSET))(this);
		}

		::System::Void set_IsLoop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_ISLOOP_OFFSET))(this, a1);
		}

		::System::Single get_LoopInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_LOOPINTERVAL_OFFSET))(this);
		}

		::System::Void set_LoopInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_LOOPINTERVAL_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::Client::IBubbleInfoGroupProvider* get__BubbleInfoGroup()
		{
			return ((::RPG::Client::IBubbleInfoGroupProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_GET__BUBBLEINFOGROUP_OFFSET))(this);
		}

		::System::Void set__BubbleInfoGroup(::RPG::Client::IBubbleInfoGroupProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBubbleInfoGroupProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLETALKCONFIG_SET__BUBBLEINFOGROUP_OFFSET))(this, a1);
		}
	};
}
