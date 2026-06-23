#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoInLevelBase.h"

class Class_1_8289F2785D9AA990;
class Class_2_EA995402651EF7A9;
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { class Tweener; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOBUFFICON_ENABLENUMBERTEXT_OFFSET UNITYSDK_OFFSET(0x11632610)
#define MOLEMOLE_MONOBUFFICON_GETISMORE_OFFSET UNITYSDK_OFFSET(0x11633900)
#define MOLEMOLE_MONOBUFFICON_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x11631350)
#define MOLEMOLE_MONOBUFFICON_GET_BUFFNUMBER_OFFSET UNITYSDK_OFFSET(0x11631360)
#define MOLEMOLE_MONOBUFFICON_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x116338B0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x11633680)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x11632FC0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x11634980)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0x11632A60)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0x116348B0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x11632780)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x11634350)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x11632200)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_63626CD59AEEC164_OFFSET UNITYSDK_OFFSET(0x11633BB0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_79B136329E63E31A_OFFSET UNITYSDK_OFFSET(0x11634990)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11634960)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x11634D20)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x11634970)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11634950)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x11634180)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x11633560)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x116340C0)
#define MOLEMOLE_MONOBUFFICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11634740)
#define MOLEMOLE_MONOBUFFICON_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x11633180)
#define MOLEMOLE_MONOBUFFICON_REFRESHNUMBER_OFFSET UNITYSDK_OFFSET(0x11634640)
#define MOLEMOLE_MONOBUFFICON_REPLACEBUFFIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x11633AF0)
#define MOLEMOLE_MONOBUFFICON_RESETNUMBER_OFFSET UNITYSDK_OFFSET(0x11634690)
#define MOLEMOLE_MONOBUFFICON_SETCUSTOMNUM_OFFSET UNITYSDK_OFFSET(0x116346E0)
#define MOLEMOLE_MONOBUFFICON_SETUPMORESTATE_OFFSET UNITYSDK_OFFSET(0x11632EB0)
#define MOLEMOLE_MONOBUFFICON_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x11631370)
#define MOLEMOLE_MONOBUFFICON_SWITCHTOBUFF_OFFSET UNITYSDK_OFFSET(0x11633940)
#define MOLEMOLE_MONOBUFFICON_TICK_OFFSET UNITYSDK_OFFSET(0x11633D10)
#define MOLEMOLE_MONOBUFFICON__CCTOR_OFFSET UNITYSDK_OFFSET(0x11634880)
#define MOLEMOLE_MONOBUFFICON__CTOR_OFFSET UNITYSDK_OFFSET(0x116347A0)
#define MOLEMOLE_MONOBUFFICON___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x116348A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuffIcon_TypeDefinitionIndex = 42065;

	class MonoBuffIcon : public ::MoleMole::MonoInLevelBase
	{
	public:
		static ::System::Int32* StaticGet_BUFF_ICON_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuffIcon_TypeDefinitionIndex)->GetStaticField(0xB130);
		}
		static ::System::Int32* StaticGet_MULTIPLE_ROW_BUFF_ICON_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuffIcon_TypeDefinitionIndex)->GetStaticField(0xB134);
		}
		// static const ::System::Single Field_6_13; // 0x0
		// static const ::System::String* BUFF_ICON_PATH; // 0x0
		// static const ::System::String* BUFF_ICON_PREFEX_PATH; // 0x0
		// static const ::System::String* FADE_OUT_ANI; // 0x0
		// static const ::System::String* QUEUE_FADE_IN_ANI; // 0x0
		// static const ::System::String* QUEUE_FADE_OUT_ANI; // 0x0
		// static const ::System::String* FADE_IN_ANI; // 0x0
		// static const ::System::String* REPLACE_ANI; // 0x0
		::System::Int32 Field_6_0; // 0x20
		::UnityEngine::UI::Image* Field_6_1; // 0x28
		::UnityEngine::GameObject* Field_6_2; // 0x30
		::UnityEngine::UI::Image* Field_6_3; // 0x38
		::UnityEngine::Animation* Field_6_4; // 0x40
		::UnityEngine::Transform* Field_6_5; // 0x48
		::UnityEngine::Transform* Field_6_6; // 0x50
		::UnityEngine::GameObject* Field_6_7; // 0x58
		::UnityEngine::Transform* Field_6_8; // 0x60
		::UnityEngine::Transform* Field_6_9; // 0x68
		::System::Boolean enableNumberText; // 0x70
		::System::Boolean enableTimeDurationShow; // 0x71
		::System::Boolean Field_6_12; // 0x72
		::System::Boolean Field_6_14; // 0x73
		::System::Single Field_6_15; // 0x74
		::System::Single Field_6_16; // 0x78
		::UnityEngine::Animation* Field_6_17; // 0x80
		::DG::Tweening::Tweener* Field_6_18; // 0x88
		::DG::Tweening::TweenCallback* Field_6_19; // 0x90
		::System::Int32 removeIndex; // 0x98
		::System::Int32 Field_6_21; // 0x9C
		::UnityEngine::UI::Text* Field_6_22; // 0xA0
		::System::UInt32 Field_6_32; // 0xA8
		::Class_1_8289F2785D9AA990* Field_6_33; // 0xB0
		::System::Int32 Field_6_34; // 0xB8
		::System::Collections::Generic::List_1<::Class_2_EA995402651EF7A9*>* Field_6_35; // 0xC0
		::UnityEngine::Animation* Field_6_36; // 0xC8
		::Foundation::Coroutine::CoroutineHandle Field_6_37; // 0xD0
		::System::Action* Field_6_38; // 0xD8
		::System::Int32 Field_6_39; // 0xE0
		::System::Action* Field_6_40; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON__CCTOR_OFFSET))();
		}

		::System::Int32 get_BuffID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GET_BUFFID_OFFSET))(this);
		}

		::System::Int32 get_BuffNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GET_BUFFNUMBER_OFFSET))(this);
		}

		::System::Void SetupView(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETUPVIEW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnRemove(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_INTERRUPT_OFFSET))(this);
		}

		::System::Void SetupMoreState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETUPMORESTATE_OFFSET))(this, a1);
		}

		::System::Boolean GetIsMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GETISMORE_OFFSET))(this);
		}

		::System::Boolean SwitchToBuff(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SWITCHTOBUFF_OFFSET))(this, a1);
		}

		::System::Void ReplaceBuffImmediate(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_REPLACEBUFFIMMEDIATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_TICK_OFFSET))(this);
		}

		::System::Void EnableNumberText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ENABLENUMBERTEXT_OFFSET))(this, a1);
		}

		::System::Void RefreshNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_REFRESHNUMBER_OFFSET))(this);
		}

		::System::Void ResetNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_RESETNUMBER_OFFSET))(this);
		}

		::System::Void SetCustomNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETCUSTOMNUM_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Boolean Method_6_D240830C442C70A4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_D240830C442C70A4_OFFSET))(this);
		}

		::System::Void Method_6_2C1C2A8E63DB0F10(::Class_2_EA995402651EF7A9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_2C1C2A8E63DB0F10_OFFSET))(this, a1);
		}

		::System::Void Method_6_C114A1F8E08B6F92(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_OFFSET))(this, a1);
		}

		::System::Void Method_6_D0ACB47B641DF879()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_D0ACB47B641DF879_OFFSET))(this);
		}

		::System::Void Method_6_394F35BBA0EE596A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_394F35BBA0EE596A_OFFSET))(this);
		}

		::System::Void Method_6_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_6_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_6_147A527305B2FF1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_147A527305B2FF1B_OFFSET))(this);
		}

		::System::Void Method_6_C114A1F8E08B6F92_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_63626CD59AEEC164()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_63626CD59AEEC164_OFFSET))(this);
		}

		::System::Void Method_6_1293CB739F1151A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_1293CB739F1151A1_OFFSET))(this);
		}

		::System::Void Method_6_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Single Method_6_FC5102551AF3CB1A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_FC5102551AF3CB1A_OFFSET))(this);
		}

		::System::Void Method_6_5F08B426ADF31FF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_5F08B426ADF31FF5_OFFSET))(this);
		}

		::System::Int32 Method_6_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Boolean Method_6_79B136329E63E31A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_79B136329E63E31A_OFFSET))(this);
		}
	};
}
