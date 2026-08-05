#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1602E9D0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1602EA10)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__OPENITEMINFOBESIDEICON_B__25_1_OFFSET UNITYSDK_OFFSET(0x1602EA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController___c_TypeDefinitionIndex = 48499;

	class UIBangkovResultPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangkovResultPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovResultPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CF20);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenItemInfoBesideIcon_b__25_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__OPENITEMINFOBESIDEICON_B__25_1_OFFSET))(this);
		}
	};
}
