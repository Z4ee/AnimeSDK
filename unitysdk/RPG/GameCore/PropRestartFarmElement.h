#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_91B3D61E8CD89C0A_OFFSET UNITYSDK_OFFSET(0x1D36D820)
#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_EA8EB41EDB4214A7_OFFSET UNITYSDK_OFFSET(0x1D36D8F0)
#define RPG_GAMECORE_PROPRESTARTFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36D8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRestartFarmElement_TypeDefinitionIndex = 21841;

	class PropRestartFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91B3D61E8CD89C0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRestartFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRestartFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_91B3D61E8CD89C0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA8EB41EDB4214A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRestartFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRestartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_METHOD_3_EA8EB41EDB4214A7_OFFSET))(a1, a2);
		}
	};
}
