#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ThreadStart; }

#define RPG_CLIENT_APPUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3295A0)
#define RPG_CLIENT_APPUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3295E0)
#define RPG_CLIENT_APPUTILS___C__LAUNCHCHECKSUMTHREAD_B__117_0_OFFSET UNITYSDK_OFFSET(0x1B3295F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils___c_TypeDefinitionIndex = 59424;

	class AppUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AppUtils___c** StaticGet___9()
		{
			return (::RPG::Client::AppUtils___c**)Il2CppClass::FromTypeDefinitionIndex(AppUtils___c_TypeDefinitionIndex)->GetStaticField(0x651B0);
		}
		static ::System::Threading::ThreadStart** StaticGet___9__117_0()
		{
			return (::System::Threading::ThreadStart**)Il2CppClass::FromTypeDefinitionIndex(AppUtils___c_TypeDefinitionIndex)->GetStaticField(0x651B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _launchChecksumThread_b__117_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS___C__LAUNCHCHECKSUMTHREAD_B__117_0_OFFSET))(this);
		}
	};
}
