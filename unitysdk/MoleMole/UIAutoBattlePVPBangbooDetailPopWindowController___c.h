#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_258;
class Class_2_F6952FD068449A3A_Class_2_CC03AAEE6FCC732C_9;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16018150)
#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16018190)
#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x160181A0)
#define MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_1_OFFSET UNITYSDK_OFFSET(0x160181C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex = 73295;

	class UIAutoBattlePVPBangbooDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattlePVPBangbooDetailPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPBangbooDetailPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FB90);
		}
		static ::System::Action_1<::Class_2_0D31A1661D004892<::Class_2_F6952FD068449A3A_Class_2_CC03AAEE6FCC732C_9*>*>** StaticGet___9__8_1()
		{
			return (::System::Action_1<::Class_2_0D31A1661D004892<::Class_2_F6952FD068449A3A_Class_2_CC03AAEE6FCC732C_9*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FB98);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_258*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_258*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPBangbooDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_0(::Class_2_208CC9941471731A_258* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_258*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, x);
		}

		::System::Void _RefreshView_b__8_1(::Class_2_0D31A1661D004892<::Class_2_F6952FD068449A3A_Class_2_CC03AAEE6FCC732C_9*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D31A1661D004892<::Class_2_F6952FD068449A3A_Class_2_CC03AAEE6FCC732C_9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPBANGBOODETAILPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_1_OFFSET))(this, item);
		}
	};
}
