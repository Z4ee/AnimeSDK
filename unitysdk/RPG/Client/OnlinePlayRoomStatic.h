#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_4.h"
#include "unitysdk/System/Object.h"

class Class_1_F7366FFC3674B888;
namespace RPG::Client { class MapDef; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET UNITYSDK_OFFSET(0xD9EA410)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET UNITYSDK_OFFSET(0xD9EB870)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0xD9E9D80)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET UNITYSDK_OFFSET(0xD9EBCF0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET UNITYSDK_OFFSET(0xD9EBC20)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET UNITYSDK_OFFSET(0xD9EBB60)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD9E7590)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9EBE30)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomStatic_TypeDefinitionIndex = 66439;

	class OnlinePlayRoomStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_OnlinePlayRoomChatGroupIconPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x2AE30);
		}
		static ::System::UInt32* StaticGet_VisitingToastCountDownTime()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC660);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFunctionEntranceListID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC664);
		}
		static ::System::UInt32* StaticGet_PlayerRoomEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC668);
		}
		static ::System::UInt32* StaticGet_PlayerRoomGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC66C);
		}
		static ::System::UInt32* StaticGet_PlayerRoomMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC670);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomDimensionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC674);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMapIconID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC678);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomAnchorMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC67C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomVisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC680);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC684);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC688);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFuncEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC68C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomMaxPlayerCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC690);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFloorID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0xC694);
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
