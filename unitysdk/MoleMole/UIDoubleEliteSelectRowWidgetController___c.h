#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_2_208CC9941471731A_477;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D91FC0)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D92000)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__SETCHAPTERINFO_B__8_0_OFFSET UNITYSDK_OFFSET(0x16D92010)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__SETCHAPTERINFO_B__8_1_OFFSET UNITYSDK_OFFSET(0x16D92060)
#define MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__SETCHAPTERINFO_B__8_2_OFFSET UNITYSDK_OFFSET(0x16D92090)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteSelectRowWidgetController___c_TypeDefinitionIndex = 83444;

	class UIDoubleEliteSelectRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleEliteSelectRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32C30);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleEliteSelectRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32C38);
		}
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::Class_2_208CC9941471731A_477*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::Class_2_208CC9941471731A_477*>**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleEliteSelectRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32C40);
		}
		static ::MoleMole::UIDoubleEliteSelectRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIDoubleEliteSelectRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleEliteSelectRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_477* _SetChapterInfo_b__8_0(::Class_1_1685EC66FBD28897* itemData)
		{
			return ((::Class_2_208CC9941471731A_477*(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__SETCHAPTERINFO_B__8_0_OFFSET))(this, itemData);
		}

		::System::Boolean _SetChapterInfo_b__8_1(::Class_2_208CC9941471731A_477* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__SETCHAPTERINFO_B__8_1_OFFSET))(this, itemTemplate);
		}

		::System::Boolean _SetChapterInfo_b__8_2(::Class_2_208CC9941471731A_477* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESELECTROWWIDGETCONTROLLER___C__SETCHAPTERINFO_B__8_2_OFFSET))(this, itemTemplate);
		}
	};
}
