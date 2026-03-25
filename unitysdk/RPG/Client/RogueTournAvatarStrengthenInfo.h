#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IAvatarComparer; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_CREATESTRENGTHENEDAVATARCOMPARER_OFFSET UNITYSDK_OFFSET(0xA36C6E0)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA36C640)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_GETSTRENGTHENEDAVATARS_OFFSET UNITYSDK_OFFSET(0xA36CAA0)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_GETSTRENGTHENTEXTBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA36CF70)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA36C440)
#define RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA36C3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAvatarStrengthenInfo_TypeDefinitionIndex = 55014;

	class RogueTournAvatarStrengthenInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*>>* _AvatarID2StrengthenTextAndParam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* CreateStrengthenedAvatarComparer()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_CREATESTRENGTHENEDAVATARCOMPARER_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetStrengthenedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_GETSTRENGTHENEDAVATARS_OFFSET))(this);
		}

		::System::String* GetStrengthenTextByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAVATARSTRENGTHENINFO_GETSTRENGTHENTEXTBYAVATARID_OFFSET))(this, avatarID);
		}
	};
}
