#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A385ED0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A385F10)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__GETSELECTINGBUFFCOUNT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A385F20)

namespace RPG::Client::FateRin::Challenge
{
	inline static constexpr unsigned int FateRinChallengeLevelInfoViewModel___c_TypeDefinitionIndex = 76074;

	class FateRinChallengeLevelInfoViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Challenge::FateRinChallengeLevelInfoViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinChallengeLevelInfoViewModel___c_TypeDefinitionIndex)->GetStaticField(0xAA90);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinChallengeLevelInfoViewModel___c_TypeDefinitionIndex)->GetStaticField(0xAA98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSelectingBuffCount_b__4_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__GETSELECTINGBUFFCOUNT_B__4_0_OFFSET))(this, a1);
		}
	};
}
