#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_33;
class Class_1_BB4B99DE4C2501EC_7;
namespace RPG::Client { class IRogueTournPersonaModifier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7A1D80)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1C7A21C0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET UNITYSDK_OFFSET(0x1C7A24A0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1C7A1F40)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0x1C7A1E10)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1C7A1FB0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A2580)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaModifierInfo_TypeDefinitionIndex = 67697;

	class RogueTournPersonaModifierInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::IRogueTournPersonaModifier*>* _ModifierDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_0A99AF1699F7F17E_33* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncAddModifier(::Class_1_BB4B99DE4C2501EC_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void SyncUpdateModifier(::Class_1_BB4B99DE4C2501EC_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* GetModifiersBySourceType(::Enum_3_0F1B992870941C13_4 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* get_ModifierDatas()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET))(this);
		}
	};
}
