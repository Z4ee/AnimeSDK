#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C14820)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C14860)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GETSHOPMARBLELIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x9C14870)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GET_HASNEWTOBUY_B__16_0_OFFSET UNITYSDK_OFFSET(0x9C14960)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealManager___c_TypeDefinitionIndex = 68930;

	class MarbleSealManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityMarble::MarbleSealData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityMarble::MarbleSealData*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x34590);
		}
		static ::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x34598);
		}
		static ::RPG::Client::ActivityMarble::MarbleSealManager___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarble::MarbleSealManager___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x345A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShopMarbleList_b__7_0(::RPG::Client::ActivityMarble::MarbleSealData* itemA, ::RPG::Client::ActivityMarble::MarbleSealData* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GETSHOPMARBLELIST_B__7_0_OFFSET))(this, itemA, itemB);
		}

		::System::Boolean _get_HasNewToBuy_b__16_0(::RPG::Client::ActivityMarble::MarbleSealData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GET_HASNEWTOBUY_B__16_0_OFFSET))(this, x);
		}
	};
}
