#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB024667087A129E.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_17E13DA9082D064E;
class Class_1_885547C50DA072F4;
class Class_2_CE1D38169180A5FA;
class Class_2_D3A848D30F852ED2;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define CLASS_1_0A48C0117A1B22E8_METHOD_1_064915C8D2FD02D5_OFFSET UNITYSDK_OFFSET(0x14D47AA0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0781C96209259234_OFFSET UNITYSDK_OFFSET(0x14D46640)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0x14D481A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x14D478A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x14D42550)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14D43940)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_246D76D579893479_OFFSET UNITYSDK_OFFSET(0x14D45510)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14D439E0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_26B43D79F856B73A_OFFSET UNITYSDK_OFFSET(0x14D45DF0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_27670C6000CA1668_OFFSET UNITYSDK_OFFSET(0x14D45FC0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14D439A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_3A055A26A902FDA8_OFFSET UNITYSDK_OFFSET(0x14D44170)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_3D25BCF2F8C75054_OFFSET UNITYSDK_OFFSET(0x14D43740)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x14D41C20)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_4C6A485322DE374D_OFFSET UNITYSDK_OFFSET(0x14D483C0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_53D44F03396391F5_OFFSET UNITYSDK_OFFSET(0x14D433B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_54D69E1733B1C161_OFFSET UNITYSDK_OFFSET(0x14D41920)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x14D44770)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_7EA938E21BAABF69_OFFSET UNITYSDK_OFFSET(0x14D458C0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x14D452B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x14D43A50)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x14D42C30)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x14D44900)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_952B14564BB0B766_OFFSET UNITYSDK_OFFSET(0x14D480A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x14D44970)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x14D47A40)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x14D47A90)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_AAE8E12A92CB7E79_OFFSET UNITYSDK_OFFSET(0x14D47700)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_B65911EDBA9C245A_OFFSET UNITYSDK_OFFSET(0x14D46520)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_B6D7337728BFC026_OFFSET UNITYSDK_OFFSET(0x14D43DB0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x14D42F90)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C390277C8D18B275_OFFSET UNITYSDK_OFFSET(0x14D456C0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x14D42CD0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14D481F0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_D63F3711B277868F_OFFSET UNITYSDK_OFFSET(0x14D44390)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_D9C141A78608F74A_OFFSET UNITYSDK_OFFSET(0x14D41310)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_E022FE66EE72F678_OFFSET UNITYSDK_OFFSET(0x14D425D0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x14D41AD0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0x14D45850)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EBD641E27DFB94CE_OFFSET UNITYSDK_OFFSET(0x14D43E50)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14D48200)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EEADD173C3A67CED_OFFSET UNITYSDK_OFFSET(0x14D46130)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14D458B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0A86D68E04AD132_OFFSET UNITYSDK_OFFSET(0x14D44EB0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_1_OFFSET UNITYSDK_OFFSET(0x14D474E0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_OFFSET UNITYSDK_OFFSET(0x14D43BF0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x14D44D20)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_FAC02AE2DEAC3F16_OFFSET UNITYSDK_OFFSET(0x14D42230)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x14D48400)
#define CLASS_1_0A48C0117A1B22E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D43A40)
#define CLASS_1_0A48C0117A1B22E8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14D42890)
#define CLASS_1_0A48C0117A1B22E8__CTOR_2_OFFSET UNITYSDK_OFFSET(0x14D42970)
#define CLASS_1_0A48C0117A1B22E8__CTOR_3_OFFSET UNITYSDK_OFFSET(0x14D42D20)
#define CLASS_1_0A48C0117A1B22E8__CTOR_OFFSET UNITYSDK_OFFSET(0x14D41100)

inline static constexpr unsigned int Class_1_0A48C0117A1B22E8_TypeDefinitionIndex = 60517;

class Class_1_0A48C0117A1B22E8 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A48C0117A1B22E8_TypeDefinitionIndex)->GetStaticField(0x11D20);
	}
	// static const ::System::Single Field_1_34; // 0x0
	::UnityEngine::GameObject* Field_1_19; // 0x10
	::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* Field_1_23; // 0x18
	::UnityEngine::Light* Field_1_16; // 0x20
	::MoleMole::AvatarShowSetting* Field_1_0; // 0x28
	::MoleMole::UIAvatarGraphics* Field_1_20; // 0x30
	::Class_2_CE1D38169180A5FA* Field_1_26; // 0x38
	::UnityEngine::Transform* Field_1_15; // 0x40
	::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* Field_1_17; // 0x48
	::Class_1_17E13DA9082D064E* Field_1_12; // 0x50
	::UnityEngine::Camera* Field_1_18; // 0x58
	::UnityEngine::GameObject* Field_1_4; // 0x60
	::Class_2_D3A848D30F852ED2* Field_1_30; // 0x68
	::MoleMole::UIAvatarGraphics* Field_1_27; // 0x70
	::Class_1_885547C50DA072F4* Field_1_21; // 0x78
	::UnityEngine::NAPRenderPipeline0::RTHandle* Field_1_13; // 0x80
	::UnityEngine::GameObject* Field_1_11; // 0x88
	::UnityEngine::Vector2 Field_1_29; // 0x90
	::System::UInt32 Field_1_14; // 0x98
	::System::Single Field_1_8; // 0x9C
	::UnityEngine::Quaternion Field_1_24; // 0xA0
	::UnityEngine::Quaternion Field_1_31; // 0xB0
	::System::Boolean Field_1_5; // 0xC0
	::System::Boolean Field_1_32; // 0xC1
	::System::Boolean Field_1_6; // 0xC2
	::System::Boolean Field_1_10; // 0xC3
	::Enum_3_BB702611CCC85D7E Field_1_7; // 0xC4
	::UnityEngine::Vector2 Field_1_25; // 0xC8
	::System::Single Field_1_22; // 0xD0
	::UnityEngine::Quaternion Field_1_28; // 0xD4
	::UnityEngine::Quaternion Field_1_35; // 0xE4
	::System::Single Field_1_9; // 0xF4

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Enum_3_BB702611CCC85D7E a4, ::System::Boolean a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::String* a5, ::System::Boolean a6, ::Enum_3_BB702611CCC85D7E a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::UnityEngine::GameObject* a5, ::UnityEngine::GameObject* a6, ::System::Boolean a7, ::System::String* a8, ::System::Boolean a9, ::Enum_3_BB702611CCC85D7E a10, ::UnityEngine::Experimental::Rendering::GraphicsFormat a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::Enum_3_BB702611CCC85D7E a6, ::System::Boolean a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CCTOR_OFFSET))();
	}

	::System::Void Method_1_BC5B668148D964CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_BC5B668148D964CC_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Void Method_1_F0ABFE8CE60664A3(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6D7337728BFC026(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Config::EntityType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Config::EntityType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_B6D7337728BFC026_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3A055A26A902FDA8(::MoleMole::UIAvatarGraphics* a1, ::System::Boolean a2, ::UnityEngine::Vector4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::System::Boolean, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_3A055A26A902FDA8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D63F3711B277868F(::Enum_3_BB024667087A129E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB024667087A129E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_D63F3711B277868F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FAC02AE2DEAC3F16(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_FAC02AE2DEAC3F16_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_1_53D44F03396391F5(::Enum_3_BB024667087A129E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB024667087A129E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_53D44F03396391F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Single Method_1_D9C141A78608F74A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_D9C141A78608F74A_OFFSET))(this);
	}

	::System::Void Method_1_F0A86D68E04AD132(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0A86D68E04AD132_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EB44EFCB44CBA9C1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_7EA938E21BAABF69(::System::Boolean a1, ::System::UInt32 a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_7EA938E21BAABF69_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::RenderTexture* Method_1_B65911EDBA9C245A(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Action* a4, ::MoleMole::Config::EntityType a5)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_B65911EDBA9C245A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_27670C6000CA1668(::MoleMole::UIAvatarLightSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_27670C6000CA1668_OFFSET))(this, a1);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Single Method_1_54D69E1733B1C161(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_54D69E1733B1C161_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::Enum_3_BB702611CCC85D7E Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_BB702611CCC85D7E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_AAE8E12A92CB7E79(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_AAE8E12A92CB7E79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EEADD173C3A67CED(::MoleMole::UIAvatarLightSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EEADD173C3A67CED_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_6B5EA38BAE5646C2_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_0781C96209259234(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Action* a4, ::MoleMole::Config::EntityType a5, ::Foundation::AssetPath a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType, ::Foundation::AssetPath, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0781C96209259234_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0C60A530AA0118C2_OFFSET))(this);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_C390277C8D18B275(::MoleMole::UIAvatarGraphics* a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C390277C8D18B275_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_064915C8D2FD02D5(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2, ::UnityEngine::GameObject* a3, ::Foundation::AssetPath a4, ::Class_1_17E13DA9082D064E* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::Foundation::AssetPath, ::Class_1_17E13DA9082D064E*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_064915C8D2FD02D5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3D25BCF2F8C75054(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_3D25BCF2F8C75054_OFFSET))(this, a1);
	}

	::System::Void Method_1_246D76D579893479(::MoleMole::UIAvatarGraphics* a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_246D76D579893479_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_F0ABFE8CE60664A3_1(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_952B14564BB0B766(::Foundation::AssetPath a1, ::Class_1_17E13DA9082D064E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_1_17E13DA9082D064E*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_952B14564BB0B766_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBD641E27DFB94CE(::UnityEngine::GameObject* a1, ::Class_1_17E13DA9082D064E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_17E13DA9082D064E*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EBD641E27DFB94CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E022FE66EE72F678(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_E022FE66EE72F678_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_1_4C6A485322DE374D()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_4C6A485322DE374D_OFFSET))(this);
	}

	::System::Void Method_1_26B43D79F856B73A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_26B43D79F856B73A_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}
};
