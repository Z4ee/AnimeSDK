#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_METHOD_3_47ED0A627A9B7D1D_OFFSET UNITYSDK_OFFSET(0x19C44140)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_METHOD_3_A517F704D75ABD92_OFFSET UNITYSDK_OFFSET(0x19C440D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C44110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSpecialCellNum_TypeDefinitionIndex = 20574;

	class SetDynamicValueByRogueSpecialCellNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A517F704D75ABD92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_METHOD_3_A517F704D75ABD92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47ED0A627A9B7D1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_METHOD_3_47ED0A627A9B7D1D_OFFSET))(a1, a2);
		}
	};
}
