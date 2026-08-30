#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SOCONFIGINFO_METHOD_2_625276801A534713_OFFSET UNITYSDK_OFFSET(0x1DB2E370)
#define RPG_GAMECORE_SOCONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2E460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SOConfigInfo_TypeDefinitionIndex = 17038;

	class SOConfigInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 SlotIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCONFIGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_625276801A534713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOConfigInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOConfigInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCONFIGINFO_METHOD_2_625276801A534713_OFFSET))(a1, a2);
		}
	};
}
