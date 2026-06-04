#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CRPLensFlarePlugin; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define RPG_CLIENT_CRPLENSFLAREPLUGIN___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB456FD0)
#define RPG_CLIENT_CRPLENSFLAREPLUGIN___C__DISPLAYCLASS1_0___ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB4575E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPLensFlarePlugin___c__DisplayClass1_0_TypeDefinitionIndex = 65609;

	class CRPLensFlarePlugin___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::CRPLensFlarePlugin* __4__this; // 0x10
		::RPG::Client::OnAssetOperationDelegate* __9__0; // 0x18
		::System::Int32 totalLoadCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AsyncLoad_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLENSFLAREPLUGIN___C__DISPLAYCLASS1_0___ASYNCLOAD_B__0_OFFSET))(this, a1);
		}
	};
}
