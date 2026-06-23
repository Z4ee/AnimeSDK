#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D6D57236F24B8FC_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169D37B0)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169D37F0)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__ONUIOPENSHOW_B__23_0_OFFSET UNITYSDK_OFFSET(0x169D3800)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__REFRESHUIWHENDATAUPDATE_B__38_0_OFFSET UNITYSDK_OFFSET(0x169D3850)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController___c_TypeDefinitionIndex = 73775;

	class UIGroceryActivityPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_6D6D57236F24B8FC_1*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_1_6D6D57236F24B8FC_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CA20);
		}
		static ::System::Comparison_1<::Class_1_6D6D57236F24B8FC_1*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::Class_1_6D6D57236F24B8FC_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CA28);
		}
		static ::MoleMole::UIGroceryActivityPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGroceryActivityPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpenShow_b__23_0(::Class_1_6D6D57236F24B8FC_1* x, ::Class_1_6D6D57236F24B8FC_1* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_6D6D57236F24B8FC_1*, ::Class_1_6D6D57236F24B8FC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__ONUIOPENSHOW_B__23_0_OFFSET))(this, x, y);
		}

		::System::Int32 _RefreshUIWhenDataUpdate_b__38_0(::Class_1_6D6D57236F24B8FC_1* x, ::Class_1_6D6D57236F24B8FC_1* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_6D6D57236F24B8FC_1*, ::Class_1_6D6D57236F24B8FC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__REFRESHUIWHENDATAUPDATE_B__38_0_OFFSET))(this, x, y);
		}
	};
}
