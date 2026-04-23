#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG_METHOD_2_6C19AFF16076E52E_OFFSET UNITYSDK_OFFSET(0x1910F0F0)
#define RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1910F350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroCartoonGunConfig_TypeDefinitionIndex = 16104;

	class WolfBroCartoonGunConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigID; // 0x14
		::System::UInt32 InitValue; // 0x18
		::RPG::GameCore::PropState ResetState; // 0x1C
		::RPG::GameCore::PropState ActivatedState; // 0x20
		::Il2CppArray<::RPG::MVector3>* BulletList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6C19AFF16076E52E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroCartoonGunConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroCartoonGunConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG_METHOD_2_6C19AFF16076E52E_OFFSET))(a1, a2);
		}
	};
}
