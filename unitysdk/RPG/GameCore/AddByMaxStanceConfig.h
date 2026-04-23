#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADDBYMAXSTANCECONFIG_METHOD_2_169CCB0447BEE926_OFFSET UNITYSDK_OFFSET(0x1863CD40)
#define RPG_GAMECORE_ADDBYMAXSTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1863D150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddByMaxStanceConfig_TypeDefinitionIndex = 17276;

	class AddByMaxStanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddedRatio; // 0x10
		::RPG::GameCore::DynamicFloat* AddedValue; // 0x18
		::RPG::GameCore::DynamicFloat* MaxStance; // 0x20
		::RPG::GameCore::DynamicFloat* MinStance; // 0x28
		::System::Boolean IsForceMatchWeakness; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBYMAXSTANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_169CCB0447BEE926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddByMaxStanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddByMaxStanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBYMAXSTANCECONFIG_METHOD_2_169CCB0447BEE926_OFFSET))(a1, a2);
		}
	};
}
