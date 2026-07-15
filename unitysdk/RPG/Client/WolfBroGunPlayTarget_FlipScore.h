#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_INIT_OFFSET UNITYSDK_OFFSET(0x17429A70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x17429AE0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIPSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x17429B90)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_FlipScore_TypeDefinitionIndex = 65655;

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
	};
}
