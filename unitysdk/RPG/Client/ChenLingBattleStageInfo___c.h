#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleStageData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC45E10)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC45E50)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__GETFINISHSTAGECOUNT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1CC45E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageInfo___c_TypeDefinitionIndex = 61553;

	class ChenLingBattleStageInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattleStageInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattleStageInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleStageInfo___c_TypeDefinitionIndex)->GetStaticField(0x37FB0);
		}
		static ::System::Func_2<::RPG::Client::ChenLingBattleStageData*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingBattleStageData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleStageInfo___c_TypeDefinitionIndex)->GetStaticField(0x37FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFinishStageCount_b__15_0(::RPG::Client::ChenLingBattleStageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__GETFINISHSTAGECOUNT_B__15_0_OFFSET))(this, a1);
		}
	};
}
