#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM_METHOD_2_7CA2615DEE69DD8C_OFFSET UNITYSDK_OFFSET(0x172B1EF0)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x172B2010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingBlackListItem_TypeDefinitionIndex = 15933;

	class HoYoGroupStreamingBlackListItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7CA2615DEE69DD8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoYoGroupStreamingBlackListItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoYoGroupStreamingBlackListItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM_METHOD_2_7CA2615DEE69DD8C_OFFSET))(a1, a2);
		}
	};
}
