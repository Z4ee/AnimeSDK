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

class Class_1_02FC78A5CBD572A1;
class Class_1_17E13DA9082D064E;
class Class_1_885547C50DA072F4;
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

#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0651185C8BEF53DF_OFFSET UNITYSDK_OFFSET(0x1907ED90)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0x1907ED40)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x19081B90)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1AAEC0E165106A76_OFFSET UNITYSDK_OFFSET(0x1907F3A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1907D0C0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1907E5A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x1907E7B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_2617F41DBADFE046_OFFSET UNITYSDK_OFFSET(0x1907F1B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1907E640)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1907E600)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_3D25BCF2F8C75054_OFFSET UNITYSDK_OFFSET(0x1907E3B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_4C6A485322DE374D_OFFSET UNITYSDK_OFFSET(0x1907EB50)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_54D69E1733B1C161_OFFSET UNITYSDK_OFFSET(0x1907C4A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x190812B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x1907D7A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1907C7A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_8E7F32F9ED6E2062_OFFSET UNITYSDK_OFFSET(0x19080B30)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x19081840)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_952B14564BB0B766_OFFSET UNITYSDK_OFFSET(0x1907E6B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1907F350)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19081830)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_B3231D3EC6C6CA19_OFFSET UNITYSDK_OFFSET(0x1907DEE0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_B65911EDBA9C245A_OFFSET UNITYSDK_OFFSET(0x190818B0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x1907DAD0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x1907D820)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19081D30)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_D9C141A78608F74A_OFFSET UNITYSDK_OFFSET(0x1907BE90)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_E022FE66EE72F678_OFFSET UNITYSDK_OFFSET(0x1907D140)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1907C650)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0x19081D50)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x190819D0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19081D40)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0A86D68E04AD132_OFFSET UNITYSDK_OFFSET(0x19081440)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_1_OFFSET UNITYSDK_OFFSET(0x1907FA70)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_OFFSET UNITYSDK_OFFSET(0x1907EB90)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F20478F359C58010_OFFSET UNITYSDK_OFFSET(0x1907FC80)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x19081120)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_FAC02AE2DEAC3F16_OFFSET UNITYSDK_OFFSET(0x1907CDA0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1907F0A0)
#define CLASS_1_0A48C0117A1B22E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1907E6A0)
#define CLASS_1_0A48C0117A1B22E8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1907D410)
#define CLASS_1_0A48C0117A1B22E8__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1907D4F0)
#define CLASS_1_0A48C0117A1B22E8__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1907D870)
#define CLASS_1_0A48C0117A1B22E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1907BC80)

inline static constexpr unsigned int Class_1_0A48C0117A1B22E8_TypeDefinitionIndex = 50589;

class Class_1_0A48C0117A1B22E8 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A48C0117A1B22E8_TypeDefinitionIndex)->GetStaticField(0xD6B0);
	}
	// static const ::System::Single Field_1_25; // 0x0
	::Class_1_02FC78A5CBD572A1* Field_1_21; // 0x10
	::MoleMole::UIAvatarGraphics* Field_1_19; // 0x18
	::UnityEngine::GameObject* Field_1_12; // 0x20
	::UnityEngine::NAPRenderPipeline0::RTHandle* Field_1_10; // 0x28
	::UnityEngine::GameObject* Field_1_3; // 0x30
	::MoleMole::UIAvatarGraphics* Field_1_20; // 0x38
	::Class_1_885547C50DA072F4* Field_1_18; // 0x40
	::UnityEngine::Light* Field_1_15; // 0x48
	::UnityEngine::Transform* Field_1_8; // 0x50
	::UnityEngine::Camera* Field_1_13; // 0x58
	::Class_1_17E13DA9082D064E* Field_1_11; // 0x60
	::UnityEngine::GameObject* Field_1_4; // 0x68
	::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* Field_1_16; // 0x70
	::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* Field_1_14; // 0x78
	::System::UInt32 Field_1_9; // 0x80
	::System::Single Field_1_7; // 0x84
	::System::Single Field_1_6; // 0x88
	::System::Boolean Field_1_1; // 0x8C
	::System::Boolean Field_1_27; // 0x8D
	::System::Boolean Field_1_5; // 0x8E
	::System::Boolean Field_1_2; // 0x8F
	::System::Single Field_1_17; // 0x90
	::Enum_3_BB702611CCC85D7E Field_1_0; // 0x94
	::UnityEngine::Quaternion Field_1_24; // 0x98
	::UnityEngine::Vector2 Field_1_22; // 0xA8
	::UnityEngine::Quaternion Field_1_23; // 0xB0

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

	::System::Void Method_1_952B14564BB0B766(::Foundation::AssetPath a1, ::Class_1_17E13DA9082D064E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_1_17E13DA9082D064E*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_952B14564BB0B766_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D25BCF2F8C75054(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_3D25BCF2F8C75054_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_1_4C6A485322DE374D()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_4C6A485322DE374D_OFFSET))(this);
	}

	::System::Void Method_1_F0ABFE8CE60664A3(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0C60A530AA0118C2_OFFSET))(this);
	}

	::System::Void Method_1_0651185C8BEF53DF(::UnityEngine::GameObject* a1, ::Class_1_17E13DA9082D064E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_17E13DA9082D064E*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0651185C8BEF53DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Single Method_1_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2617F41DBADFE046(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_2617F41DBADFE046_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_54D69E1733B1C161(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_54D69E1733B1C161_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AAEC0E165106A76(::System::Boolean a1, ::System::UInt32 a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1AAEC0E165106A76_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::RenderTexture* Method_1_F20478F359C58010(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Action* a4, ::MoleMole::Config::EntityType a5, ::Foundation::AssetPath a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType, ::Foundation::AssetPath, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F20478F359C58010_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAC02AE2DEAC3F16(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_FAC02AE2DEAC3F16_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_D9C141A78608F74A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_D9C141A78608F74A_OFFSET))(this);
	}

	::System::Void Method_1_F0A86D68E04AD132(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0A86D68E04AD132_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E022FE66EE72F678(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_E022FE66EE72F678_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3231D3EC6C6CA19(::Enum_3_BB024667087A129E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB024667087A129E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_B3231D3EC6C6CA19_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_6B5EA38BAE5646C2_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::Enum_3_BB702611CCC85D7E Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_BB702611CCC85D7E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_8E7F32F9ED6E2062(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2, ::UnityEngine::GameObject* a3, ::Foundation::AssetPath a4, ::Class_1_17E13DA9082D064E* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::Foundation::AssetPath, ::Class_1_17E13DA9082D064E*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_8E7F32F9ED6E2062_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_1_B65911EDBA9C245A(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Action* a4, ::MoleMole::Config::EntityType a5)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_B65911EDBA9C245A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F0ABFE8CE60664A3_1(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0ABFE8CE60664A3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EB44EFCB44CBA9C1_OFFSET))(this);
	}
};
