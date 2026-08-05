#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38DE07FB580FE5E9;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186A3F70)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186A3FB0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DOBACK_B__52_0_OFFSET UNITYSDK_OFFSET(0x186A40C0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__GET_ISANYSETTLING_B__31_0_OFFSET UNITYSDK_OFFSET(0x186A3FC0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_0_OFFSET UNITYSDK_OFFSET(0x186A4030)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_3_OFFSET UNITYSDK_OFFSET(0x186A4050)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c_TypeDefinitionIndex = 44110;

	class UIDisplayCasePageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_38DE07FB580FE5E9*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Class_1_38DE07FB580FE5E9*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C520);
		}
		static ::System::Action_1<::Class_1_38DE07FB580FE5E9*>** StaticGet___9__46_0()
		{
			return (::System::Action_1<::Class_1_38DE07FB580FE5E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C528);
		}
		static ::MoleMole::UIDisplayCasePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDisplayCasePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C530);
		}
		static ::System::Func_2<::Class_1_38DE07FB580FE5E9*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_38DE07FB580FE5E9*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C538);
		}
		static ::System::Action_1<::Class_1_38DE07FB580FE5E9*>** StaticGet___9__46_3()
		{
			return (::System::Action_1<::Class_1_38DE07FB580FE5E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCasePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsAnySettling_b__31_0(::Class_1_38DE07FB580FE5E9* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__GET_ISANYSETTLING_B__31_0_OFFSET))(this, i);
		}

		::System::Void _SaveAll_b__46_0(::Class_1_38DE07FB580FE5E9* i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_0_OFFSET))(this, i);
		}

		::System::Void _SaveAll_b__46_3(::Class_1_38DE07FB580FE5E9* i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__SAVEALL_B__46_3_OFFSET))(this, i);
		}

		::System::Boolean _DoBack_b__52_0(::Class_1_38DE07FB580FE5E9* vm)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DOBACK_B__52_0_OFFSET))(this, vm);
		}
	};
}
