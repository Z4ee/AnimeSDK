#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A00FCC0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00FD00)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__GETSUBSTEPFINISHSTATE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A00FD10)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarDrinkMakingStep___c_TypeDefinitionIndex = 60802;

	class DrinkMakerBarDrinkMakingStep___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DrinkMakerBarDrinkMakingStep___c** StaticGet___9()
		{
			return (::RPG::Client::DrinkMakerBarDrinkMakingStep___c**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBarDrinkMakingStep___c_TypeDefinitionIndex)->GetStaticField(0x6B520);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBarDrinkMakingStep___c_TypeDefinitionIndex)->GetStaticField(0x6B528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSubStepFinishState_b__2_0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP___C__GETSUBSTEPFINISHSTATE_B__2_0_OFFSET))(this, a1);
		}
	};
}
