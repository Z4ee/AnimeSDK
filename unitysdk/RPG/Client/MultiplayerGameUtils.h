#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MULTIPLAYERGAMEUTILS_GETFIGHTROOMINFO_OFFSET UNITYSDK_OFFSET(0x1B6F5290)
#define RPG_CLIENT_MULTIPLAYERGAMEUTILS_GETFIGHTSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1B6F54C0)
#define RPG_CLIENT_MULTIPLAYERGAMEUTILS_TRYCLEARRECONNECTABLESTATE_OFFSET UNITYSDK_OFFSET(0x1B6F57B0)
#define RPG_CLIENT_MULTIPLAYERGAMEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6F5B10)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerGameUtils_TypeDefinitionIndex = 66354;

	class MultiplayerGameUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__FightSerialNumber()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MultiplayerGameUtils_TypeDefinitionIndex)->GetStaticField(0x26EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEUTILS__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GetFightRoomInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEUTILS_GETFIGHTROOMINFO_OFFSET))();
		}

		static ::System::String* GetFightSerialNumber(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEUTILS_GETFIGHTSERIALNUMBER_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* TryClearReconnectableState()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEUTILS_TRYCLEARRECONNECTABLESTATE_OFFSET))();
		}
	};
}
