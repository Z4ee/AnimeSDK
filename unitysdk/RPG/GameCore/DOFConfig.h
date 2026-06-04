#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DOFCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196839F0)
#define RPG_GAMECORE_DOFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1968A5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DOFConfig_TypeDefinitionIndex = 23076;

	class DOFConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FocusDistance; // 0x10
		::System::Single FStop; // 0x14
		::System::Single SensorWidth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DOFConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DOFConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
