#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_TABEHAVIORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26BDB0)
#define RPG_CLIENT_TABEHAVIORBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xB26C530)
#define RPG_CLIENT_TABEHAVIORBASE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xB26C600)
#define RPG_CLIENT_TABEHAVIORBASE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB26C620)
#define RPG_CLIENT_TABEHAVIORBASE_GET_TICKMODE_OFFSET UNITYSDK_OFFSET(0xB26C640)
#define RPG_CLIENT_TABEHAVIORBASE_LATETICK_OFFSET UNITYSDK_OFFSET(0xB26C4D0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB26BE40)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB26C590)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB26BEF0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xB26BD10)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_646174E3BA50E41A_OFFSET UNITYSDK_OFFSET(0xB26BD60)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_8457B19F3C23386D_OFFSET UNITYSDK_OFFSET(0xB26C030)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_10_OFFSET UNITYSDK_OFFSET(0xB26C3F0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_11_OFFSET UNITYSDK_OFFSET(0xB26C430)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB26BF70)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB26BFB0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB26BFF0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xB26C270)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xB26C2B0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0xB26C2F0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0xB26C330)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_8_OFFSET UNITYSDK_OFFSET(0xB26C370)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_9_OFFSET UNITYSDK_OFFSET(0xB26C3B0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB26BF30)
#define RPG_CLIENT_TABEHAVIORBASE_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xB26C5F0)
#define RPG_CLIENT_TABEHAVIORBASE_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB26C610)
#define RPG_CLIENT_TABEHAVIORBASE_SET_TICKMODE_OFFSET UNITYSDK_OFFSET(0xB26C630)
#define RPG_CLIENT_TABEHAVIORBASE_TICK_OFFSET UNITYSDK_OFFSET(0xB26C470)
#define RPG_CLIENT_TABEHAVIORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB26C650)
#define RPG_CLIENT_TABEHAVIORBASE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26C660)

namespace RPG::Client
{
	inline static constexpr unsigned int TABehaviorBase_TypeDefinitionIndex = 65256;

	class TABehaviorBase : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean IsExecuteInEditMode; // 0x18
		::System::Boolean IsNeedTick; // 0x19
		::System::Boolean IsNeedLateTick; // 0x1A
		::System::Boolean IsNeedEndOfLateTick; // 0x1B
		::System::Boolean IsNeedRenderTick; // 0x1C
		::System::Boolean IsPreloading; // 0x1D
		::System::Boolean _IsEnabled_k__BackingField; // 0x1E
		::System::Boolean _IsVisible_k__BackingField; // 0x1F
		::RPG::Client::TABehaviorTickMode _TickMode_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x28
		::Il2CppArray<::System::String*>* _DependentAssets; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
		}

		::System::Void Method_2_646174E3BA50E41A(::RPG::Client::TABehaviorTickMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_646174E3BA50E41A_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_2_8457B19F3C23386D(::Il2CppArray<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_8457B19F3C23386D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_5_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_6_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_7_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_8_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_9_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_10_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_11_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_LATETICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_2_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void set_IsEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_ISENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_TickMode(::RPG::Client::TABehaviorTickMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_TICKMODE_OFFSET))(this, value);
		}

		::RPG::Client::TABehaviorTickMode get_TickMode()
		{
			return ((::RPG::Client::TABehaviorTickMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_TICKMODE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
