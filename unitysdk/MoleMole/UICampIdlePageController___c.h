#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_1_B97D2A325ABD0307;
class Class_3_9F8B7B204F0D8E1D_20;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172D37B0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172D37F0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__ONCLICKSTARTBATTLE_B__35_2_OFFSET UNITYSDK_OFFSET(0x172D3800)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_1_OFFSET UNITYSDK_OFFSET(0x172D3840)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_3_OFFSET UNITYSDK_OFFSET(0x172D3860)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHOUTERINFO_B__115_0_OFFSET UNITYSDK_OFFSET(0x172D3810)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c_TypeDefinitionIndex = 86938;

	class UICampIdlePageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__35_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C8D0);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__182_3()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C8D8);
		}
		static ::MoleMole::UICampIdlePageController___c** StaticGet___9()
		{
			return (::MoleMole::UICampIdlePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C8E0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*>, ::System::Boolean>** StaticGet___9__115_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C8E8);
		}
		static ::System::Predicate_1<::Class_3_9F8B7B204F0D8E1D_20*>** StaticGet___9__182_1()
		{
			return (::System::Predicate_1<::Class_3_9F8B7B204F0D8E1D_20*>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickStartBattle_b__35_2(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__ONCLICKSTARTBATTLE_B__35_2_OFFSET))(this, i);
		}

		::System::Boolean _RefreshOuterInfo_b__115_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHOUTERINFO_B__115_0_OFFSET))(this, x);
		}

		::System::Boolean _RefreshCurrentQA_b__182_1(::Class_3_9F8B7B204F0D8E1D_20* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_1_OFFSET))(this, x);
		}

		::System::Void _RefreshCurrentQA_b__182_3(::Class_0_16E4307DCC419505_29* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__REFRESHCURRENTQA_B__182_3_OFFSET))(this, _);
		}
	};
}
