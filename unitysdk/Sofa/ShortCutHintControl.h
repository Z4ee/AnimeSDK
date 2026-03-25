#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_2_EF38A48BFE5B16E9;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIPartialBlur; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0xABD2DD0)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xABD2750)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_8BD6897B2A515B73_OFFSET UNITYSDK_OFFSET(0xABD2980)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xABD2250)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xABD25D0)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_CCA302292204F69D_OFFSET UNITYSDK_OFFSET(0xABD2AF0)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_CEE2550285AA5985_1_OFFSET UNITYSDK_OFFSET(0xABD3080)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0xABD2F70)
#define SOFA_SHORTCUTHINTCONTROL_METHOD_6_D67C01E967FCF1F8_OFFSET UNITYSDK_OFFSET(0xABD24A0)
#define SOFA_SHORTCUTHINTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xABD3220)
#define SOFA_SHORTCUTHINTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xABD21E0)
#define SOFA_SHORTCUTHINTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xABD1F10)
#define SOFA_SHORTCUTHINTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xABD3300)
#define SOFA_SHORTCUTHINTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xABD32C0)

namespace Sofa
{
	inline static constexpr unsigned int ShortCutHintControl_TypeDefinitionIndex = 38566;

	class ShortCutHintControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* Field_6_11; // 0x0
		// static const ::System::String* Field_6_12; // 0x0
		// static const ::System::String* Field_6_13; // 0x0
		::UnityEngine::Transform* NodeHintParent; // 0x30
		::System::Boolean Field_6_1; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* Field_6_2; // 0x40
		::RPG::UINavigation::UINavigationZoneManager* Field_6_3; // 0x48
		::UnityEngine::Transform* Field_6_4; // 0x50
		::UnityEngine::RectTransform* Field_6_5; // 0x58
		::RPG::Client::PrefabLoadMeta* Field_6_6; // 0x60
		::RPG::Client::UIPartialBlur* Field_6_7; // 0x68
		::UnityEngine::Transform* Field_6_8; // 0x70
		::System::Collections::Generic::List_1<::Class_2_EF38A48BFE5B16E9*>* Field_6_9; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* Field_6_10; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_6_ACE888BF6F5BC5FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_ACE888BF6F5BC5FD_OFFSET))(this);
		}

		::System::Void Method_6_D67C01E967FCF1F8(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_D67C01E967FCF1F8_OFFSET))(this, a1);
		}

		::System::Void Method_6_AFC8215C57A0845A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_AFC8215C57A0845A_OFFSET))(this);
		}

		::System::Void Method_6_6E6682ED9FD6F719()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_6E6682ED9FD6F719_OFFSET))(this);
		}

		::System::Void Method_6_8BD6897B2A515B73(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_8BD6897B2A515B73_OFFSET))(this, a1);
		}

		::Class_2_EF38A48BFE5B16E9* Method_6_CCA302292204F69D(::System::Int32 a1)
		{
			return ((::Class_2_EF38A48BFE5B16E9*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_CCA302292204F69D_OFFSET))(this, a1);
		}

		::System::Void Method_6_464F9487BF0D77F8(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_464F9487BF0D77F8_OFFSET))(this, a1);
		}

		::System::Void Method_6_CEE2550285AA5985(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_CEE2550285AA5985_OFFSET))(this, a1);
		}

		::System::Void Method_6_CEE2550285AA5985_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL_METHOD_6_CEE2550285AA5985_1_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
