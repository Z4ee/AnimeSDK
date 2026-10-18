#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC54CA10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC54CA50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GETSHOPMARBLELIST_B__8_0_OFFSET UNITYSDK_OFFSET(0xC54CA60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GET_HASNEWTOBUY_B__18_0_OFFSET UNITYSDK_OFFSET(0xC54CBC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__RPG_CLIENT_ACTIVITYMARBLE_IMARBLEMANAGER_GETAVAILABLEMARBLELISTINTERFACE_B__11_0_OFFSET UNITYSDK_OFFSET(0xC54CBB0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealManager___c_TypeDefinitionIndex = 75972;

	class MarbleSealManager___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::IMarbleData*>** StaticGet___9__11_0()
		{
			return (::System::Converter_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::IMarbleData*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x2DAE0);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityMarble::MarbleSealData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityMarble::MarbleSealData*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x2DAE8);
		}
		static ::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x2DAF0);
		}
		static ::RPG::Client::ActivityMarble::MarbleSealManager___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMarble::MarbleSealManager___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealManager___c_TypeDefinitionIndex)->GetStaticField(0x2DAF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShopMarbleList_b__8_0(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::RPG::Client::ActivityMarble::MarbleSealData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GETSHOPMARBLELIST_B__8_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityMarble::IMarbleData* _RPG_Client_ActivityMarble_IMarbleManager_GetAvailableMarbleListInterface_b__11_0(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__RPG_CLIENT_ACTIVITYMARBLE_IMARBLEMANAGER_GETAVAILABLEMARBLELISTINTERFACE_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasNewToBuy_b__18_0(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER___C__GET_HASNEWTOBUY_B__18_0_OFFSET))(this, a1);
		}
	};
}
