#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LOGINMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA703910)
#define RPG_CLIENT_LOGINMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA703950)
#define RPG_CLIENT_LOGINMODULE___C___ONCMDREGIONSTOPSCNOTIFY_B__15_0_OFFSET UNITYSDK_OFFSET(0xA703960)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule___c_TypeDefinitionIndex = 60566;

	class LoginModule___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LoginModule___c_TypeDefinitionIndex)->GetStaticField(0x33190);
		}
		static ::RPG::Client::LoginModule___c** StaticGet___9()
		{
			return (::RPG::Client::LoginModule___c**)Il2CppClass::FromTypeDefinitionIndex(LoginModule___c_TypeDefinitionIndex)->GetStaticField(0x33198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnCmdRegionStopScNotify_b__15_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___C___ONCMDREGIONSTOPSCNOTIFY_B__15_0_OFFSET))(this, isOk);
		}
	};
}
