#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPVALUELOOKUPCONFIG_METHOD_2_67B54FBE4200AF31_OFFSET UNITYSDK_OFFSET(0x1D3C42F0)
#define RPG_GAMECORE_GROUPVALUELOOKUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C4480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupValueLookUpConfig_TypeDefinitionIndex = 16213;

	class GroupValueLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Group; // 0x10
		::System::UInt32 Value; // 0x14
		::System::Boolean IsState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPVALUELOOKUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_67B54FBE4200AF31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupValueLookUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupValueLookUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPVALUELOOKUPCONFIG_METHOD_2_67B54FBE4200AF31_OFFSET))(a1, a2);
		}
	};
}
