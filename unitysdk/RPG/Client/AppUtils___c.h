#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ThreadStart; }

#define RPG_CLIENT_APPUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6904C0)
#define RPG_CLIENT_APPUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC690500)
#define RPG_CLIENT_APPUTILS___C__LAUNCHCHECKSUMTHREAD_B__117_0_OFFSET UNITYSDK_OFFSET(0xC690510)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils___c_TypeDefinitionIndex = 59279;

	class AppUtils___c : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadStart** StaticGet___9__117_0()
		{
			return (::System::Threading::ThreadStart**)Il2CppClass::FromTypeDefinitionIndex(AppUtils___c_TypeDefinitionIndex)->GetStaticField(0x467C0);
		}
		static ::RPG::Client::AppUtils___c** StaticGet___9()
		{
			return (::RPG::Client::AppUtils___c**)Il2CppClass::FromTypeDefinitionIndex(AppUtils___c_TypeDefinitionIndex)->GetStaticField(0x467C8);
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
