#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_4F9417780723166C;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18816800)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18816840)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__SHOWRELICBRANCHACTIVEVIEW_B__1_0_OFFSET UNITYSDK_OFFSET(0x18816850)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController___c_TypeDefinitionIndex = 58276;

	class UIHollowCardOptionsAbyssS2DialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*>, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsAbyssS2DialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x346C0);
		}
		static ::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardOptionsAbyssS2DialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x346C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowRelicBranchActiveView_b__1_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER___C__SHOWRELICBRANCHACTIVEVIEW_B__1_0_OFFSET))(this, pair);
		}
	};
}
