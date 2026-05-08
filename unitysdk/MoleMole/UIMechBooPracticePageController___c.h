#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D475B0)
#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D475F0)
#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x14D47600)
#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__ONUIOPEN_B__6_2_OFFSET UNITYSDK_OFFSET(0x14D47610)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticePageController___c_TypeDefinitionIndex = 39555;

	class UIMechBooPracticePageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticePageController___c_TypeDefinitionIndex)->GetStaticField(0x38040);
		}
		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticePageController___c_TypeDefinitionIndex)->GetStaticField(0x38048);
		}
		static ::MoleMole::UIMechBooPracticePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMechBooPracticePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticePageController___c_TypeDefinitionIndex)->GetStaticField(0x38050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__6_0(::UnityEngine::Transform* tr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, tr);
		}

		::System::Void _OnUIOpen_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__ONUIOPEN_B__6_2_OFFSET))(this);
		}
	};
}
