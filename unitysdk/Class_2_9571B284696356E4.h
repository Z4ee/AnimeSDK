#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/Class_2_9571B284696356E4_TransitionMode.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_30B5FE4AA7ABAB8C;
class Class_1_E34FF29EE1CCACD4;
class Class_2_9571B284696356E4_TransitionShotData;
namespace RPG::Client { class BattleTransitionModuleConfig; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9571B284696356E4_METHOD_2_02C9D3E4CF92A0EA_OFFSET UNITYSDK_OFFSET(0xA98A100)
#define CLASS_2_9571B284696356E4_METHOD_2_0771D49DA3FB00C8_OFFSET UNITYSDK_OFFSET(0xA98AE60)
#define CLASS_2_9571B284696356E4_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA988980)
#define CLASS_2_9571B284696356E4_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0xA987560)
#define CLASS_2_9571B284696356E4_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xA989060)
#define CLASS_2_9571B284696356E4_METHOD_2_3FD7F404CBE15205_OFFSET UNITYSDK_OFFSET(0xA9891E0)
#define CLASS_2_9571B284696356E4_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA98AB80)
#define CLASS_2_9571B284696356E4_METHOD_2_44A64DE6D7622034_OFFSET UNITYSDK_OFFSET(0xA98A910)
#define CLASS_2_9571B284696356E4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA98AEC0)
#define CLASS_2_9571B284696356E4_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xA989AC0)
#define CLASS_2_9571B284696356E4_METHOD_2_7873207B41B4C043_OFFSET UNITYSDK_OFFSET(0xA986EC0)
#define CLASS_2_9571B284696356E4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA987080)
#define CLASS_2_9571B284696356E4_METHOD_2_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xA988860)
#define CLASS_2_9571B284696356E4_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA987360)
#define CLASS_2_9571B284696356E4_METHOD_2_99E6B88C72910539_OFFSET UNITYSDK_OFFSET(0xA987100)
#define CLASS_2_9571B284696356E4_METHOD_2_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0xA987290)
#define CLASS_2_9571B284696356E4_METHOD_2_B71A1FD8E76D8130_OFFSET UNITYSDK_OFFSET(0xA989320)
#define CLASS_2_9571B284696356E4_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xA9889F0)
#define CLASS_2_9571B284696356E4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA989A70)
#define CLASS_2_9571B284696356E4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA987B80)
#define CLASS_2_9571B284696356E4_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0xA98ADD0)
#define CLASS_2_9571B284696356E4_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0xA987F10)
#define CLASS_2_9571B284696356E4_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xA98A510)
#define CLASS_2_9571B284696356E4_METHOD_2_F27A64F8FEB174E3_OFFSET UNITYSDK_OFFSET(0xA987BC0)
#define CLASS_2_9571B284696356E4_METHOD_2_F6A9BCB6F5A4C097_OFFSET UNITYSDK_OFFSET(0xA9890C0)
#define CLASS_2_9571B284696356E4_METHOD_2_FB1640F63143C0EA_OFFSET UNITYSDK_OFFSET(0xA987B20)
#define CLASS_2_9571B284696356E4__CCTOR_OFFSET UNITYSDK_OFFSET(0xA98ADA0)
#define CLASS_2_9571B284696356E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA986E80)
#define CLASS_2_9571B284696356E4__CTOR_OFFSET UNITYSDK_OFFSET(0xA986E70)

inline static constexpr unsigned int Class_2_9571B284696356E4_TypeDefinitionIndex = 65094;

class Class_2_9571B284696356E4 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9571B284696356E4_TypeDefinitionIndex)->GetStaticField(0xD7A0);
	}
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_1; // 0x38
	::RPG::Client::BattleTransitionModuleConfig* Field_2_2; // 0x40
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_3; // 0x48
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_4; // 0x50
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_5; // 0x58
	::Class_1_E34FF29EE1CCACD4* Field_2_6; // 0x60
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_7; // 0x68
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_8; // 0x70
	::Class_1_E34FF29EE1CCACD4* Field_2_9; // 0x78
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_10; // 0x80
	::UnityEngine::Vector3 Field_2_11; // 0x88
	::System::Single Field_2_12; // 0x94
	::System::Boolean Field_2_13; // 0x98
	::System::Boolean Field_2_14; // 0x99
	::System::Boolean Field_2_15; // 0x9A
	::System::Boolean Field_2_16; // 0x9B
	::Class_2_9571B284696356E4_TransitionMode Field_2_17; // 0x9C
	::System::Single Field_2_18; // 0xA0
	::System::Single Field_2_19; // 0xA4
	::System::Int32 Field_2_20; // 0xA8
	::UnityEngine::Vector3 Field_2_21; // 0xAC
	::System::Single Field_2_22; // 0xB8
	::UnityEngine::Vector3 Field_2_23; // 0xBC
	::System::Single Field_2_24; // 0xC8
	::System::Single Field_2_25; // 0xCC
	::System::Single Field_2_26; // 0xD0
	::System::Single Field_2_27; // 0xD4
	::UnityEngine::Vector3 Field_2_28; // 0xD8
	::System::Single Field_2_29; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7873207B41B4C043(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_7873207B41B4C043_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_99E6B88C72910539(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_99E6B88C72910539_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Void Method_2_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_FB1640F63143C0EA(::Class_2_9571B284696356E4_TransitionMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9571B284696356E4_TransitionMode))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_FB1640F63143C0EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F27A64F8FEB174E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_F27A64F8FEB174E3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_B71A1FD8E76D8130()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_B71A1FD8E76D8130_OFFSET))(this);
	}

	::Class_2_9571B284696356E4_TransitionShotData* Method_2_F6A9BCB6F5A4C097()
	{
		return ((::Class_2_9571B284696356E4_TransitionShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_F6A9BCB6F5A4C097_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3FD7F404CBE15205(::Class_2_9571B284696356E4_TransitionShotData* a1, ::Class_2_9571B284696356E4_TransitionShotData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9571B284696356E4_TransitionShotData*, ::Class_2_9571B284696356E4_TransitionShotData*))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_3FD7F404CBE15205_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_02C9D3E4CF92A0EA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_02C9D3E4CF92A0EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_97285E397E8F5091_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_44A64DE6D7622034(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_44A64DE6D7622034_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0771D49DA3FB00C8(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_0771D49DA3FB00C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
