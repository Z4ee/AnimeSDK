#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1E89A1A01EA84819;
class Class_2_208CC9941471731A_476;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D403E0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D40420)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x10D40430)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_1_OFFSET UNITYSDK_OFFSET(0x10D40450)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_2_OFFSET UNITYSDK_OFFSET(0x10D40560)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_3_OFFSET UNITYSDK_OFFSET(0x10D40780)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController___c_TypeDefinitionIndex = 44801;

	class UISuibianTempleManageInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_476*, ::System::Int32>** StaticGet___9__64_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_476*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManageInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x421C0);
		}
		static ::MoleMole::UISuibianTempleManageInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleManageInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManageInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x421C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__64_0(::System::Int32 talentSubModule)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_0_OFFSET))(this, talentSubModule);
		}

		::System::Boolean __cctor_b__64_1(::Class_2_1E89A1A01EA84819* item, ::System::Int32 filter)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1E89A1A01EA84819*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_1_OFFSET))(this, item, filter);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* __cctor_b__64_2()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_2_OFFSET))(this);
		}

		::System::Int32 __cctor_b__64_3(::Class_2_208CC9941471731A_476* config)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_476*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER___C___CCTOR_B__64_3_OFFSET))(this, config);
		}
	};
}
