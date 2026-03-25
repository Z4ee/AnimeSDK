#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_0BA5D98E0F73DDB8;
class Class_3_5C00647A7641EEC6;
class Class_3_EF768D9135EF985D;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A42B522747F4899E_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x8A82C10)
#define CLASS_2_A42B522747F4899E_METHOD_2_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0x8A81B80)
#define CLASS_2_A42B522747F4899E__CTOR_OFFSET UNITYSDK_OFFSET(0x8A81500)
#define CLASS_2_A42B522747F4899E__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8A81C30)
#define CLASS_2_A42B522747F4899E__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8A82C80)
#define CLASS_2_A42B522747F4899E__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x8A815A0)
#define CLASS_2_A42B522747F4899E___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8A82DE0)
#define CLASS_2_A42B522747F4899E___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8A82E40)
#define CLASS_2_A42B522747F4899E___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x8A82D80)
#define CLASS_2_A42B522747F4899E___SUBSCRIBEMESSAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x8A82D10)

inline static constexpr unsigned int Class_2_A42B522747F4899E_TypeDefinitionIndex = 60987;

class Class_2_A42B522747F4899E : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::Client::AnimatorButton* Field_2_1; // 0x40
	::RPG::Client::AnimatorButton* Field_2_2; // 0x48
	::RPG::Client::LocalizedText* Field_2_7; // 0x50
	::RPG::Client::LocalizedText* Field_2_6; // 0x58
	::UnityEngine::Transform* Field_2_4; // 0x60
	::RPG::Client::AnimatorButton* Field_2_3; // 0x68
	::RPG::Client::LocalizedText* Field_2_5; // 0x70
	::Class_1_0BA5D98E0F73DDB8* Field_2_0; // 0x78
	::RPG::Client::LocalizedText* Field_2_8; // 0x80

	::System::Void _ctor(::Class_3_5C00647A7641EEC6* a1, ::Class_1_0BA5D98E0F73DDB8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5C00647A7641EEC6*, ::Class_1_0BA5D98E0F73DDB8*))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_BF622B900A7F3625()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E_METHOD_2_BF622B900A7F3625_OFFSET))(this);
	}

	::Class_3_5C00647A7641EEC6* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_5C00647A7641EEC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Void __SubscribeMessage_b__4_0(::Class_3_EF768D9135EF985D* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EF768D9135EF985D*))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E___SUBSCRIBEMESSAGE_B__4_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42B522747F4899E___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
