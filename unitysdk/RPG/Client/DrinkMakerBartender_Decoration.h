#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerDecorationRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_CREATE_OFFSET UNITYSDK_OFFSET(0x9502B80)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_ANCHORPATH_OFFSET UNITYSDK_OFFSET(0x9502EE0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_ID_OFFSET UNITYSDK_OFFSET(0x9502CD0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9502EC0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9502EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_Decoration_TypeDefinitionIndex = 51652;

	class DrinkMakerBartender_Decoration : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerDecorationRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBartender_Decoration* Create(::RPG::GameCore::DrinkMakerDecorationRow* row)
		{
			return ((::RPG::Client::DrinkMakerBartender_Decoration*(*)(::RPG::GameCore::DrinkMakerDecorationRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_DECORATION_CREATE_OFFSET))(row);
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
