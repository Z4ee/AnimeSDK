#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_273;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16649460)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166494A0)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x166494B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex = 72756;

	class UIOverlordFeastPromotionPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIOverlordFeastPromotionPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastPromotionPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F380);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_273*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_273*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshView_b__9_0(::Class_2_208CC9941471731A_273* t)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_273*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, t);
		}
	};
}
