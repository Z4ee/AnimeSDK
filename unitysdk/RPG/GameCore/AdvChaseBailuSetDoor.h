#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCHASEBAILUSETDOOR_METHOD_3_2F085F441B4B7A18_OFFSET UNITYSDK_OFFSET(0x1BE17EE0)
#define RPG_GAMECORE_ADVCHASEBAILUSETDOOR_METHOD_3_607243DD6713F869_OFFSET UNITYSDK_OFFSET(0x1BE17EA0)
#define RPG_GAMECORE_ADVCHASEBAILUSETDOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE17ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvChaseBailuSetDoor_TypeDefinitionIndex = 21420;

	class AdvChaseBailuSetDoor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 DoorIndex; // 0x18
		::System::Boolean Open; // 0x1C
		::System::Boolean Inverse; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILUSETDOOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_607243DD6713F869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvChaseBailuSetDoor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvChaseBailuSetDoor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILUSETDOOR_METHOD_3_607243DD6713F869_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F085F441B4B7A18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvChaseBailuSetDoor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvChaseBailuSetDoor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHASEBAILUSETDOOR_METHOD_3_2F085F441B4B7A18_OFFSET))(a1, a2);
		}
	};
}
