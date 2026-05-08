#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_AC1B1CB16C488BEC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152C9020)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152C9060)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__6_0_OFFSET UNITYSDK_OFFSET(0x152C9070)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeInfoWidgetController___c_TypeDefinitionIndex = 79609;

	class UIAbyssS2RoleChallengeInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2RoleChallengeInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RoleChallengeInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45C90);
		}
		static ::System::Func_2<::Class_2_AC1B1CB16C488BEC*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_2_AC1B1CB16C488BEC*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* _OnBuildBtnClick_b__6_0(::Class_2_AC1B1CB16C488BEC* x)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__6_0_OFFSET))(this, x);
		}
	};
}
