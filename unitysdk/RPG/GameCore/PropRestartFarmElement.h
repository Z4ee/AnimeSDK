#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_68FAE26B5876A713_OFFSET UNITYSDK_OFFSET(0x17523E80)
#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_EA8EB41EDB4214A7_OFFSET UNITYSDK_OFFSET(0x17523F90)
#define RPG_GAMECORE_PROPRESTARTFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17523F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRestartFarmElement_TypeDefinitionIndex = 20271;

	class PropRestartFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68FAE26B5876A713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRestartFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRestartFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_68FAE26B5876A713_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA8EB41EDB4214A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRestartFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRestartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_EA8EB41EDB4214A7_OFFSET))(a1, a2);
		}
	};
}
