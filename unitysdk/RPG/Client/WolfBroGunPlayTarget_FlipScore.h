#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_INIT_OFFSET UNITYSDK_OFFSET(0xCC3FE80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xCC3FEF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xCC400C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC3FFA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCC400B0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_FlipScore_TypeDefinitionIndex = 64284;

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

		::System::Void __iFixBaseProxy_Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
