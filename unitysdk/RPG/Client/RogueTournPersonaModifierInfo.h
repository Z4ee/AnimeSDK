#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_3.h"
#include "unitysdk/System/Object.h"

class Class_1_49AFAF7E1EDC93F8;
class Class_1_E85FDBE62E39A5EA_26;
namespace RPG::Client { class IRogueTournPersonaModifier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3C0910)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xA3C09B0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET UNITYSDK_OFFSET(0xA3C0BA0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xA3B4790)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0xA3B4670)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA3B4800)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2C30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaModifierInfo_TypeDefinitionIndex = 55209;

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

		::System::Void SyncAll(::Class_1_E85FDBE62E39A5EA_26* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET))(this, proto);
		}

		::System::Void SyncAddModifier(::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET))(this, proto);
		}

		::System::Void SyncUpdateModifier(::Class_1_49AFAF7E1EDC93F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET))(this, proto);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* GetModifiersBySourceType(::Enum_3_0F1B992870941C13_3 type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID, ::Enum_3_0F1B992870941C13_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* get_ModifierDatas()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET))(this);
		}
	};
}
