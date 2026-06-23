#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_25;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175AB540)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175AB580)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET UNITYSDK_OFFSET(0x175AB590)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET UNITYSDK_OFFSET(0x175AB730)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooDreamResultPageController___c_TypeDefinitionIndex = 66292;

	class UIBangBooDreamResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_25*>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_25*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4CDE0);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4CDE8);
		}
		static ::MoleMole::UIBangBooDreamResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooDreamResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4CDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPrepareShow_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET))(this);
		}

		::System::Void _OnPrepareShow_b__11_1(::Class_3_48A3D3A34C52331D_25* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET))(this, msg);
		}
	};
}
