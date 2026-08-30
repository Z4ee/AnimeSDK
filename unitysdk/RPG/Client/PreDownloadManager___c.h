#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE1E270)
#define RPG_CLIENT_PREDOWNLOADMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1E2A0)
#define RPG_CLIENT_PREDOWNLOADMANAGER___C___CTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1AE1E2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadManager___c_TypeDefinitionIndex = 68274;

	class PreDownloadManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PreDownloadManager___c_TypeDefinitionIndex)->GetStaticField(0x5E930);
		}
		static ::RPG::Client::PreDownloadManager___c** StaticGet___9()
		{
			return (::RPG::Client::PreDownloadManager___c**)Il2CppClass::FromTypeDefinitionIndex(PreDownloadManager___c_TypeDefinitionIndex)->GetStaticField(0x5E938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C___CTOR_B__12_0_OFFSET))(this);
		}
	};
}
