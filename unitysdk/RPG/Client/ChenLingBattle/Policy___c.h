#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLE_POLICY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB093D0)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB09410)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xCB09420)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Policy___c_TypeDefinitionIndex = 75894;

	class Policy___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::Policy___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::Policy___c**)Il2CppClass::FromTypeDefinitionIndex(Policy___c_TypeDefinitionIndex)->GetStaticField(0x2E170);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::CardConfig*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::CardConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Policy___c_TypeDefinitionIndex)->GetStaticField(0x2E178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::CardConfig* __ctor_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY___C___CTOR_B__1_0_OFFSET))(this, a1);
		}
	};
}
