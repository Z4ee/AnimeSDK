#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_1DEF7ECEE7F7C088_OFFSET UNITYSDK_OFFSET(0xCC3E860)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xCC3E850)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0xCC3E650)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xCC3E500)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xCC3E740)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Boom_TypeDefinitionIndex = 64280;

	class WolfBroGunPlayTarget_Boom : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Single radius; // 0xD8
		::System::String* onBoomCustomString; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_B961D33AD47A2113()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_B961D33AD47A2113_OFFSET))(this);
		}

		::System::Void Method_6_890F5FC885825F9E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_890F5FC885825F9E_OFFSET))(this, a1);
		}

		::System::Void Method_6_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_6_1DEF7ECEE7F7C088(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_METHOD_6_1DEF7ECEE7F7C088_OFFSET))(this, a1);
		}
	};
}
