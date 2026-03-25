#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_INIT_OFFSET UNITYSDK_OFFSET(0xA796C40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xA796CB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_2461C65E55CF590F_OFFSET UNITYSDK_OFFSET(0xA796E60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xA796D40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA796E50)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_FlipScore_TypeDefinitionIndex = 56124;

	class WolfBroGunPlayTarget_FlipScore : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Single positiveScore; // 0xD8
		::System::Single negativeScore; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init(::Class_1_2BF31F3092BDFD9E* P0, ::RPG::Client::WolfBroGunPlayTarget_Group* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1);
		}

		::System::Void Method_6_2461C65E55CF590F(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_2461C65E55CF590F_OFFSET))(this, P0);
		}
	};
}
