#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantBehaviorConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFBEHAVIORDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCE34780)
#define RPG_CLIENT_ELFBEHAVIORDATA_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xCE347F0)
#define RPG_CLIENT_ELFBEHAVIORDATA_GET_BEHAVIORJSON_OFFSET UNITYSDK_OFFSET(0xCE34810)
#define RPG_CLIENT_ELFBEHAVIORDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCE348B0)
#define RPG_CLIENT_ELFBEHAVIORDATA_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xCE34800)
#define RPG_CLIENT_ELFBEHAVIORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE347E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfBehaviorData_TypeDefinitionIndex = 63717;

	class ElfBehaviorData : public ::System::Object
	{
	public:
		::System::UInt32 _BehaviorID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfBehaviorData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfBehaviorData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_BehaviorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORDATA_GET_BEHAVIORID_OFFSET))(this);
		}

		::System::Void set_BehaviorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORDATA_SET_BEHAVIORID_OFFSET))(this, a1);
		}

		::System::String* get_BehaviorJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORDATA_GET_BEHAVIORJSON_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantBehaviorConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantBehaviorConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORDATA_GET__ROW_OFFSET))(this);
		}
	};
}
