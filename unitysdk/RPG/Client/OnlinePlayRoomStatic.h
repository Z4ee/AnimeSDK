#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_4.h"
#include "unitysdk/System/Object.h"

class Class_1_F7366FFC3674B888;
namespace RPG::Client { class MapDef; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET UNITYSDK_OFFSET(0xC2FC5B0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET UNITYSDK_OFFSET(0xC2FDB70)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0xC2FBE00)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET UNITYSDK_OFFSET(0xC2FE090)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET UNITYSDK_OFFSET(0xC2FDFC0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET UNITYSDK_OFFSET(0xC2FDE60)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC2F96B0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2FE200)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomStatic_TypeDefinitionIndex = 62089;

	class OnlinePlayRoomStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_OnlinePlayRoomChatGroupIconPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x1A770);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomDimensionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8830);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomAnchorMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8834);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMapIconID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8838);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFuncEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x883C);
		}
		static ::System::UInt32* StaticGet_VisitingToastCountDownTime()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomMaxPlayerCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8844);
		}
		static ::System::UInt32* StaticGet_PlayerRoomEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8848);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x884C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFloorID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8850);
		}
		static ::System::UInt32* StaticGet_PlayerRoomMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8854);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8858);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomVisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x885C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFunctionEntranceListID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8860);
		}
		static ::System::UInt32* StaticGet_PlayerRoomGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x8864);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionMap_1(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET))(a1);
		}

		static ::System::Boolean IsInOnlineSessionFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET))();
		}

		static ::System::Boolean CanGotoOnlineSessionMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET))();
		}

		static ::System::String* GetOperationRecordText(::Class_1_F7366FFC3674B888* a1)
		{
			return ((::System::String*(*)(::Class_1_F7366FFC3674B888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET))(a1);
		}

		static ::System::String* GetOperationRecordTextWithTime(::Enum_3_71AA90D596A09AC8_4 a1, ::System::Int64 a2)
		{
			return ((::System::String*(*)(::Enum_3_71AA90D596A09AC8_4, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsOnlinePlayRoomVisitFunctionUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET))();
		}
	};
}
