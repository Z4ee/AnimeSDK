#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_METHOD_3_6EB9BA363F06A9C1_OFFSET UNITYSDK_OFFSET(0x18E57AD0)
#define RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_METHOD_3_A1222DB2B8255E28_OFFSET UNITYSDK_OFFSET(0x18E57B50)
#define RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E57B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAlleyTransportEnergyHint_TypeDefinitionIndex = 23301;

	class ShowAlleyTransportEnergyHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6EB9BA363F06A9C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAlleyTransportEnergyHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAlleyTransportEnergyHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_METHOD_3_6EB9BA363F06A9C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1222DB2B8255E28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAlleyTransportEnergyHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAlleyTransportEnergyHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_METHOD_3_A1222DB2B8255E28_OFFSET))(a1, a2);
		}
	};
}
