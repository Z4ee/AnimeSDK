#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158A2240)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158A2280)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__ONTUTORIALBTNCLICKED_B__50_2_OFFSET UNITYSDK_OFFSET(0x158A22B0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__REFRESHPAGE_B__40_0_OFFSET UNITYSDK_OFFSET(0x158A2290)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex = 38312;

	class UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__40_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41EC0);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__50_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41EC8);
		}
		static ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c** StaticGet___9()
		{
			return (::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPage_b__40_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__REFRESHPAGE_B__40_0_OFFSET))(this, vp);
		}

		::System::String* _OnTutorialBtnClicked_b__50_2(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__ONTUTORIALBTNCLICKED_B__50_2_OFFSET))(this, _);
		}
	};
}
