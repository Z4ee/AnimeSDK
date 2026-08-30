#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_2;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB25790)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB257C0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCB257D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageData___c_TypeDefinitionIndex = 61551;

	class ChenLingBattleStageData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattleStageData___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattleStageData___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleStageData___c_TypeDefinitionIndex)->GetStaticField(0x338E0);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_2*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_2*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleStageData___c_TypeDefinitionIndex)->GetStaticField(0x338E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::Class_1_8CF94E0F14A91ED3_2* a1, ::Class_1_8CF94E0F14A91ED3_2* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_2*, ::Class_1_8CF94E0F14A91ED3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}
	};
}
