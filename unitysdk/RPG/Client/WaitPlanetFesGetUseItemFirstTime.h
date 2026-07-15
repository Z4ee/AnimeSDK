#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_0CE1FC8757E09E2B_OFFSET UNITYSDK_OFFSET(0x1B9F25F0)
#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_1B6B1FE3D3DE58AE_OFFSET UNITYSDK_OFFSET(0x1B9F2520)
#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F25E0)

namespace RPG::Client
{
	inline static constexpr unsigned int WaitPlanetFesGetUseItemFirstTime_TypeDefinitionIndex = 9964;

	class WaitPlanetFesGetUseItemFirstTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B6B1FE3D3DE58AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_1B6B1FE3D3DE58AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CE1FC8757E09E2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_METHOD_3_0CE1FC8757E09E2B_OFFSET))(a1, a2);
		}
	};
}
