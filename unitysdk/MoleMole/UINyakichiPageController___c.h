#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22C3916CA7EB557F;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBFFB0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBFFF0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__ONCLICKSTATEBTN_B__13_0_OFFSET UNITYSDK_OFFSET(0x15DC0000)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__SETCURRENTSTOREBYSTOREINDEX_B__21_0_OFFSET UNITYSDK_OFFSET(0x15DC0010)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiPageController___c_TypeDefinitionIndex = 76053;

	class UINyakichiPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UINyakichiPageController___c** StaticGet___9()
		{
			return (::MoleMole::UINyakichiPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UINyakichiPageController___c_TypeDefinitionIndex)->GetStaticField(0x43430);
		}
		static ::System::Comparison_1<::Class_1_22C3916CA7EB557F*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::Class_1_22C3916CA7EB557F*>**)Il2CppClass::FromTypeDefinitionIndex(UINyakichiPageController___c_TypeDefinitionIndex)->GetStaticField(0x43438);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINyakichiPageController___c_TypeDefinitionIndex)->GetStaticField(0x43440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickStateBtn_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__ONCLICKSTATEBTN_B__13_0_OFFSET))(this);
		}

		::System::Int32 _SetCurrentStoreByStoreIndex_b__21_0(::Class_1_22C3916CA7EB557F* a, ::Class_1_22C3916CA7EB557F* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_22C3916CA7EB557F*, ::Class_1_22C3916CA7EB557F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__SETCURRENTSTOREBYSTOREINDEX_B__21_0_OFFSET))(this, a, b);
		}
	};
}
