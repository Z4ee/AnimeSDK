#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WOLFBROGUNFIRE_METHOD_3_3743F157271959A4_OFFSET UNITYSDK_OFFSET(0x1EFA7C70)
#define RPG_GAMECORE_WOLFBROGUNFIRE_METHOD_3_8FE6202D3AE7ECEB_OFFSET UNITYSDK_OFFSET(0x1EFA7CB0)
#define RPG_GAMECORE_WOLFBROGUNFIRE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA7CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunFire_TypeDefinitionIndex = 19938;

	class WolfBroGunFire : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AttachPoint; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNFIRE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3743F157271959A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunFire*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunFire*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNFIRE_METHOD_3_3743F157271959A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FE6202D3AE7ECEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunFire* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNFIRE_METHOD_3_8FE6202D3AE7ECEB_OFFSET))(a1, a2);
		}
	};
}
