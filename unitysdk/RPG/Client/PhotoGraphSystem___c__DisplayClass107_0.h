#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_520;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F572F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0___NOTIFYSHOTNONPOSTPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0x9F5BA80)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem___c__DisplayClass107_0_TypeDefinitionIndex = 49383;

	class PhotoGraphSystem___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* targetAimList; // 0x10
		::RPG::Client::PhotoGraphSystem* __4__this; // 0x18
		::Class_0_16E4307DCC419505_520* pEnvSystem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void __NotifyShotNonPostProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0___NOTIFYSHOTNONPOSTPROCESS_B__0_OFFSET))(this);
		}
	};
}
