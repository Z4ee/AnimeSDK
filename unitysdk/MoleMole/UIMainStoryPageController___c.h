#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1EF6707C62AC94B6_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171497B0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171497F0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__ONUIINIT_B__5_5_OFFSET UNITYSDK_OFFSET(0x17149800)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c_TypeDefinitionIndex = 76804;

	class UIMainStoryPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_1EF6707C62AC94B6_1*, ::System::Int32>** StaticGet___9__5_5()
		{
			return (::System::Func_2<::Class_2_1EF6707C62AC94B6_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMainStoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x43410);
		}
		static ::MoleMole::UIMainStoryPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainStoryPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainStoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x43418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__5_5(::Class_2_1EF6707C62AC94B6_1* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_1EF6707C62AC94B6_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__ONUIINIT_B__5_5_OFFSET))(this, x);
		}
	};
}
