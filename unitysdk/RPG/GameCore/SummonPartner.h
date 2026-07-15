#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SUMMONPARTNER_METHOD_3_87CAE12C7A4A24FA_OFFSET UNITYSDK_OFFSET(0x1B42EA80)
#define RPG_GAMECORE_SUMMONPARTNER_METHOD_3_D0A3A446E2B1AEDB_OFFSET UNITYSDK_OFFSET(0x1B42EA30)
#define RPG_GAMECORE_SUMMONPARTNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42EA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonPartner_TypeDefinitionIndex = 21876;

	class SummonPartner : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::String* ConfigPath; // 0x20
		::System::String* MemberName; // 0x28
		::RPG::MVector3 PosOffset; // 0x30
		::System::Single AngleOffset; // 0x3C
		::System::Boolean EnableEmotion; // 0x40
		::System::Boolean RefreshFormation; // 0x41
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPartnerCreate; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONPARTNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0A3A446E2B1AEDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonPartner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonPartner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONPARTNER_METHOD_3_D0A3A446E2B1AEDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87CAE12C7A4A24FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonPartner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONPARTNER_METHOD_3_87CAE12C7A4A24FA_OFFSET))(a1, a2);
		}
	};
}
