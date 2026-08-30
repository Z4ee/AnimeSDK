#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE02470)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE024B0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AE024C0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_1_OFFSET UNITYSDK_OFFSET(0x1AE02500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordData___c_TypeDefinitionIndex = 64337;

	class PlayerChallengeRecordData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289*>** StaticGet___9__2_1()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x5C3D0);
		}
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x5C3D8);
		}
		static ::RPG::Client::PlayerChallengeRecordData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengeRecordData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x5C3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__2_0(::Class_1_1CBA230307F9C289* a1, ::Class_1_1CBA230307F9C289* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289*, ::Class_1_1CBA230307F9C289*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __SyncLineup_b__2_1(::Class_1_1CBA230307F9C289* a1, ::Class_1_1CBA230307F9C289* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289*, ::Class_1_1CBA230307F9C289*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_1_OFFSET))(this, a1, a2);
		}
	};
}
