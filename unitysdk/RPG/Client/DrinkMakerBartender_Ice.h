#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerIceRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_ICE_CREATE_OFFSET UNITYSDK_OFFSET(0x9502410)
#define RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_ANCHORPATH_OFFSET UNITYSDK_OFFSET(0x9502F30)
#define RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_AUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x9502F50)
#define RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9502D70)
#define RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9502F10)
#define RPG_CLIENT_DRINKMAKERBARTENDER_ICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9502F00)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_Ice_TypeDefinitionIndex = 51651;

	class DrinkMakerBartender_Ice : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerIceRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_ICE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBartender_Ice* Create(::RPG::GameCore::DrinkMakerIceRow* row)
		{
			return ((::RPG::Client::DrinkMakerBartender_Ice*(*)(::RPG::GameCore::DrinkMakerIceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_ICE_CREATE_OFFSET))(row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_ID_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_AnchorPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_ANCHORPATH_OFFSET))(this);
		}

		::System::String* get_AudioEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_ICE_GET_AUDIOEVENT_OFFSET))(this);
		}
	};
}
