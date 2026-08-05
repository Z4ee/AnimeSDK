#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A48C0117A1B22E8.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1196AAB0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_11CB8F7F5EEBC81C_OFFSET UNITYSDK_OFFSET(0x1196E1C0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_1E78778740C9018B_OFFSET UNITYSDK_OFFSET(0x1196CC50)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x1196DC60)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1196C4E0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_28D363DF555D783B_OFFSET UNITYSDK_OFFSET(0x1196C580)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_2FF1F138BE28DF38_OFFSET UNITYSDK_OFFSET(0x1196D730)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_37DE2595CD3E5068_OFFSET UNITYSDK_OFFSET(0x1196A230)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1196D010)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_3D3CB48C54DEF226_OFFSET UNITYSDK_OFFSET(0x1196DCE0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x1196AC80)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1196E170)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_406C4732CEABCBBF_OFFSET UNITYSDK_OFFSET(0x1196D320)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x1196D3E0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_541F933942E93831_OFFSET UNITYSDK_OFFSET(0x1196CC60)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0x1196B2D0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0x1196D780)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x1196B970)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_6E1602E0C886AF52_OFFSET UNITYSDK_OFFSET(0x1196AF60)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1196C000)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_9402B0CF84FE013D_OFFSET UNITYSDK_OFFSET(0x1196CBF0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x1196AA30)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1196A9B0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_AC920826F1341C70_OFFSET UNITYSDK_OFFSET(0x1196C670)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1196C110)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_B03BC87E71B54C65_OFFSET UNITYSDK_OFFSET(0x1196C490)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1196C250)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_C3546391C3475739_OFFSET UNITYSDK_OFFSET(0x1196CC70)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1196D440)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1196CFC0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_CCC8B497D12B0C6F_OFFSET UNITYSDK_OFFSET(0x1196C330)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_D05288D9EB50D91E_OFFSET UNITYSDK_OFFSET(0x1196D370)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_E1C0D29EBD41D502_OFFSET UNITYSDK_OFFSET(0x1196D490)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_E2CD5451E4D4A7F0_OFFSET UNITYSDK_OFFSET(0x1196E270)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_EB456DD68432A78A_OFFSET UNITYSDK_OFFSET(0x1196D720)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_F96E154F3753D74D_OFFSET UNITYSDK_OFFSET(0x1196D0A0)
#define CLASS_2_C2B4B123B5A9B78A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1196C2F0)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11969FF0)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1196A030)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1196A130)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1196A1C0)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1196A210)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_OFFSET UNITYSDK_OFFSET(0x11969FD0)

inline static constexpr unsigned int Class_2_C2B4B123B5A9B78A_TypeDefinitionIndex = 72152;

