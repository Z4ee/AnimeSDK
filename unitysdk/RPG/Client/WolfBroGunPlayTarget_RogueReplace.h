#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_Replace.h"

class Class_1_2BF31F3092BDFD9E;
class Class_2_00556FF1F183E0F4;
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayTarget_RogueHP; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA79A3B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GETREPLACEPREFAB_OFFSET UNITYSDK_OFFSET(0xA79A4A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GET_ROGUEROADMAP_OFFSET UNITYSDK_OFFSET(0xA79A710)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_ONREPLACEPREFABINSTANCED_OFFSET UNITYSDK_OFFSET(0xA79A630)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA79A780)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA79A790)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueReplace_TypeDefinitionIndex = 56133;

	class WolfBroGunPlayTarget_RogueReplace : public ::RPG::Client::WolfBroGunPlayTarget_Replace
	{
	public:
		::RPG::Client::WolfBroGunPlayTarget_RogueHP* coin; // 0xD8
		::RPG::Client::WolfBroGunPlayTarget_RogueHP* miracle; // 0xE0
		::RPG::Client::WolfBroGunPlayTarget_RogueHP* ruanmei; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_AWAKE_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayTarget* GetReplacePrefab(::Class_1_2BF31F3092BDFD9E* a1)
		{
			return ((::RPG::Client::WolfBroGunPlayTarget*(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GETREPLACEPREFAB_OFFSET))(this, a1);
		}

		::System::Void OnReplacePrefabInstanced(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_ONREPLACEPREFABINSTANCED_OFFSET))(this, a1, a2);
		}

		::Class_2_00556FF1F183E0F4* get_RogueRoadMap()
		{
			return ((::Class_2_00556FF1F183E0F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE_GET_ROGUEROADMAP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEREPLACE___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}
