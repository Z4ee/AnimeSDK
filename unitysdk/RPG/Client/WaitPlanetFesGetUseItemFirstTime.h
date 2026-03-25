#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_0CE1FC8757E09E2B_OFFSET UNITYSDK_OFFSET(0x16E8E490)
#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_1BB6A193BFA0B3B7_OFFSET UNITYSDK_OFFSET(0x16E8E380)
#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8E460)

namespace RPG::Client
{
	inline static constexpr unsigned int WaitPlanetFesGetUseItemFirstTime_TypeDefinitionIndex = 9973;

	class WaitPlanetFesGetUseItemFirstTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BB6A193BFA0B3B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_1BB6A193BFA0B3B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CE1FC8757E09E2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_0CE1FC8757E09E2B_OFFSET))(a1, a2);
		}
	};
}
