#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_131;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BDF210)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDF250)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_0_OFFSET UNITYSDK_OFFSET(0x11BDF260)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_2_OFFSET UNITYSDK_OFFSET(0x11BDF2B0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_6_OFFSET UNITYSDK_OFFSET(0x11BDF300)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c_TypeDefinitionIndex = 75926;

	class UIWishlistMainPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWishlistMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWishlistMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x43580);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_131*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_131*>**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x43588);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_131*>** StaticGet___9__28_2()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_131*>**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x43590);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_131*>** StaticGet___9__28_6()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_131*>**)Il2CppClass::FromTypeDefinitionIndex(UIWishlistMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x43598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshMaterialPreview_b__28_0(::Class_2_208CC9941471731A_131* ext, ::Class_2_208CC9941471731A_131* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_131*, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_0_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _RefreshMaterialPreview_b__28_2(::Class_2_208CC9941471731A_131* ext, ::Class_2_208CC9941471731A_131* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_131*, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_2_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _RefreshMaterialPreview_b__28_6(::Class_2_208CC9941471731A_131* ext, ::Class_2_208CC9941471731A_131* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_131*, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__REFRESHMATERIALPREVIEW_B__28_6_OFFSET))(this, ext, templateExt);
		}
	};
}
