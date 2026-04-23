#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WolfBroCartoonGunConfig; }

#define RPG_GAMECORE_WOLFBROCONFIG_METHOD_2_703A3283302E8C6F_OFFSET UNITYSDK_OFFSET(0x1910F360)
#define RPG_GAMECORE_WOLFBROCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1910F530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroConfig_TypeDefinitionIndex = 16105;

	class WolfBroConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 WolfBroID; // 0x10
		::Il2CppArray<::RPG::MVector3>* BulletList; // 0x18
		::RPG::GameCore::WolfBroCartoonGunConfig* CartoonGun; // 0x20
		::Il2CppArray<::RPG::GameCore::WolfBroCartoonGunConfig*>* CartoonGunList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_703A3283302E8C6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCONFIG_METHOD_2_703A3283302E8C6F_OFFSET))(a1, a2);
		}
	};
}
