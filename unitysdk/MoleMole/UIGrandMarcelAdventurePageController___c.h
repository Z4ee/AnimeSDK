#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7FECECA6F88FD15C;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162D5680)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CHECKTEMPUNLOCK_B__82_1_OFFSET UNITYSDK_OFFSET(0x162D57A0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162D56C0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__REFRESHVIEW_B__49_0_OFFSET UNITYSDK_OFFSET(0x162D56D0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__97_0_OFFSET UNITYSDK_OFFSET(0x162D5800)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__97_1_OFFSET UNITYSDK_OFFSET(0x162D5810)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex = 64031;

	class UIGrandMarcelAdventurePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGrandMarcelAdventurePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelAdventurePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EDC0);
		}
		static ::System::Action** StaticGet___9__82_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EDC8);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__97_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EDD0);
		}
		static ::System::Action_1<::Class_3_7FECECA6F88FD15C*>** StaticGet___9__97_0()
		{
			return (::System::Action_1<::Class_3_7FECECA6F88FD15C*>**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EDD8);
		}
		static ::System::Action** StaticGet___9__49_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventurePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__REFRESHVIEW_B__49_0_OFFSET))(this);
		}

		::System::Void _CheckTempUnlock_b__82_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__CHECKTEMPUNLOCK_B__82_1_OFFSET))(this);
		}

		::System::Void _TryJoinMarcelAdventure_b__97_0(::Class_3_7FECECA6F88FD15C* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7FECECA6F88FD15C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__97_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinMarcelAdventure_b__97_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__97_1_OFFSET))(this, _);
		}
	};
}
