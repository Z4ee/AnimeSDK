#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E68222AA479B6563;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A7B9D0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7BA10)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_0_OFFSET UNITYSDK_OFFSET(0x15A7BC90)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_1_OFFSET UNITYSDK_OFFSET(0x15A7BCF0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x15A7BA20)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_0_OFFSET UNITYSDK_OFFSET(0x15A7BD00)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_1_OFFSET UNITYSDK_OFFSET(0x15A7BD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayMainPageController___c_TypeDefinitionIndex = 76877;

	class UIGoldMiningDayMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_E68222AA479B6563*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::Class_3_E68222AA479B6563*>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x30C90);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__21_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x30C98);
		}
		static ::MoleMole::UIGoldMiningDayMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGoldMiningDayMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x30CA0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x30CA8);
		}
		static ::System::Action_1<::Class_3_E68222AA479B6563*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::Class_3_E68222AA479B6563*>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x30CB0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__25_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x30CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET))(this);
		}

		::System::Void _DealFriendInviteMsg_b__21_0(::Class_3_E68222AA479B6563* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E68222AA479B6563*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_0_OFFSET))(this, roomInfo);
		}

		::System::Void _DealFriendInviteMsg_b__21_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_1_OFFSET))(this, _);
		}

		::System::Void _TryJoinMarcelAdventure_b__25_0(::Class_3_E68222AA479B6563* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E68222AA479B6563*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinMarcelAdventure_b__25_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_1_OFFSET))(this, _);
		}
	};
}
