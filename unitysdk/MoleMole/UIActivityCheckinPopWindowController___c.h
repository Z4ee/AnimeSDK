#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_18;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192787F0)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19278830)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x19278840)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinPopWindowController___c_TypeDefinitionIndex = 42495;

	class UIActivityCheckinPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityCheckinPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCheckinPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F40);
		}
		static ::System::Func_2<::Class_3_AE02BC8285203464_18*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Class_3_AE02BC8285203464_18*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_0(::Class_3_AE02BC8285203464_18* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_18*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, x);
		}
	};
}
