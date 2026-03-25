#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0BA5D98E0F73DDB8;
class Class_3_79E0DC8295557BAC;
class Class_3_EF768D9135EF985D_1;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define CLASS_2_CD5BE680213AC89D_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x114A00E0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_1C445AC4C0C0F33D_OFFSET UNITYSDK_OFFSET(0x114A0430)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_20D5AB6FDFA560A6_OFFSET UNITYSDK_OFFSET(0x114A1070)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x114A0020)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_3EE230755518F80C_OFFSET UNITYSDK_OFFSET(0x114A0220)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_9E5E9518D01FCB25_OFFSET UNITYSDK_OFFSET(0x114A0B30)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_A2AF0CC0E6C54833_OFFSET UNITYSDK_OFFSET(0x114A04D0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_B555E07014FDD9D7_OFFSET UNITYSDK_OFFSET(0x114A0980)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0x1149F2D0)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_D4A8C612F49B404B_OFFSET UNITYSDK_OFFSET(0x114A0580)
#define CLASS_2_CD5BE680213AC89D_METHOD_2_EE5A48E669E88C75_OFFSET UNITYSDK_OFFSET(0x114A0EF0)
#define CLASS_2_CD5BE680213AC89D__CTOR_OFFSET UNITYSDK_OFFSET(0x1149E9F0)
#define CLASS_2_CD5BE680213AC89D__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1149F380)
#define CLASS_2_CD5BE680213AC89D__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x114A0710)
#define CLASS_2_CD5BE680213AC89D__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1149EB20)
#define CLASS_2_CD5BE680213AC89D__ONTICK_OFFSET UNITYSDK_OFFSET(0x114A0090)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x114A13F0)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x114A14B0)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x114A1390)
#define CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x114A1450)
#define CLASS_2_CD5BE680213AC89D___SUBSCRIBEMESSAGE_B__9_0_OFFSET UNITYSDK_OFFSET(0x114A1250)

inline static constexpr unsigned int Class_2_CD5BE680213AC89D_TypeDefinitionIndex = 60991;

class Class_2_CD5BE680213AC89D : public ::Sofa::BaseSofaWindow
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::RectTransform* Field_2_8; // 0x48
	::RPG::Client::AnimatorButton* Field_2_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_1; // 0x58
	::UnityEngine::UI::ScrollRect* Field_2_10; // 0x60
	::RPG::Client::AnimatorButton* Field_2_3; // 0x68
	::SuperScrollView::LoopListView2* Field_2_6; // 0x70
	::Class_1_0BA5D98E0F73DDB8* Field_2_0; // 0x78
	::RPG::UINavigation::UINavigationZone* Field_2_2; // 0x80
	::SuperScrollView::LoopListView2* Field_2_5; // 0x88
	::UnityEngine::RectTransform* Field_2_9; // 0x90
	::System::Single Field_2_11; // 0x98

	::System::Void _ctor(::Class_3_79E0DC8295557BAC* a1, ::Class_1_0BA5D98E0F73DDB8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_79E0DC8295557BAC*, ::Class_1_0BA5D98E0F73DDB8*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnTick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONTICK_OFFSET))(this);
	}

	::System::Void Method_2_3EE230755518F80C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_3EE230755518F80C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A2AF0CC0E6C54833(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_A2AF0CC0E6C54833_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1C445AC4C0C0F33D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_1C445AC4C0C0F33D_OFFSET))(this);
	}

	::System::Boolean Method_2_D4A8C612F49B404B(::SuperScrollView::LoopListViewItem2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_D4A8C612F49B404B_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_BF622B900A7F3625()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_BF622B900A7F3625_OFFSET))(this);
	}

	::System::Void Method_2_B555E07014FDD9D7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_B555E07014FDD9D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E5E9518D01FCB25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_9E5E9518D01FCB25_OFFSET))(this, a1);
	}

	::SuperScrollView::LoopListViewItem2* Method_2_EE5A48E669E88C75(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
	{
		return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_EE5A48E669E88C75_OFFSET))(this, a1, a2, a3);
	}

	::SuperScrollView::LoopListViewItem2* Method_2_20D5AB6FDFA560A6(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
	{
		return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_20D5AB6FDFA560A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::Class_3_79E0DC8295557BAC* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_79E0DC8295557BAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Void __SubscribeMessage_b__9_0(::Class_3_EF768D9135EF985D_1* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EF768D9135EF985D_1*))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___SUBSCRIBEMESSAGE_B__9_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONTICK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5BE680213AC89D___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
