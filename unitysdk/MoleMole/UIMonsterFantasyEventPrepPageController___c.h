#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EDF31E1B77FE3774;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA7120)
#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA7160)
#define MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x16DA7170)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyEventPrepPageController___c_TypeDefinitionIndex = 76919;

	class UIMonsterFantasyEventPrepPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMonsterFantasyEventPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterFantasyEventPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyEventPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C30);
		}
		static ::System::Func_2<::Class_3_EDF31E1B77FE3774*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_3_EDF31E1B77FE3774*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyEventPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__9_0(::Class_3_EDF31E1B77FE3774* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_EDF31E1B77FE3774*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYEVENTPREPPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, x);
		}
	};
}
