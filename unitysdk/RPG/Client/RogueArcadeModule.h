#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_827373C1CEDFE355;
class Class_1_FF03248024BAA97A_1;
namespace RPG::Client { class RogueArcadeRoomData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEARCADEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76D000)
#define RPG_CLIENT_ROGUEARCADEMODULE_GET_CURRENTROOMDATA_OFFSET UNITYSDK_OFFSET(0xC76E480)
#define RPG_CLIENT_ROGUEARCADEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC76CEE0)
#define RPG_CLIENT_ROGUEARCADEMODULE_LEAVEARCADE_OFFSET UNITYSDK_OFFSET(0xC76E240)
#define RPG_CLIENT_ROGUEARCADEMODULE_RESTARTARCADE_OFFSET UNITYSDK_OFFSET(0xC76E350)
#define RPG_CLIENT_ROGUEARCADEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xC76DA40)
#define RPG_CLIENT_ROGUEARCADEMODULE_SET_CURRENTROOMDATA_OFFSET UNITYSDK_OFFSET(0xC76E490)
#define RPG_CLIENT_ROGUEARCADEMODULE_STARTARCADE_OFFSET UNITYSDK_OFFSET(0xC76DC30)
#define RPG_CLIENT_ROGUEARCADEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xC76DB30)
#define RPG_CLIENT_ROGUEARCADEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76D050)
#define RPG_CLIENT_ROGUEARCADEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76D1F0)
#define RPG_CLIENT_ROGUEARCADEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC76E4A0)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEADVENTUREROOMGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xC76D120)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADEGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC76D940)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADELEAVESCRSP_OFFSET UNITYSDK_OFFSET(0xC76D740)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADERESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xC76D8D0)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xC76D4B0)
#define RPG_CLIENT_ROGUEARCADEMODULE__RANDOMGETROOMID_OFFSET UNITYSDK_OFFSET(0xC76DF50)
#define RPG_CLIENT_ROGUEARCADEMODULE__SWITCHSCENE_OFFSET UNITYSDK_OFFSET(0xC76D620)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76E5A0)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC76E520)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76E5B0)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76E610)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueArcadeModule_TypeDefinitionIndex = 63001;

	class RogueArcadeModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_827373C1CEDFE355* _LogicRandom; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ValidRoomIDListCache; // 0x18
		::RPG::Client::RogueArcadeRoomData* _CurrentRoomData_k__BackingField; // 0x20
		::System::UInt32 _AutoShowEntranceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueAdventureRoomGameFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEADVENTUREROOMGAMEFINISH_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueArcadeStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADESTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueArcadeLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADELEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueArcadeRestartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADERESTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueArcadeGetInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADEGETINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void StartArcade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_STARTARCADE_OFFSET))(this, a1);
		}

		::System::Void LeaveArcade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_LEAVEARCADE_OFFSET))(this);
		}

		::System::Void RestartArcade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_RESTARTARCADE_OFFSET))(this);
		}

		::System::Void _SwitchScene(::Class_1_FF03248024BAA97A_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__SWITCHSCENE_OFFSET))(this, a1);
		}

		::System::UInt32 _RandomGetRoomID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__RANDOMGETROOMID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueArcadeRoomData* get_CurrentRoomData()
		{
			return ((::RPG::Client::RogueArcadeRoomData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_GET_CURRENTROOMDATA_OFFSET))(this);
		}

		::System::Void set_CurrentRoomData(::RPG::Client::RogueArcadeRoomData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueArcadeRoomData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_SET_CURRENTROOMDATA_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
