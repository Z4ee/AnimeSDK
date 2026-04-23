#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA15DDF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA15DE30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__GETTITLEFROMNOTIFYBYUID_B__23_1_OFFSET UNITYSDK_OFFSET(0xA15DE40)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2Util___c_TypeDefinitionIndex = 69940;

	class DiceCombatV2Util___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*, ::System::UInt32>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2Util___c_TypeDefinitionIndex)->GetStaticField(0x65900);
		}
		static ::RPG::Client::DiceCombat::DiceCombatV2Util___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatV2Util___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2Util___c_TypeDefinitionIndex)->GetStaticField(0x65908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetTitleFromNotifyByUid_b__23_1(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* t)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__GETTITLEFROMNOTIFYBYUID_B__23_1_OFFSET))(this, t);
		}
	};
}
