#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_6_7FC60ACD1E8DE5C3_OFFSET UNITYSDK_OFFSET(0x1970EBA0)
#define RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_6_E786257BAF99B09F_OFFSET UNITYSDK_OFFSET(0x1970E9E0)
#define RPG_GAMECORE_FATECONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970EAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondFalseConfig_TypeDefinitionIndex = 18260;

	class FateCondFalseConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E786257BAF99B09F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_6_E786257BAF99B09F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7FC60ACD1E8DE5C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_6_7FC60ACD1E8DE5C3_OFFSET))(a1, a2);
		}
	};
}
