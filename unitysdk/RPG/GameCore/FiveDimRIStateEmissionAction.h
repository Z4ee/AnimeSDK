#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MColor.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_METHOD_3_0DEB56EA691156C1_OFFSET UNITYSDK_OFFSET(0x19751680)
#define RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_METHOD_3_A68665766385157C_OFFSET UNITYSDK_OFFSET(0x197516F0)
#define RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x197516D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRIStateEmissionAction_TypeDefinitionIndex = 17788;

	class FiveDimRIStateEmissionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::RPG::MColor EmissionColor; // 0x14
		::System::Single IntensityFrom; // 0x24
		::System::Single IntensityTo; // 0x28
		::System::Single Interval; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DEB56EA691156C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRIStateEmissionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_METHOD_3_0DEB56EA691156C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A68665766385157C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_METHOD_3_A68665766385157C_OFFSET))(a1, a2);
		}
	};
}
