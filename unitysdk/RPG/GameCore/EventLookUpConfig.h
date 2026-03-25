#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupLookUpConfig; }

#define RPG_GAMECORE_EVENTLOOKUPCONFIG_METHOD_2_428A3B50B444E805_OFFSET UNITYSDK_OFFSET(0x171AA660)
#define RPG_GAMECORE_EVENTLOOKUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171AA810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventLookUpConfig_TypeDefinitionIndex = 15000;

	class EventLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::System::UInt32>* Bank; // 0x18
		::Il2CppArray<::RPG::GameCore::GroupLookUpConfig*>* CondBank; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTLOOKUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_428A3B50B444E805(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EventLookUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EventLookUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTLOOKUPCONFIG_METHOD_2_428A3B50B444E805_OFFSET))(a1, a2);
		}
	};
}
