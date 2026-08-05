#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_7;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1935B5B0)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1935B5F0)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET UNITYSDK_OFFSET(0x1935B600)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET UNITYSDK_OFFSET(0x1935B7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooDreamResultPageController___c_TypeDefinitionIndex = 83126;

	class UIBangBooDreamResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C500);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_7*>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_7*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C508);
		}
		static ::MoleMole::UIBangBooDreamResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooDreamResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C510);
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

		::System::Void _OnPrepareShow_b__11_1(::Class_3_48A3D3A34C52331D_7* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET))(this, msg);
		}
	};
}
