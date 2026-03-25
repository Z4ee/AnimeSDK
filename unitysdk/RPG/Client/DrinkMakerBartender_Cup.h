#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9502210)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_AUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x9502E80)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9502E60)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9502E10)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x9502D20)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9502DF0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9502E30)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9502EA0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_CUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9502DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_Cup_TypeDefinitionIndex = 51649;

	class DrinkMakerBartender_Cup : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCupRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBartender_Cup* Create(::RPG::GameCore::DrinkMakerCupRow* row)
		{
			return ((::RPG::Client::DrinkMakerBartender_Cup*(*)(::RPG::GameCore::DrinkMakerCupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_CREATE_OFFSET))(row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_ID_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_CAPACITY_OFFSET))(this);
		}

		::System::String* get_AudioEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_AUDIOEVENT_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerCupRow* get_Row()
		{
			return ((::RPG::GameCore::DrinkMakerCupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CUP_GET_ROW_OFFSET))(this);
		}
	};
}
