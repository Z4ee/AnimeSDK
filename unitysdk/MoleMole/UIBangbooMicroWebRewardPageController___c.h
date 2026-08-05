#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197844B0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197844F0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__60_0_OFFSET UNITYSDK_OFFSET(0x19784500)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__60_1_OFFSET UNITYSDK_OFFSET(0x19784510)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex = 73648;

	class UIBangbooMicroWebRewardPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooMicroWebRewardPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooMicroWebRewardPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FBC0);
		}
		static ::System::Action** StaticGet___9__60_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FBC8);
		}
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__60_1()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBangbooMicroWebSubmitMaterialFinish_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__60_0_OFFSET))(this);
		}

		::System::Void _OnBangbooMicroWebSubmitMaterialFinish_b__60_1(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__60_1_OFFSET))(this, root);
		}
	};
}
