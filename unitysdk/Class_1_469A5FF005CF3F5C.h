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

#define CLASS_1_469A5FF005CF3F5C_GET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0xB5F19A0)
#define CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB5F1960)
#define CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0xB5F1940)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB5F18E0)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0xB5F1920)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0xB5F1980)
#define CLASS_1_469A5FF005CF3F5C_GET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0xB5F1900)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_0250CE86089C8A72_OFFSET UNITYSDK_OFFSET(0xB5F13E0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_0767ADDAA8C5C79F_OFFSET UNITYSDK_OFFSET(0xB5F19C0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xB5F1320)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_104669F3B9019C27_OFFSET UNITYSDK_OFFSET(0xB5F1030)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xB5F0F50)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB5F0EF0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_288F74D11BE167E0_OFFSET UNITYSDK_OFFSET(0xB5EFD00)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB5EF600)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_326A28A5AE4DF4B2_OFFSET UNITYSDK_OFFSET(0xB5EF1A0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0xB5EFBD0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xB5EFB40)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xB5F0FB0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB5EF3E0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xB5EF460)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xB5F1480)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xB5EFC60)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xB5EF6E0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0xB5F0DC0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xB5F0B60)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0xB5EFF40)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_BA9C9FDB9BD04A4F_OFFSET UNITYSDK_OFFSET(0xB5F15A0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_C6441B5A0FAE0587_OFFSET UNITYSDK_OFFSET(0xB5F0790)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_F38398C364AE5340_OFFSET UNITYSDK_OFFSET(0xB5F0420)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_F95CD767D6B25CA4_OFFSET UNITYSDK_OFFSET(0xB5F0C90)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_FA2C1734FD4CF3EF_OFFSET UNITYSDK_OFFSET(0xB5F09E0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xB5F1540)
#define CLASS_1_469A5FF005CF3F5C_SET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0xB5F19B0)
#define CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB5F1970)
#define CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0xB5F1950)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0xB5F18F0)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0xB5F1930)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0xB5F1990)
#define CLASS_1_469A5FF005CF3F5C_SET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0xB5F1910)
#define CLASS_1_469A5FF005CF3F5C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5EEFA0)

inline static constexpr unsigned int Class_1_469A5FF005CF3F5C_TypeDefinitionIndex = 69608;

class Class_1_469A5FF005CF3F5C : public ::System::Object
{
public:
	// static const ::System::Single FBNLGOEEHKI; // 0x0
	::RPG::Client::CameraBlendCurve* MNBFKPLCCCH; // 0x10
	::RPG::GameCore::VCameraOverrideShakeV2* _OverrideShakeConfig_k__BackingField; // 0x18
	::RPG::GameCore::VCameraShakeV2* _ShakeConfig_k__BackingField; // 0x20
	::RPG::GameCore::ShakeDistanceAttenuation* BIDKIGEIHBB; // 0x28
	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* OJFKMHHGCGP; // 0x30
	::RPG::GameCore::GameEntity* EICFPOKFIMM; // 0x38
	::RPG::Client::CameraBlendCurve* MEBLLOLHJOL; // 0x40
	::RPG::Client::CameraBlendCurve* HBIDCFJAHPB; // 0x48
	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* ICLACMCEFBO; // 0x50
	::System::Single _OverrideShakeScale_k__BackingField; // 0x58
	::UnityEngine::Vector3 FPADGNAAMJA; // 0x5C
	::UnityEngine::Vector3 NIOKLIHGCOP; // 0x68
	::UnityEngine::Vector3 PANJENHNOKN; // 0x74
	::System::Single NCJHOFNLKDD; // 0x80
	::System::Boolean _TobeRemove_k__BackingField; // 0x84
	::System::Boolean BDMKAJMHCEM; // 0x85
	::System::Boolean _IsUseFullPeriod_k__BackingField; // 0x86
	::UnityEngine::Vector3 DDFFIKOEMKE; // 0x88
	::System::Single PJJLEJDPNHI; // 0x94
	::UnityEngine::Vector3 MFMOADOCDHA; // 0x98
	::System::Single _ShakeSourceScale_k__BackingField; // 0xA4
	::System::Single CJPNPGHNFFA; // 0xA8
	::System::Single ANIOMBLBDLB; // 0xAC
	::System::Single MMOCIIJHFHL; // 0xB0
	::System::Single LILDLLBELEE; // 0xB4
	::System::Single OBCNPJBHCOM; // 0xB8
	::System::Single LDIFFNOPNKO; // 0xBC
	::System::Single BKFEKHJGLMD; // 0xC0
	::System::Single EIEBOOGADEA; // 0xC4
	::System::Single _ShakeMaxRange_k__BackingField; // 0xC8

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
