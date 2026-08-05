#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1114;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17976CB0)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17976CF0)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x17976D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex = 78551;

	class UIOverlordFeastPromotionPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_1114*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_1114*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FFA0);
		}
		static ::MoleMole::UIOverlordFeastPromotionPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIOverlordFeastPromotionPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex)->GetStaticField(0x3FFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshView_b__9_0(::Class_2_208CC9941471731A_1114* t)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_1114*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, t);
		}
	};
}
