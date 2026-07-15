#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTalentDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA59440)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA59480)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__GETALLTALENTDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0x1AA59490)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPermanentTalentInfo___c_TypeDefinitionIndex = 64847;

	class RogueTournPermanentTalentInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPermanentTalentInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPermanentTalentInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPermanentTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C270);
		}
		static ::System::Func_2<::RPG::Client::RogueTalentDataItem*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTalentDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPermanentTalentInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllTalentData_b__9_0(::RPG::Client::RogueTalentDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTalentDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__GETALLTALENTDATA_B__9_0_OFFSET))(this, a1);
		}
	};
}
