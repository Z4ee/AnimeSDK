#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16529170)
#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165291B0)
#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x165291C0)
#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLER___C__ONUIOPEN_B__6_2_OFFSET UNITYSDK_OFFSET(0x165291D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticePageController___c_TypeDefinitionIndex = 86893;

	class UIMechBooPracticePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMechBooPracticePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMechBooPracticePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticePageController___c_TypeDefinitionIndex)->GetStaticField(0x3D320);
		}
		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticePageController___c_TypeDefinitionIndex)->GetStaticField(0x3D328);
		}
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPracticePageController___c_TypeDefinitionIndex)->GetStaticField(0x3D330);
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
