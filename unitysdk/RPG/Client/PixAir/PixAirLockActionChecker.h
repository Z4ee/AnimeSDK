#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirLockActionName.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirGameSession; }
namespace RPG::GameCore { class PixAirLockActionConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_GETTEXTHINT_OFFSET UNITYSDK_OFFSET(0x1A0CCD40)
#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_ISBUYEQUIPALLOWED_OFFSET UNITYSDK_OFFSET(0x1A0CCC80)
#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_ISCONTENTSELECTALLOWED_OFFSET UNITYSDK_OFFSET(0x1A0CCA90)
#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_ISSELLEQUIPALLOWED_OFFSET UNITYSDK_OFFSET(0x1A0CCCE0)
#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER__CHECKACTION_OFFSET UNITYSDK_OFFSET(0x1A0CCAE0)
#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C4190)
#define RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER__GETCURRENTROWS_OFFSET UNITYSDK_OFFSET(0x1A0CCEC0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirLockActionChecker_TypeDefinitionIndex = 75316;

	class PixAirLockActionChecker : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirGameSession* _Session; // 0x10

		::System::Void _ctor(::RPG::Client::PixAir::PixAirGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsContentSelectAllowed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_ISCONTENTSELECTALLOWED_OFFSET))(this, a1);
		}

		::System::Boolean IsBuyEquipAllowed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_ISBUYEQUIPALLOWED_OFFSET))(this, a1);
		}

		::System::Boolean IsSellEquipAllowed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_ISSELLEQUIPALLOWED_OFFSET))(this, a1);
		}

		::System::String* GetTextHint(::RPG::GameCore::PixAirLockActionName a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PixAirLockActionName))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER_GETTEXTHINT_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAction(::RPG::GameCore::PixAirLockActionName a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PixAirLockActionName, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER__CHECKACTION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::PixAirLockActionConfigRow*>* _GetCurrentRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PixAirLockActionConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOCKACTIONCHECKER__GETCURRENTROWS_OFFSET))(this);
		}
	};
}