class Class_2_C2B4B123B5A9B78A : public ::Class_1_0A48C0117A1B22E8
{
public:
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C2B4B123B5A9B78A_TypeDefinitionIndex)->GetStaticField(0x10210);
	}
	::System::String* Field_2_5; // 0xF8
	::MoleMole::UIAvatarLightSetting* Field_2_9; // 0x100
	::MoleMole::UIAvatarAnimator* Field_2_2; // 0x108
	::MoleMole::UIAvatarLightSetting* Field_2_6; // 0x110
	::MoleMole::UIAvatarAnimatorParamsSetting* Field_2_14; // 0x118
	::MoleMole::UIAvatarAnimator* Field_2_1; // 0x120
	::MoleMole::SecondaryCharacterShowSetting* Field_2_0; // 0x128
	::UnityEngine::Vector3 Field_2_12; // 0x130
	::System::Int32 Field_2_10; // 0x13C
	::UnityEngine::Vector2 Field_2_15; // 0x140
	::System::Int32 Field_2_7; // 0x148
	::System::Int32 Field_2_11; // 0x14C
	::System::Boolean Field_2_8; // 0x150
	::System::Boolean Field_2_19; // 0x151
	::System::Boolean Field_2_13; // 0x152

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Enum_3_BB702611CCC85D7E a4, ::System::Boolean a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Enum_3_BB702611CCC85D7E a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::String* a5, ::System::Boolean a6, ::Enum_3_BB702611CCC85D7E a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::UnityEngine::GameObject* a5, ::UnityEngine::GameObject* a6, ::System::Boolean a7, ::System::String* a8, ::System::Boolean a9, ::Enum_3_BB702611CCC85D7E a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void _ctor_4(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::Enum_3_BB702611CCC85D7E a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_5(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::Enum_3_BB702611CCC85D7E a6, ::System::Boolean a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_37DE2595CD3E5068()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_37DE2595CD3E5068_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_CCC8B497D12B0C6F(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::MoleMole::AvatarShowSetting* a3, ::System::String* a4, ::System::Int32 a5, ::System::Action* a6, ::MoleMole::Config::EntityType a7)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_CCC8B497D12B0C6F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_B03BC87E71B54C65(::MoleMole::UIAvatarLightSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_B03BC87E71B54C65_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_2_28D363DF555D783B(::Foundation::AssetPath a1, ::MoleMole::AvatarShowSetting* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::MoleMole::Config::EntityType a6)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_28D363DF555D783B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_AC920826F1341C70(::MoleMole::UIAvatarAnimator* a1, ::MoleMole::UIAvatarAnimatorParamsSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_AC920826F1341C70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9402B0CF84FE013D(::MoleMole::UIAvatarAnimatorParamsSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_9402B0CF84FE013D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E78778740C9018B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_1E78778740C9018B_OFFSET))(this);
	}

	::MoleMole::UIAvatarLightSetting* Method_2_541F933942E93831()
	{
		return ((::MoleMole::UIAvatarLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_541F933942E93831_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_F96E154F3753D74D(::MoleMole::UIAvatarAnimator* a1, ::MoleMole::AnimatorRandomIntConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::AnimatorRandomIntConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_F96E154F3753D74D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62FC2DCD2EF869D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_62FC2DCD2EF869D5_OFFSET))(this);
	}

	::MoleMole::UIAvatarAnimator* Method_2_406C4732CEABCBBF()
	{
		return ((::MoleMole::UIAvatarAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_406C4732CEABCBBF_OFFSET))(this);
	}

	::System::Void Method_2_D05288D9EB50D91E(::MoleMole::UIAvatarAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_D05288D9EB50D91E_OFFSET))(this, a1);
	}

	::System::Void Method_2_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6E1602E0C886AF52(::MoleMole::UIAvatarSetting* a1, ::MoleMole::UIAvatarGraphics* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarSetting*, ::MoleMole::UIAvatarGraphics*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_6E1602E0C886AF52_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C3546391C3475739(::MoleMole::AnimatorRandomIntConfig* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::AnimatorRandomIntConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_C3546391C3475739_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB456DD68432A78A(::MoleMole::UIAvatarLightSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_EB456DD68432A78A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FF1F138BE28DF38(::MoleMole::UIAvatarAnimatorParamsSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_2FF1F138BE28DF38_OFFSET))(this, a1);
	}

	::System::Void Method_2_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_63EDAB3EFF913F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_261DF843E298B71B_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_3D3CB48C54DEF226(::Foundation::AssetPath a1, ::MoleMole::AvatarShowSetting* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::MoleMole::Config::EntityType a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_3D3CB48C54DEF226_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_672D56D99D734395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_672D56D99D734395_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_11CB8F7F5EEBC81C(::System::String* a1, ::MoleMole::AvatarShowSetting* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::MoleMole::Config::EntityType a6)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::String*, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_11CB8F7F5EEBC81C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_E2CD5451E4D4A7F0(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_E2CD5451E4D4A7F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E1C0D29EBD41D502(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_E1C0D29EBD41D502_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}
};
