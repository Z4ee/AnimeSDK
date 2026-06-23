#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8CE3622A05CA8724;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__BUILDCUSTOMLISTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x14C7B260)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C7B210)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7B250)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_0_OFFSET UNITYSDK_OFFSET(0x14C7B410)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_1_OFFSET UNITYSDK_OFFSET(0x14C7B430)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelPageController___c_TypeDefinitionIndex = 86744;

	class UIRABInLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x416C0);
		}
		static ::System::Comparison_1<::Class_2_8CE3622A05CA8724*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::Class_2_8CE3622A05CA8724*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x416C8);
		}
		static ::MoleMole::UIRABInLevelPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABInLevelPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x416D0);
		}
		static ::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::Class_2_8CE3622A05CA8724*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x416D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildCustomLists_b__3_0(::Class_2_8CE3622A05CA8724* a, ::Class_2_8CE3622A05CA8724* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_8CE3622A05CA8724*, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__BUILDCUSTOMLISTS_B__3_0_OFFSET))(this, a, b);
		}

		::System::Boolean _OnGamepadModuleTryOverrideNextSelectIndex_b__12_0(::Class_2_8CE3622A05CA8724* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_0_OFFSET))(this, s);
		}

		::System::Boolean _OnGamepadModuleTryOverrideNextSelectIndex_b__12_1(::Class_2_8CE3622A05CA8724* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_8CE3622A05CA8724*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_1_OFFSET))(this, s);
		}
	};
}
