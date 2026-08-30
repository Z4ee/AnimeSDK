#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerDecorationRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_CREATE_OFFSET UNITYSDK_OFFSET(0xCD8D3E0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_ANCHORPATH_OFFSET UNITYSDK_OFFSET(0xCD8DA20)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_ID_OFFSET UNITYSDK_OFFSET(0xCD8D560)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xCD8D9D0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0xCD8D9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_Decoration_TypeDefinitionIndex = 63667;

	class DrinkMakerBartender_Decoration : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerDecorationRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBartender_Decoration* Create(::RPG::GameCore::DrinkMakerDecorationRow* a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Decoration*(*)(::RPG::GameCore::DrinkMakerDecorationRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_ID_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_AnchorPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_ANCHORPATH_OFFSET))(this);
		}
	};
}
