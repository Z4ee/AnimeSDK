#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C86530)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C86570)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__ONCLICKRESTART_B__22_0_OFFSET UNITYSDK_OFFSET(0x14C86590)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__ONUIOPEN_B__19_0_OFFSET UNITYSDK_OFFSET(0x14C86580)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooResultPageController___c_TypeDefinitionIndex = 46217;

	class UIRidusGotBooResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F450);
		}
		static ::System::Predicate_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F458);
		}
		static ::MoleMole::UIRidusGotBooResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRidusGotBooResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__19_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__ONUIOPEN_B__19_0_OFFSET))(this, x);
		}

		::System::Void _OnClickRestart_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER___C__ONCLICKRESTART_B__22_0_OFFSET))(this);
		}
	};
}
