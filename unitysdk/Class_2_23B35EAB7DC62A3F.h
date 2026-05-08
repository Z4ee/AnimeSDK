#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class NapLodControllerGroup;
class ShaderAniHelp;
namespace MoleMole { class MonoBuddyStairAnimCorrector; }
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole { class MonoSceneColliderWithAvatar; }
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881;

#define CLASS_2_23B35EAB7DC62A3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B0F170)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13B0F400)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_10_OFFSET UNITYSDK_OFFSET(0x13B0FA00)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_11_OFFSET UNITYSDK_OFFSET(0x13B0FA90)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_12_OFFSET UNITYSDK_OFFSET(0x13B0FB20)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_13_OFFSET UNITYSDK_OFFSET(0x13B0FBB0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_14_OFFSET UNITYSDK_OFFSET(0x13B0FC40)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_15_OFFSET UNITYSDK_OFFSET(0x13B0FCD0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_16_OFFSET UNITYSDK_OFFSET(0x13B0FD60)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_17_OFFSET UNITYSDK_OFFSET(0x13B0FDF0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_18_OFFSET UNITYSDK_OFFSET(0x13B0FE80)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_19_OFFSET UNITYSDK_OFFSET(0x13B0FF10)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_1_OFFSET UNITYSDK_OFFSET(0x13B0F4F0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_20_OFFSET UNITYSDK_OFFSET(0x13B0FFA0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_21_OFFSET UNITYSDK_OFFSET(0x13B10030)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_22_OFFSET UNITYSDK_OFFSET(0x13B100C0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_23_OFFSET UNITYSDK_OFFSET(0x13B10150)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_24_OFFSET UNITYSDK_OFFSET(0x13B101E0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_25_OFFSET UNITYSDK_OFFSET(0x13B10270)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_2_OFFSET UNITYSDK_OFFSET(0x13B0F580)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_3_OFFSET UNITYSDK_OFFSET(0x13B0F610)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_4_OFFSET UNITYSDK_OFFSET(0x13B0F6A0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_5_OFFSET UNITYSDK_OFFSET(0x13B0F730)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_6_OFFSET UNITYSDK_OFFSET(0x13B0F7C0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_7_OFFSET UNITYSDK_OFFSET(0x13B0F850)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_8_OFFSET UNITYSDK_OFFSET(0x13B0F8E0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_9_OFFSET UNITYSDK_OFFSET(0x13B0F970)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_OFFSET UNITYSDK_OFFSET(0x13B0F460)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_1_OFFSET UNITYSDK_OFFSET(0x13B0EFD0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_OFFSET UNITYSDK_OFFSET(0x13B0EDC0)
#define CLASS_2_23B35EAB7DC62A3F_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x13B0EBC0)
#define CLASS_2_23B35EAB7DC62A3F_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13B0F380)
#define CLASS_2_23B35EAB7DC62A3F_UPDATE_OFFSET UNITYSDK_OFFSET(0x13B0E870)
#define CLASS_2_23B35EAB7DC62A3F__CTOR_OFFSET UNITYSDK_OFFSET(0x13B0D6B0)

inline static constexpr unsigned int Class_2_23B35EAB7DC62A3F_TypeDefinitionIndex = 41951;

class Class_2_23B35EAB7DC62A3F : public ::Foundation::SingletonDisposable_1<::Class_2_23B35EAB7DC62A3F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_2_14; // 0x10
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::UIButtonSizeHandler*>* Field_2_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_2_13; // 0x20
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::UIGeneralKeyPanelWidgetController*>* Field_2_6; // 0x28
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::MonoSceneColliderWithAvatar*>* Field_2_2; // 0x30
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_4; // 0x38
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::StaticSceneObjectWidget*>* Field_2_3; // 0x40
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::NapLodControllerGroup*>* Field_2_11; // 0x48
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::ShaderAniHelp*>* Field_2_7; // 0x50
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::UnityEngine::UI::Extension::UIButtonEx*>* Field_2_5; // 0x58
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::MonoEffectPluginTransform*>* Field_2_12; // 0x60
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* Field_2_10; // 0x68
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::UIButtonPosHandler*>* Field_2_8; // 0x70
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::MonoBuddyStairAnimCorrector*>* Field_2_0; // 0x78
	::Class_2_23B35EAB7DC62A3F_Class_1_A9E1F748A0810881<::MoleMole::SceneObjectStateWidget*>* Field_2_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F__CTOR_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_OFFSET))(this, a1);
	}

	::System::Void Method_2_64865938ADBCB300_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_64865938ADBCB300_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_1(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_2(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_3(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_4(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_5(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_6(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_7(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_8(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_9(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_10(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_10_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_11(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_11_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_12(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_12_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_13(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_13_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_365B068608526513_14(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_14_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_15(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_15_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_16(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_16_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_17(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_17_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_18(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_18_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_19(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_19_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_20(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_20_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_21(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_21_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_22(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_22_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_23(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_23_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_24(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_24_OFFSET))(this, a1);
	}

	::System::Void Method_2_365B068608526513_25(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_23B35EAB7DC62A3F_METHOD_2_365B068608526513_25_OFFSET))(this, a1);
	}
};
