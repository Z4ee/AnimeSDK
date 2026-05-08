#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_693;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E8F0A0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8F0E0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL___C__GETREACTIONS_B__9_0_OFFSET UNITYSDK_OFFSET(0x12E8F0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleNewProductPopWindowController_ViewModel___c_TypeDefinitionIndex = 47885;

	class UISuibianTempleNewProductPopWindowController_ViewModel___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleNewProductPopWindowController_ViewModel___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleNewProductPopWindowController_ViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleNewProductPopWindowController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x46CA0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_693*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_693*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleNewProductPopWindowController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x46CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetReactions_b__9_0(::Class_2_208CC9941471731A_693* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_693*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL___C__GETREACTIONS_B__9_0_OFFSET))(this, config);
		}
	};
}
