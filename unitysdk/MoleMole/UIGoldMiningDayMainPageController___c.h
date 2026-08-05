#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7FECECA6F88FD15C;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E8D0F0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E8D130)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_0_OFFSET UNITYSDK_OFFSET(0x19E8D3C0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_1_OFFSET UNITYSDK_OFFSET(0x19E8D420)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x19E8D140)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_0_OFFSET UNITYSDK_OFFSET(0x19E8D430)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_1_OFFSET UNITYSDK_OFFSET(0x19E8D490)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayMainPageController___c_TypeDefinitionIndex = 81240;

	class UIGoldMiningDayMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__21_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32D40);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__25_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32D48);
		}
		static ::System::Action_1<::Class_3_7FECECA6F88FD15C*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::Class_3_7FECECA6F88FD15C*>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32D50);
		}
		static ::System::Action_1<::Class_3_7FECECA6F88FD15C*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::Class_3_7FECECA6F88FD15C*>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32D58);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32D60);
		}
		static ::MoleMole::UIGoldMiningDayMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGoldMiningDayMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x32D68);
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

		::System::Void _DealFriendInviteMsg_b__21_0(::Class_3_7FECECA6F88FD15C* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7FECECA6F88FD15C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_0_OFFSET))(this, roomInfo);
		}

		::System::Void _DealFriendInviteMsg_b__21_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_1_OFFSET))(this, _);
		}

		::System::Void _TryJoinMarcelAdventure_b__25_0(::Class_3_7FECECA6F88FD15C* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7FECECA6F88FD15C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinMarcelAdventure_b__25_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_1_OFFSET))(this, _);
		}
	};
}
