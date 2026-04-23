#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_12;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD5B980)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5B9C0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_0_OFFSET UNITYSDK_OFFSET(0xAD5B9D0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_1_OFFSET UNITYSDK_OFFSET(0xAD5BA10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordData___c_TypeDefinitionIndex = 59140;

	class PlayerChallengeRecordData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289_12*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289_12*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x67430);
		}
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289_12*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289_12*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x67438);
		}
		static ::RPG::Client::PlayerChallengeRecordData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengeRecordData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x67440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__1_0(::Class_1_1CBA230307F9C289_12* x, ::Class_1_1CBA230307F9C289_12* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289_12*, ::Class_1_1CBA230307F9C289_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_0_OFFSET))(this, x, y);
		}

		::System::Int32 __SyncLineup_b__1_1(::Class_1_1CBA230307F9C289_12* x, ::Class_1_1CBA230307F9C289_12* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289_12*, ::Class_1_1CBA230307F9C289_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_1_OFFSET))(this, x, y);
		}
	};
}
