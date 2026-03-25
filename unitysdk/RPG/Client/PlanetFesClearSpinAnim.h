#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PLANETFESCLEARSPINANIM_METHOD_3_72720FDFF0A55CAD_OFFSET UNITYSDK_OFFSET(0x16E8B990)
#define RPG_CLIENT_PLANETFESCLEARSPINANIM_METHOD_3_F462F47445B9BF39_OFFSET UNITYSDK_OFFSET(0x16E8B880)
#define RPG_CLIENT_PLANETFESCLEARSPINANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8B960)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesClearSpinAnim_TypeDefinitionIndex = 9976;

	class PlanetFesClearSpinAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCLEARSPINANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F462F47445B9BF39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesClearSpinAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesClearSpinAnim*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCLEARSPINANIM_METHOD_3_F462F47445B9BF39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72720FDFF0A55CAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::PlanetFesClearSpinAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::PlanetFesClearSpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCLEARSPINANIM_METHOD_3_72720FDFF0A55CAD_OFFSET))(a1, a2);
		}
	};
}
