#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_METHOD_4_19819957C09F8385_OFFSET UNITYSDK_OFFSET(0x1E822590)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_METHOD_4_F40D76AE7448D221_OFFSET UNITYSDK_OFFSET(0x1E822540)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E822580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSpecialCellNumParam_TypeDefinitionIndex = 21548;

	class SetDynamicValueByRogueSpecialCellNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F40D76AE7448D221(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_METHOD_4_F40D76AE7448D221_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19819957C09F8385(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUMPARAM_METHOD_4_19819957C09F8385_OFFSET))(a1, a2);
		}
	};
}
