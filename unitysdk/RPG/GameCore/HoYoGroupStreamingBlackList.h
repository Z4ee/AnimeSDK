#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoYoGroupStreamingBlackListItem; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST_METHOD_2_1B980567D6D446BE_OFFSET UNITYSDK_OFFSET(0x18A06A00)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18A06B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingBlackList_TypeDefinitionIndex = 16460;

	class HoYoGroupStreamingBlackList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoYoGroupStreamingBlackListItem*>* BlackList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B980567D6D446BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoYoGroupStreamingBlackList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoYoGroupStreamingBlackList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST_METHOD_2_1B980567D6D446BE_OFFSET))(a1, a2);
		}
	};
}
