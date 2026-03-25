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

#define CLASS_1_469A5FF005CF3F5C_GET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0x113EA650)
#define CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x113EA610)
#define CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0x113EA5F0)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x113EA590)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0x113EA5D0)
#define CLASS_1_469A5FF005CF3F5C_GET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0x113EA630)
#define CLASS_1_469A5FF005CF3F5C_GET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0x113EA5B0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_0767ADDAA8C5C79F_OFFSET UNITYSDK_OFFSET(0x113EA670)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x113E9FD0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_104669F3B9019C27_OFFSET UNITYSDK_OFFSET(0x113E9CE0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x113E9C00)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x113E9BA0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_27475ADD357BAB08_OFFSET UNITYSDK_OFFSET(0x113E99B0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x113E8570)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0x113E8AA0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x113E8A10)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x113E9C60)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x113E8370)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_51BAC440AEEC47A9_OFFSET UNITYSDK_OFFSET(0x113E8BD0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x113E83E0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x113EA130)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_728B556CCCB971DB_OFFSET UNITYSDK_OFFSET(0x113E8120)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x113E9AE0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x113E98F0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x113E8B30)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_927E8B22CB9C2007_OFFSET UNITYSDK_OFFSET(0x113E9280)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_A14686B49BC5A8FE_OFFSET UNITYSDK_OFFSET(0x113E9580)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_B0C9E67798485BC6_OFFSET UNITYSDK_OFFSET(0x113E8DA0)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_BA9C9FDB9BD04A4F_OFFSET UNITYSDK_OFFSET(0x113EA250)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x113E8640)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_D1ED5E50F804F962_OFFSET UNITYSDK_OFFSET(0x113EA090)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_FA2C1734FD4CF3EF_OFFSET UNITYSDK_OFFSET(0x113E9770)
#define CLASS_1_469A5FF005CF3F5C_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x113EA1F0)
#define CLASS_1_469A5FF005CF3F5C_SET_ISUSEFULLPERIOD_OFFSET UNITYSDK_OFFSET(0x113EA660)
#define CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x113EA620)
#define CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKESCALE_OFFSET UNITYSDK_OFFSET(0x113EA600)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x113EA5A0)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKEMAXRANGE_OFFSET UNITYSDK_OFFSET(0x113EA5E0)
#define CLASS_1_469A5FF005CF3F5C_SET_SHAKESOURCESCALE_OFFSET UNITYSDK_OFFSET(0x113EA640)
#define CLASS_1_469A5FF005CF3F5C_SET_TOBEREMOVE_OFFSET UNITYSDK_OFFSET(0x113EA5C0)
#define CLASS_1_469A5FF005CF3F5C__CTOR_OFFSET UNITYSDK_OFFSET(0x113E7F10)

inline static constexpr unsigned int Class_1_469A5FF005CF3F5C_TypeDefinitionIndex = 56939;

class Class_1_469A5FF005CF3F5C : public ::System::Object
{
public:
	// static const ::System::Single Field_1_20; // 0x0
	::RPG::GameCore::ShakeDistanceAttenuation* Field_1_28; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_24; // 0x18
	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* Field_1_27; // 0x20
	::RPG::Client::CameraBlendCurve* Field_1_23; // 0x28
	::RPG::Client::CameraBlendCurve* Field_1_25; // 0x30
	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* Field_1_26; // 0x38
	::RPG::GameCore::GameEntity* Field_1_29; // 0x40
	::RPG::GameCore::VCameraShakeV2* _ShakeConfig_k__BackingField; // 0x48
	::RPG::GameCore::VCameraOverrideShakeV2* _OverrideShakeConfig_k__BackingField; // 0x50
	::System::Single Field_1_17; // 0x58
	::System::Single Field_1_10; // 0x5C
	::System::Single Field_1_19; // 0x60
	::UnityEngine::Vector3 Field_1_30; // 0x64
	::System::Single Field_1_9; // 0x70
	::System::Single Field_1_8; // 0x74
	::UnityEngine::Vector3 Field_1_12; // 0x78
	::System::Single _ShakeSourceScale_k__BackingField; // 0x84
	::UnityEngine::Vector3 Field_1_22; // 0x88
	::System::Single Field_1_16; // 0x94
	::System::Single Field_1_15; // 0x98
	::System::Boolean _TobeRemove_k__BackingField; // 0x9C
	::System::Boolean _IsUseFullPeriod_k__BackingField; // 0x9D
	::System::Boolean Field_1_7; // 0x9E
	::System::Single Field_1_21; // 0xA0
	::UnityEngine::Vector3 Field_1_18; // 0xA4
	::System::Single _ShakeMaxRange_k__BackingField; // 0xB0
	::System::Single Field_1_11; // 0xB4
	::System::Single _OverrideShakeScale_k__BackingField; // 0xB8
	::UnityEngine::Vector3 Field_1_14; // 0xBC
	::System::Single Field_1_13; // 0xC8

