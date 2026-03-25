#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_0BA5D98E0F73DDB8;
class Class_3_D7D23702D98A30C5;
class Class_3_EB9687505CB7F22E;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MVVM::View { class LimaoNewsCommentControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6303C6A71250B2C6_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x99D3340)
#define CLASS_2_6303C6A71250B2C6_METHOD_2_DE70BFBC2BB426D0_OFFSET UNITYSDK_OFFSET(0x99D3400)
#define CLASS_2_6303C6A71250B2C6__CTOR_OFFSET UNITYSDK_OFFSET(0x99D2680)
#define CLASS_2_6303C6A71250B2C6__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x99D2B20)
#define CLASS_2_6303C6A71250B2C6__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x99D33B0)
#define CLASS_2_6303C6A71250B2C6__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x99D2720)
#define CLASS_2_6303C6A71250B2C6___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x99D3580)
#define CLASS_2_6303C6A71250B2C6___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x99D35E0)
#define CLASS_2_6303C6A71250B2C6___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x99D3520)
#define CLASS_2_6303C6A71250B2C6___ONINITIALIZECOMPONENT_B__1_0_OFFSET UNITYSDK_OFFSET(0x99D34B0)

inline static constexpr unsigned int Class_2_6303C6A71250B2C6_TypeDefinitionIndex = 60998;

class Class_2_6303C6A71250B2C6 : public ::Sofa::BaseSofaWindow
{
public:
	::Class_1_0BA5D98E0F73DDB8* Field_2_1; // 0x40
	::RPG::Client::AnimatorButton* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsCommentControl*>* Field_2_3; // 0x50
	::RPG::Client::MonoAnimationTrigger* Field_2_5; // 0x58
	::RPG::Client::MVVM::View::LimaoNewsSubmitLevelControl* Field_2_0; // 0x60
	::UnityEngine::UI::Text* Field_2_4; // 0x68

	::System::Void _ctor(::Class_3_EB9687505CB7F22E* a1, ::Class_1_0BA5D98E0F73DDB8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EB9687505CB7F22E*, ::Class_1_0BA5D98E0F73DDB8*))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_DE70BFBC2BB426D0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6_METHOD_2_DE70BFBC2BB426D0_OFFSET))(this, a1);
	}

	::Class_3_EB9687505CB7F22E* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_EB9687505CB7F22E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Void __OnInitializeComponent_b__1_0(::Class_3_D7D23702D98A30C5* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5*))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6___ONINITIALIZECOMPONENT_B__1_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6303C6A71250B2C6___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
