#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4194FD1D0EB8BE87;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class CurveShakeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShakeDistanceAttenuation; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }

#define CLASS_1_469A5FF005CF3F5C_GET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0x162D5720)
#define CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x162D56E0)
#define CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0x162D56C0)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x162D5660)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0x162D56A0)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0x162D5700)
#define CLASS_1_469A5FF005CF3F5C_GET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0x162D5680)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_0250CE86089C8A72_OFFSET UNITYSDK_OFFSET(0x162D5160)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_0767ADDAA8C5C79F_OFFSET UNITYSDK_OFFSET(0x162D5740)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x162D50A0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_104669F3B9019C27_OFFSET UNITYSDK_OFFSET(0x162D4DA0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x162D4CC0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x162D4C60)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_288F74D11BE167E0_OFFSET UNITYSDK_OFFSET(0x162D3A80)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x162D33A0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_326A28A5AE4DF4B2_OFFSET UNITYSDK_OFFSET(0x162D2F50)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0x162D3950)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x162D38C0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x162D4D20)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x162D3190)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x162D3210)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x162D5200)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x162D39E0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x162D3470)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0x162D4B30)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x162D48D0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0x162D3CC0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_BA9C9FDB9BD04A4F_OFFSET UNITYSDK_OFFSET(0x162D5320)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_C6441B5A0FAE0587_OFFSET UNITYSDK_OFFSET(0x162D4500)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_F38398C364AE5340_OFFSET UNITYSDK_OFFSET(0x162D41A0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_F95CD767D6B25CA4_OFFSET UNITYSDK_OFFSET(0x162D4A00)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_FA2C1734FD4CF3EF_OFFSET UNITYSDK_OFFSET(0x162D4750)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x162D52C0)
#define CLASS_1_469A5FF005CF3F5C_SET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0x162D5730)
#define CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x162D56F0)
#define CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0x162D56D0)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x162D5670)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0x162D56B0)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0x162D5710)
#define CLASS_1_469A5FF005CF3F5C_SET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0x162D5690)
#define CLASS_1_469A5FF005CF3F5C__CTOR_OFFSET UNITYSDK_OFFSET(0x162D2D40)

inline static constexpr unsigned int Class_1_469A5FF005CF3F5C_TypeDefinitionIndex = 66515;

class Class_1_469A5FF005CF3F5C : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_2; // 0x18
	::RPG::GameCore::ShakeDistanceAttenuation* Field_1_3; // 0x20
	::RPG::GameCore::VCameraOverrideShakeV2* _OverrideShakeConfig_k__BackingField; // 0x28
	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* Field_1_5; // 0x30
	::RPG::Client::CameraBlendCurve* Field_1_6; // 0x38
	::RPG::GameCore::VCameraShakeV2* _ShakeConfig_k__BackingField; // 0x40
	::RPG::GameCore::GameEntity* Field_1_8; // 0x48
	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* Field_1_9; // 0x50
	::System::Single Field_1_10; // 0x58
	::System::Single Field_1_11; // 0x5C
	::System::Single Field_1_12; // 0x60
	::UnityEngine::Vector3 Field_1_13; // 0x64
	::System::Single _OverrideShakeScale_k__BackingField; // 0x70
	::System::Single _ShakeSourceScale_k__BackingField; // 0x74
	::UnityEngine::Vector3 Field_1_16; // 0x78
	::UnityEngine::Vector3 Field_1_17; // 0x84
	::System::Single Field_1_18; // 0x90
	::System::Single Field_1_19; // 0x94
	::System::Single Field_1_20; // 0x98
	::System::Boolean Field_1_21; // 0x9C
	::System::Boolean _IsUseFullPeriod_k__BackingField; // 0x9D
	::System::Boolean _TobeRemove_k__BackingField; // 0x9E
	::System::Single Field_1_24; // 0xA0
	::System::Single Field_1_25; // 0xA4
	::System::Single _ShakeMaxRange_k__BackingField; // 0xA8
	::UnityEngine::Vector3 Field_1_27; // 0xAC
	::System::Single Field_1_28; // 0xB8
	::System::Single Field_1_29; // 0xBC
	::UnityEngine::Vector3 Field_1_30; // 0xC0

	::System::Void _ctor(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_288F74D11BE167E0(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_288F74D11BE167E0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F38398C364AE5340()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_F38398C364AE5340_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C6441B5A0FAE0587()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_C6441B5A0FAE0587_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_A1C464B05BB7A5C1_1_OFFSET))(this);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Single Method_1_3422201382CE593B_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_B0C9E67798485BC6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_B0C9E67798485BC6_OFFSET))(this);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Single Method_1_104669F3B9019C27(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_104669F3B9019C27_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F95CD767D6B25CA4(::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_F95CD767D6B25CA4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_BA9C9FDB9BD04A4F(::Class_1_4194FD1D0EB8BE87* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_4194FD1D0EB8BE87*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_BA9C9FDB9BD04A4F_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* Method_1_326A28A5AE4DF4B2(::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>* a1)
	{
		return ((::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_326A28A5AE4DF4B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0250CE86089C8A72(::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_0250CE86089C8A72_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA2C1734FD4CF3EF(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Boolean a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_FA2C1734FD4CF3EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::VCameraShakeV2* get_ShakeConfig()
	{
		return ((::RPG::GameCore::VCameraShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_SHAKECONFIG_OFFSET))(this);
	}

	::System::Void set_ShakeConfig(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_SHAKECONFIG_OFFSET))(this, a1);
	}

	::System::Boolean get_TobeRemove()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_TOBEREMOVE_OFFSET))(this);
	}

	::System::Void set_TobeRemove(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_TOBEREMOVE_OFFSET))(this, a1);
	}

	::System::Single get_ShakeMaxRange()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_SHAKEMAXRANGE_OFFSET))(this);
	}

	::System::Void set_ShakeMaxRange(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_SHAKEMAXRANGE_OFFSET))(this, a1);
	}

	::System::Single get_OverrideShakeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKESCALE_OFFSET))(this);
	}

	::System::Void set_OverrideShakeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKESCALE_OFFSET))(this, a1);
	}

	::RPG::GameCore::VCameraOverrideShakeV2* get_OverrideShakeConfig()
	{
		return ((::RPG::GameCore::VCameraOverrideShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKECONFIG_OFFSET))(this);
	}

	::System::Void set_OverrideShakeConfig(::RPG::GameCore::VCameraOverrideShakeV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKECONFIG_OFFSET))(this, a1);
	}

	::System::Single get_ShakeSourceScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_SHAKESOURCESCALE_OFFSET))(this);
	}

	::System::Void set_ShakeSourceScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_SHAKESOURCESCALE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsUseFullPeriod()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_ISUSEFULLPERIOD_OFFSET))(this);
	}

	::System::Void set_IsUseFullPeriod(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_ISUSEFULLPERIOD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0767ADDAA8C5C79F(::RPG::GameCore::ShakeDistanceAttenuation* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShakeDistanceAttenuation*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_0767ADDAA8C5C79F_OFFSET))(this, a1, a2);
	}
};
