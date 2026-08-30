#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_METHOD_4_E9F0F53C35927697_OFFSET UNITYSDK_OFFSET(0x1E822650)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_METHOD_4_F0E7EA49F396EC53_OFFSET UNITYSDK_OFFSET(0x1E822600)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E822640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSpecificMagicUnitNumParam_TypeDefinitionIndex = 21554;

	class SetDynamicValueByRogueSpecificMagicUnitNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F0E7EA49F396EC53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_METHOD_4_F0E7EA49F396EC53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E9F0F53C35927697(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecificMagicUnitNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICMAGICUNITNUMPARAM_METHOD_4_E9F0F53C35927697_OFFSET))(a1, a2);
		}
	};
}
