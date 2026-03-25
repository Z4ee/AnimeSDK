#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }
namespace RPG::GameCore { class SwitchChallengeBossInfoPanelState; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ED2CE91D3D737CA7_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8B9CB00)
#define CLASS_2_ED2CE91D3D737CA7_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8B9CC70)
#define CLASS_2_ED2CE91D3D737CA7_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8B9AF40)
#define CLASS_2_ED2CE91D3D737CA7_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x8B9AF60)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x8B9BE90)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_1AE24536EC302522_OFFSET UNITYSDK_OFFSET(0x8B9B820)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_5633C39E0F4C80C6_OFFSET UNITYSDK_OFFSET(0x8B9C140)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8B9CF00)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8B9CEA0)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x8B9C8F0)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_8C0F82AA8DA03496_OFFSET UNITYSDK_OFFSET(0x8B9C300)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8B9BC80)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8B9C7E0)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8B9CA00)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8B9C6F0)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_BA60B5B08BA71FA9_OFFSET UNITYSDK_OFFSET(0x8B9C530)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_D10D72BF522CC48B_OFFSET UNITYSDK_OFFSET(0x8B9C5C0)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x8B9B690)
#define CLASS_2_ED2CE91D3D737CA7_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x8B9C640)
#define CLASS_2_ED2CE91D3D737CA7_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x8B9AF50)
#define CLASS_2_ED2CE91D3D737CA7__CTOR_OFFSET UNITYSDK_OFFSET(0x8B9CDC0)
#define CLASS_2_ED2CE91D3D737CA7__ONBIND_OFFSET UNITYSDK_OFFSET(0x8B9B270)
#define CLASS_2_ED2CE91D3D737CA7__ONTICK_OFFSET UNITYSDK_OFFSET(0x8B9BD40)
#define CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8B9CFD0)
#define CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8B9D030)
#define CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8B9CE40)
#define CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8B9CF60)

inline static constexpr unsigned int Class_2_ED2CE91D3D737CA7_TypeDefinitionIndex = 59052;

class Class_2_ED2CE91D3D737CA7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_9; // 0x0
	::UnityEngine::UI::Text* Field_2_6; // 0x60
	::UnityEngine::CanvasGroup* Field_2_8; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::RPG::Client::AnimatorButton* Field_2_2; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::UnityEngine::Animation* Field_2_5; // 0x88
	::RPG::Client::AnimatorButton* Field_2_1; // 0x90
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* Field_2_12; // 0x98
	::UnityEngine::CanvasGroup* Field_2_7; // 0xA0
	::System::Int32 Field_2_11; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xAC
	::RPG::Client::TextID Field_2_10; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_GET_TRANS_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_1AE24536EC302522(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_1AE24536EC302522_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_8C0F82AA8DA03496(::RPG::GameCore::SwitchChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_8C0F82AA8DA03496_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA60B5B08BA71FA9(::RPG::GameCore::AddChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_BA60B5B08BA71FA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D10D72BF522CC48B(::RPG::GameCore::RemoveChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_D10D72BF522CC48B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_5633C39E0F4C80C6()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_5633C39E0F4C80C6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2CE91D3D737CA7___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
