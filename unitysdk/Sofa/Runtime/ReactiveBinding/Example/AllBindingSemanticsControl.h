#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"

class Class_0_16E4307DCC419505_318;
class Class_1_3D9596FA876C6647;
class Class_1_7291C38274750BA2_2;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace Sofa::Runtime::ReactiveBinding::Example { class AllBindingSemanticsChildControl; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Toggle; }
template <typename T> class Class_0_16E4307DCC419505_320;
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197D1150)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197D3C70)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL__ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x197D3A10)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___BINDING_B__36_14_OFFSET UNITYSDK_OFFSET(0x197D4660)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int AllBindingSemanticsControl_TypeDefinitionIndex = 50354;

	class AllBindingSemanticsControl : public ::Sofa::BaseSofaControl_1<::Class_1_3D9596FA876C6647*>
	{
	public:
		// static const ::System::String* _ChildPrefabPath; // 0x0
		::R3::ReactiveProperty_1<::System::Boolean>* _ManualRefreshTrigger; // 0x58
		::Class_0_16E4307DCC419505_318* _StaticClickCommand; // 0x60
		::Class_0_16E4307DCC419505_318* _StaticShortDownCommand; // 0x68
		::Class_0_16E4307DCC419505_318* _StaticShortClickCommand; // 0x70
		::Class_0_16E4307DCC419505_318* _StaticLongClickCommand; // 0x78
		::Class_0_16E4307DCC419505_318* _StaticLongPressRepeatCommand; // 0x80
		::Class_0_16E4307DCC419505_318* _StaticReleaseCommand; // 0x88
		::Class_0_16E4307DCC419505_318* _StaticLongPressExitCommand; // 0x90
		::Class_0_16E4307DCC419505_318* _StaticOverShortClickTimeCommand; // 0x98
		::Class_0_16E4307DCC419505_320<::System::Single>* _StaticPressingDownCommand; // 0xA0
		::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* _StaticSelectCommand; // 0xA8
		::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* _StaticDeselectCommand; // 0xB0
		::UnityEngine::Transform* _RootPanel; // 0xB8
		::RPG::Client::LocalizedText* _TitleText; // 0xC0
		::RPG::Client::LocalizedText* _CountText; // 0xC8
		::RPG::Client::LocalizedText* _UnsignedCountText; // 0xD0
		::RPG::Client::LocalizedText* _TitleIdText; // 0xD8
		::RPG::Client::LocalizedText* _TitleIdWithArgsText; // 0xE0
		::RPG::Client::LocalizedText* _FixedTitleIdText; // 0xE8
		::UnityEngine::UI::Image* _IconImage; // 0xF0
		::UnityEngine::UI::Image* _MaterialImage; // 0xF8
		::UnityEngine::UI::Image* _TextureImage; // 0x100
		::UnityEngine::UI::Image* _FillImage; // 0x108
		::RPG::Client::AnimatorButton* _DirectButton; // 0x110
		::RPG::Client::AnimatorButton* _SelectorButton; // 0x118
		::UnityEngine::UI::Toggle* _Toggle; // 0x120
		::UnityEngine::UI::Slider* _Slider; // 0x128
		::UnityEngine::UI::InputField* _Input; // 0x130
		::Sofa::Runtime::ReactiveBinding::Example::AllBindingSemanticsChildControl* _InlineChildControl; // 0x138
		::Sofa::Runtime::ReactiveBinding::Example::AllBindingSemanticsChildControl* _CompletedChildControl; // 0x140
		::UnityEngine::Transform* _CompletedLoadRoot; // 0x148
		::UnityEngine::Transform* _MetaLoadRoot; // 0x150
		::UnityEngine::Transform* _PrefabPathLoadRoot; // 0x158
		::UnityEngine::Transform* _InstantiateRoot; // 0x160
		::RPG::Client::PrefabLoadMeta* _ChildPrefabMeta; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_3D9596FA876C6647*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_3D9596FA876C6647*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _OnMessage(::System::Object* a1, ::Class_1_7291C38274750BA2_2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_7291C38274750BA2_2*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL__ONMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void __Binding_b__36_14(::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::RPG::Client::AnimatorButton*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::RPG::Client::AnimatorButton*>))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___BINDING_B__36_14_OFFSET))(this, a1);
		}
	};
}
