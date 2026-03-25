#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_2;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9352880)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93528B0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x93528C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageData___c_TypeDefinitionIndex = 49859;

	class ChenLingBattleStageData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattleStageData___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattleStageData___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleStageData___c_TypeDefinitionIndex)->GetStaticField(0x46460);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_2*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_2*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleStageData___c_TypeDefinitionIndex)->GetStaticField(0x46468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::Class_1_8CF94E0F14A91ED3_2* x, ::Class_1_8CF94E0F14A91ED3_2* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_2*, ::Class_1_8CF94E0F14A91ED3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C___CTOR_B__0_0_OFFSET))(this, x, y);
		}
	};
}
