#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_96290D3EA3548FA1;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_5E60A925302C0ACB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x169CCD30)
#define CLASS_2_5E60A925302C0ACB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x169CCEB0)
#define CLASS_2_5E60A925302C0ACB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x169CBFA0)
#define CLASS_2_5E60A925302C0ACB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x169CBFC0)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x169CC000)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_7AEA761C95272723_OFFSET UNITYSDK_OFFSET(0x169CC8B0)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_7D2BD1D8D2B63CC7_OFFSET UNITYSDK_OFFSET(0x169CC6D0)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x169CC350)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x169CC1F0)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_D2A677C6728D2D07_1_OFFSET UNITYSDK_OFFSET(0x169CC810)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_D2A677C6728D2D07_2_OFFSET UNITYSDK_OFFSET(0x169CC860)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_D2A677C6728D2D07_OFFSET UNITYSDK_OFFSET(0x169CC7C0)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x169CC300)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x169CCA90)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x169CCB70)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x169CCC50)
#define CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x169CC730)
#define CLASS_2_5E60A925302C0ACB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x169CBFB0)
#define CLASS_2_5E60A925302C0ACB__CTOR_OFFSET UNITYSDK_OFFSET(0x169CD010)
#define CLASS_2_5E60A925302C0ACB__ONBIND_OFFSET UNITYSDK_OFFSET(0x169CBEA0)
#define CLASS_2_5E60A925302C0ACB___REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x169CD060)
#define CLASS_2_5E60A925302C0ACB___REFRESHVIEW_B__19_2_OFFSET UNITYSDK_OFFSET(0x169CD0E0)

inline static constexpr unsigned int Class_2_5E60A925302C0ACB_TypeDefinitionIndex = 69046;

class Class_2_5E60A925302C0ACB : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::UInt32 Field_2_1 = 0x4; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x60
	::RPG::Client::NodeListViewPanel_1<::Class_2_96290D3EA3548FA1*>* Field_2_3; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_5; // 0x78
	::RPG::GameCore::GameEntity* Field_2_6; // 0x80
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_7; // 0x88
	::UnityEngine::UI::Button* Field_2_8; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_2_7D2BD1D8D2B63CC7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_7D2BD1D8D2B63CC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A677C6728D2D07(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_D2A677C6728D2D07_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A677C6728D2D07_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_D2A677C6728D2D07_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A677C6728D2D07_2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_D2A677C6728D2D07_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	static ::System::Boolean Method_2_7AEA761C95272723(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_7AEA761C95272723_OFFSET))(a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __RefreshView_b__19_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB___REFRESHVIEW_B__19_0_OFFSET))(this, a1);
	}

	::System::Void __RefreshView_b__19_2(::Class_2_96290D3EA3548FA1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_96290D3EA3548FA1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E60A925302C0ACB___REFRESHVIEW_B__19_2_OFFSET))(this, a1, a2);
	}
};
