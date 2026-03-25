#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_8B110DB69802966A;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E972752B9D4E2012_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11835DC0)
#define CLASS_2_E972752B9D4E2012_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11835EA0)
#define CLASS_2_E972752B9D4E2012_1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x118348B0)
#define CLASS_2_E972752B9D4E2012_1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x118348D0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_1_OFFSET UNITYSDK_OFFSET(0x11835CF0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x11835C20)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x11835A50)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x11835050)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_3787E953EE385D05_OFFSET UNITYSDK_OFFSET(0x11835530)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x11835150)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_41F296E07A0100A7_OFFSET UNITYSDK_OFFSET(0x11835820)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x11834C60)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_555EE80E6789B96C_OFFSET UNITYSDK_OFFSET(0x118356D0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11836040)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x11836110)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11835FE0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_75351BABD20240A0_OFFSET UNITYSDK_OFFSET(0x11834DF0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0x11835BB0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x11834A80)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_B2FD964C82B25DEB_OFFSET UNITYSDK_OFFSET(0x11835000)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET UNITYSDK_OFFSET(0x11834930)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118348E0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x11835970)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_DC6B6867CD198D12_OFFSET UNITYSDK_OFFSET(0x11835760)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x118353C0)
#define CLASS_2_E972752B9D4E2012_1_METHOD_2_FB4798F380B9BEA5_OFFSET UNITYSDK_OFFSET(0x118352B0)
#define CLASS_2_E972752B9D4E2012_1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x118348C0)
#define CLASS_2_E972752B9D4E2012_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11835F50)
#define CLASS_2_E972752B9D4E2012_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x11834580)
#define CLASS_2_E972752B9D4E2012_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11835380)
#define CLASS_2_E972752B9D4E2012_1__ONTICK_OFFSET UNITYSDK_OFFSET(0x118350A0)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118361D0)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11836230)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11835F80)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11836170)
#define CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x118360A0)

inline static constexpr unsigned int Class_2_E972752B9D4E2012_1_TypeDefinitionIndex = 59234;

class Class_2_E972752B9D4E2012_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Single Field_2_14; // 0x0
	::RPG::Client::UIStateCtrl* Field_2_6; // 0x60
	::Class_3_8B110DB69802966A* Field_2_8; // 0x68
	::UnityEngine::UI::Image* Field_2_5; // 0x70
	::UnityEngine::UI::Text* Field_2_1; // 0x78
	::UnityEngine::UI::Image* Field_2_3; // 0x80
	::UnityEngine::UI::Image* Field_2_2; // 0x88
	::RPG::Client::AnimatorButton* Field_2_4; // 0x90
	::System::Single Field_2_11; // 0x98
	::System::Int32 _Index_k__BackingField; // 0x9C
	::System::Single Field_2_13; // 0xA0
	::System::Single Field_2_12; // 0xA4
	::System::Boolean Field_2_10; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB4798F380B9BEA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_FB4798F380B9BEA5_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3787E953EE385D05(::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_3787E953EE385D05_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F296E07A0100A7(::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_41F296E07A0100A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_52CA0F45BC3414DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_52CA0F45BC3414DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_75351BABD20240A0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_75351BABD20240A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2FD964C82B25DEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_B2FD964C82B25DEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC6B6867CD198D12(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_DC6B6867CD198D12_OFFSET))(this, a1);
	}

	::Class_3_8B110DB69802966A* Method_2_BAFE8DC12CA1CDF9()
	{
		return ((::Class_3_8B110DB69802966A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_BAFE8DC12CA1CDF9_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_555EE80E6789B96C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_555EE80E6789B96C_OFFSET))(this, a1);
	}

	::System::Void Method_2_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_94CBD0C21A609187_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_022B0D58A3077BF2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
