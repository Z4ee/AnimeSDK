#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A87C340)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87C380)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER___C__GETPROPERALLYENTITYID_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A87C390)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleInputHandler___c_TypeDefinitionIndex = 62881;

	class MarbleBattleInputHandler___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MarbleBattleInputHandler___c** StaticGet___9()
		{
			return (::RPG::Client::MarbleBattleInputHandler___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleInputHandler___c_TypeDefinitionIndex)->GetStaticField(0x44790);
		}
		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleInputHandler___c_TypeDefinitionIndex)->GetStaticField(0x44798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetProperAllyEntityID_b__0_0(::RPG::Client::MarbleBattleSealData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER___C__GETPROPERALLYENTITYID_B__0_0_OFFSET))(this, a1);
		}
	};
}
