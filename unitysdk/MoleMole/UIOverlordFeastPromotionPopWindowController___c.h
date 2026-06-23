#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_273;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F11410)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F11450)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x15F11460)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastPromotionPopWindowController___c_TypeDefinitionIndex = 55091;

	class UIOverlordFeastPromotionPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIOverlordFeastPromotionPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastPromotionPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CB90);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_273*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_273*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshView_b__9_0(::Class_2_208CC9941471731A_273* t)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_273*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, t);
		}
	};
}
