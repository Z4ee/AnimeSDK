#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC636F10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC636F50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GETSHOPMARBLELIST_B__7_0_OFFSET UNITYSDK_OFFSET(0xC636F60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GET_HASNEWTOBUY_B__16_0_OFFSET UNITYSDK_OFFSET(0xC6370A0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealManager___c_TypeDefinitionIndex = 74572;

	class MarbleSealManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x62210);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityMarble::MarbleSealData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityMarble::MarbleSealData*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x62218);
		}
		static ::RPG::Client::ActivityMarble::MarbleSealManager___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarble::MarbleSealManager___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x62220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShopMarbleList_b__7_0(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::RPG::Client::ActivityMarble::MarbleSealData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GETSHOPMARBLELIST_B__7_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_HasNewToBuy_b__16_0(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GET_HASNEWTOBUY_B__16_0_OFFSET))(this, a1);
		}
	};
}
