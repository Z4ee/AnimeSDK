#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_156;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1560DC60)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1560DCA0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___C__GETFIRSTCLASSCONFIGBYINDEX_B__31_0_OFFSET UNITYSDK_OFFSET(0x1560DCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementPageController___c_TypeDefinitionIndex = 73070;

	class UIAchievementPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_156*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_156*>**)Il2CppClass::FromTypeDefinitionIndex(UIAchievementPageController___c_TypeDefinitionIndex)->GetStaticField(0x40630);
		}
		static ::MoleMole::UIAchievementPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAchievementPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAchievementPageController___c_TypeDefinitionIndex)->GetStaticField(0x40638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFirstClassConfigByIndex_b__31_0(::Class_2_208CC9941471731A_156* l, ::Class_2_208CC9941471731A_156* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_156*, ::Class_2_208CC9941471731A_156*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___C__GETFIRSTCLASSCONFIGBYINDEX_B__31_0_OFFSET))(this, l, r);
		}
	};
}