	::System::Void _ctor(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_51BAC440AEEC47A9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_51BAC440AEEC47A9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_927E8B22CB9C2007()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_927E8B22CB9C2007_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A14686B49BC5A8FE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_A14686B49BC5A8FE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_77FD543600E00498_1_OFFSET))(this);
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

	::UnityEngine::Vector3 Method_1_27475ADD357BAB08(::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_27475ADD357BAB08_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_BA9C9FDB9BD04A4F(::Class_1_4194FD1D0EB8BE87* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_4194FD1D0EB8BE87*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_BA9C9FDB9BD04A4F_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* Method_1_728B556CCCB971DB(::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>* a1)
	{
		return ((::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_728B556CCCB971DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1ED5E50F804F962(::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_4194FD1D0EB8BE87*>*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_D1ED5E50F804F962_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA2C1734FD4CF3EF(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Boolean a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_FA2C1734FD4CF3EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::VCameraShakeV2* get_ShakeConfig()
	{
		return ((::RPG::GameCore::VCameraShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_SHAKECONFIG_OFFSET))(this);
	}

	::System::Void set_ShakeConfig(::RPG::GameCore::VCameraShakeV2* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_SHAKECONFIG_OFFSET))(this, value);
	}

	::System::Boolean get_TobeRemove()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_TOBEREMOVE_OFFSET))(this);
	}

	::System::Void set_TobeRemove(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_TOBEREMOVE_OFFSET))(this, value);
	}

	::System::Single get_ShakeMaxRange()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_SHAKEMAXRANGE_OFFSET))(this);
	}

	::System::Void set_ShakeMaxRange(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_SHAKEMAXRANGE_OFFSET))(this, value);
	}

	::System::Single get_OverrideShakeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKESCALE_OFFSET))(this);
	}

	::System::Void set_OverrideShakeScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKESCALE_OFFSET))(this, value);
	}

	::RPG::GameCore::VCameraOverrideShakeV2* get_OverrideShakeConfig()
	{
		return ((::RPG::GameCore::VCameraOverrideShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_OVERRIDESHAKECONFIG_OFFSET))(this);
	}

	::System::Void set_OverrideShakeConfig(::RPG::GameCore::VCameraOverrideShakeV2* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_OVERRIDESHAKECONFIG_OFFSET))(this, value);
	}

	::System::Single get_ShakeSourceScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_SHAKESOURCESCALE_OFFSET))(this);
	}

	::System::Void set_ShakeSourceScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_SHAKESOURCESCALE_OFFSET))(this, value);
	}

	::System::Boolean get_IsUseFullPeriod()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_GET_ISUSEFULLPERIOD_OFFSET))(this);
	}

	::System::Void set_IsUseFullPeriod(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_SET_ISUSEFULLPERIOD_OFFSET))(this, value);
	}

	::System::Void Method_1_0767ADDAA8C5C79F(::RPG::GameCore::ShakeDistanceAttenuation* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShakeDistanceAttenuation*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_469A5FF005CF3F5C_METHOD_1_0767ADDAA8C5C79F_OFFSET))(this, a1, a2);
	}
};
