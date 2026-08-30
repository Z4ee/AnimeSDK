#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_5E15576C1B05EBA8_OFFSET UNITYSDK_OFFSET(0x1D21DAC0)
#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_E87B95A19586D15F_OFFSET UNITYSDK_OFFSET(0x1D21DB00)
#define RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21DAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitGridFightStatisticsBinding_TypeDefinitionIndex = 22288;

	class InitGridFightStatisticsBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTopDamagerRoleChanged; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDynamicEquipmentTrigger; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E15576C1B05EBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitGridFightStatisticsBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitGridFightStatisticsBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_5E15576C1B05EBA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E87B95A19586D15F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITGRIDFIGHTSTATISTICSBINDING_METHOD_3_E87B95A19586D15F_OFFSET))(a1, a2);
		}
	};
}
