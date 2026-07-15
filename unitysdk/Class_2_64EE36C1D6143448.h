#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/Class_2_64EE36C1D6143448_Struct_2_A7E5651F4E5A9DBA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_37;
class Class_1_DEBCF596D13A3389;
class Class_2_465A9E6CC2B0EF21;
class FiveDimRenderingPanelRuntime;
namespace RPG::GameCore { class TeamTowersBossBrickPatchConfig; }
namespace RPG::GameCore { class TeamTowersBossConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_64EE36C1D6143448_GET_CURRENTBOSSHP_OFFSET UNITYSDK_OFFSET(0x15F29090)
#define CLASS_2_64EE36C1D6143448_METHOD_2_02FACE3DC90363F5_OFFSET UNITYSDK_OFFSET(0x15F28C60)
#define CLASS_2_64EE36C1D6143448_METHOD_2_052C350DDAA40FBC_OFFSET UNITYSDK_OFFSET(0x15F28300)
#define CLASS_2_64EE36C1D6143448_METHOD_2_115D648649891BEF_1_OFFSET UNITYSDK_OFFSET(0x15F27FC0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_115D648649891BEF_OFFSET UNITYSDK_OFFSET(0x15F27DF0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15F264E0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_1AFF05DC1082906B_OFFSET UNITYSDK_OFFSET(0x15F27CF0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0x15F277C0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_20670F20E5D7A5C9_OFFSET UNITYSDK_OFFSET(0x15F279C0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_2EF63B7946FD4EE1_OFFSET UNITYSDK_OFFSET(0x15F27530)
#define CLASS_2_64EE36C1D6143448_METHOD_2_3459E40A07B7915B_OFFSET UNITYSDK_OFFSET(0x15F281A0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_59CAA2D1FE143B8B_OFFSET UNITYSDK_OFFSET(0x15F25EE0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x15F28FC0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_7F19341120188253_1_OFFSET UNITYSDK_OFFSET(0x15F26830)
#define CLASS_2_64EE36C1D6143448_METHOD_2_7F19341120188253_OFFSET UNITYSDK_OFFSET(0x15F266B0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_83259CE775EE8F19_OFFSET UNITYSDK_OFFSET(0x15F27320)
#define CLASS_2_64EE36C1D6143448_METHOD_2_8D6DDE708016922F_OFFSET UNITYSDK_OFFSET(0x15F28620)
#define CLASS_2_64EE36C1D6143448_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x15F26F00)
#define CLASS_2_64EE36C1D6143448_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15F26EB0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_9871B2ED609502A4_OFFSET UNITYSDK_OFFSET(0x15F26A40)
#define CLASS_2_64EE36C1D6143448_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x15F269B0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x15F26F60)
#define CLASS_2_64EE36C1D6143448_METHOD_2_A5FB11C82FC95330_OFFSET UNITYSDK_OFFSET(0x15F26490)
#define CLASS_2_64EE36C1D6143448_METHOD_2_D429B3A47EE61AE8_OFFSET UNITYSDK_OFFSET(0x15F25610)
#define CLASS_2_64EE36C1D6143448_METHOD_2_D694EA504AC4139E_OFFSET UNITYSDK_OFFSET(0x15F28CE0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_E153E10891089910_OFFSET UNITYSDK_OFFSET(0x15F28A80)
#define CLASS_2_64EE36C1D6143448_METHOD_2_E1ADB66E36A9BF5E_OFFSET UNITYSDK_OFFSET(0x15F25BA0)
#define CLASS_2_64EE36C1D6143448_METHOD_2_EC5A0691CFC2967F_OFFSET UNITYSDK_OFFSET(0x15F28580)
#define CLASS_2_64EE36C1D6143448_SET_CURRENTBOSSHP_OFFSET UNITYSDK_OFFSET(0x15F290A0)
#define CLASS_2_64EE36C1D6143448__CTOR_OFFSET UNITYSDK_OFFSET(0x15F290B0)

inline static constexpr unsigned int Class_2_64EE36C1D6143448_TypeDefinitionIndex = 75147;

class Class_2_64EE36C1D6143448 : public ::Class_1_D22BBD5AAECFE505
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::Class_2_64EE36C1D6143448_Struct_2_A7E5651F4E5A9DBA>* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_2_8; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_9; // 0x40
	::Class_0_16E4307DCC419505_37* Field_2_10; // 0x48
	::FiveDimRenderingPanelRuntime* Field_2_11; // 0x50
	::UnityEngine::Animator* Field_2_12; // 0x58
	::Il2CppArray<::RPG::GameCore::TeamTowersBossBrickPatchConfig*>* Field_2_13; // 0x60
	::System::UInt32 Field_2_14; // 0x68
	::System::Int32 Field_2_15; // 0x6C
	::System::Boolean Field_2_16; // 0x70
	::System::UInt32 Field_2_17; // 0x74
	::System::Int32 Field_2_18; // 0x78
	::System::Int32 Field_2_19; // 0x7C
	::System::Int32 Field_2_20; // 0x80
	::System::UInt32 _CurrentBossHp_k__BackingField; // 0x84
	::System::Int32 Field_2_22; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D429B3A47EE61AE8(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_D429B3A47EE61AE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5FB11C82FC95330(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_A5FB11C82FC95330_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_7F19341120188253()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_7F19341120188253_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_7F19341120188253_1()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_7F19341120188253_1_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_59CAA2D1FE143B8B(::Class_2_465A9E6CC2B0EF21* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_59CAA2D1FE143B8B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_20139550C8206D50()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_20139550C8206D50_OFFSET))(this);
	}

	::RPG::GameCore::TeamTowersBossConfig* Method_2_2EF63B7946FD4EE1(::Class_2_465A9E6CC2B0EF21* a1)
	{
		return ((::RPG::GameCore::TeamTowersBossConfig*(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_2EF63B7946FD4EE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AFF05DC1082906B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_1AFF05DC1082906B_OFFSET))(this, a1);
	}

	::System::Void Method_2_115D648649891BEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_115D648649891BEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_115D648649891BEF_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_115D648649891BEF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_20670F20E5D7A5C9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_20670F20E5D7A5C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3459E40A07B7915B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_3459E40A07B7915B_OFFSET))(this, a1);
	}

	::System::Void Method_2_052C350DDAA40FBC(::RPG::GameCore::TeamTowersBossBrickPatchConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersBossBrickPatchConfig*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_052C350DDAA40FBC_OFFSET))(this, a1);
	}

	::System::String* Method_2_EC5A0691CFC2967F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_EC5A0691CFC2967F_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D6DDE708016922F(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_8D6DDE708016922F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_E1ADB66E36A9BF5E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_E1ADB66E36A9BF5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E153E10891089910(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_E153E10891089910_OFFSET))(this, a1);
	}

	::System::Void Method_2_02FACE3DC90363F5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_02FACE3DC90363F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9871B2ED609502A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_9871B2ED609502A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D694EA504AC4139E(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_D694EA504AC4139E_OFFSET))(this, a1);
	}

	::System::Void Method_2_83259CE775EE8F19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_83259CE775EE8F19_OFFSET))(this);
	}

	::Class_1_DEBCF596D13A3389* Method_2_7E3C0318CC90CDC0()
	{
		return ((::Class_1_DEBCF596D13A3389*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_METHOD_2_7E3C0318CC90CDC0_OFFSET))(this);
	}

	::System::UInt32 get_CurrentBossHp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_GET_CURRENTBOSSHP_OFFSET))(this);
	}

	::System::Void set_CurrentBossHp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_64EE36C1D6143448_SET_CURRENTBOSSHP_OFFSET))(this, a1);
	}
};
