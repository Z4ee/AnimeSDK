#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_WAITPLANETFESLARGEBONUS_METHOD_3_16038F01C59057E0_OFFSET UNITYSDK_OFFSET(0x193BFA40)
#define RPG_CLIENT_WAITPLANETFESLARGEBONUS_METHOD_3_E422A36A8F3CAC94_OFFSET UNITYSDK_OFFSET(0x193BF930)
#define RPG_CLIENT_WAITPLANETFESLARGEBONUS__CTOR_OFFSET UNITYSDK_OFFSET(0x193BFA10)

namespace RPG::Client
{
	inline static constexpr unsigned int WaitPlanetFesLargeBonus_TypeDefinitionIndex = 9948;

	class WaitPlanetFesLargeBonus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESLARGEBONUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E422A36A8F3CAC94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitPlanetFesLargeBonus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitPlanetFesLargeBonus*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESLARGEBONUS_METHOD_3_E422A36A8F3CAC94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_16038F01C59057E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitPlanetFesLargeBonus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitPlanetFesLargeBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESLARGEBONUS_METHOD_3_16038F01C59057E0_OFFSET))(a1, a2);
		}
	};
}
