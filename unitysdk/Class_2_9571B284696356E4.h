#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
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

#define CLASS_2_9571B284696356E4_METHOD_2_02C9D3E4CF92A0EA_OFFSET UNITYSDK_OFFSET(0x17FBB6F0)
#define CLASS_2_9571B284696356E4_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17FB9F30)
#define CLASS_2_9571B284696356E4_METHOD_2_3415D88EE6078A04_OFFSET UNITYSDK_OFFSET(0x17FB9DC0)
#define CLASS_2_9571B284696356E4_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x17FB8A70)
#define CLASS_2_9571B284696356E4_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x17FBA620)
#define CLASS_2_9571B284696356E4_METHOD_2_3FD7F404CBE15205_OFFSET UNITYSDK_OFFSET(0x17FBA7A0)
#define CLASS_2_9571B284696356E4_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17FBC230)
#define CLASS_2_9571B284696356E4_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x17FBB090)
#define CLASS_2_9571B284696356E4_METHOD_2_7873207B41B4C043_OFFSET UNITYSDK_OFFSET(0x17FB83D0)
#define CLASS_2_9571B284696356E4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17FB8590)
#define CLASS_2_9571B284696356E4_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x17FB8870)
#define CLASS_2_9571B284696356E4_METHOD_2_99E6B88C72910539_OFFSET UNITYSDK_OFFSET(0x17FB8610)
#define CLASS_2_9571B284696356E4_METHOD_2_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x17FB87A0)
#define CLASS_2_9571B284696356E4_METHOD_2_B71A1FD8E76D8130_OFFSET UNITYSDK_OFFSET(0x17FBA8E0)
#define CLASS_2_9571B284696356E4_METHOD_2_C44CC3EA33DA9D3D_OFFSET UNITYSDK_OFFSET(0x17FBBF10)
#define CLASS_2_9571B284696356E4_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x17FB9FA0)
#define CLASS_2_9571B284696356E4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17FBB040)
#define CLASS_2_9571B284696356E4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17FB90C0)
#define CLASS_2_9571B284696356E4_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x17FB9460)
#define CLASS_2_9571B284696356E4_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x17FBBB10)
#define CLASS_2_9571B284696356E4_METHOD_2_F27A64F8FEB174E3_OFFSET UNITYSDK_OFFSET(0x17FB9100)
#define CLASS_2_9571B284696356E4_METHOD_2_F6A9BCB6F5A4C097_OFFSET UNITYSDK_OFFSET(0x17FBA680)
#define CLASS_2_9571B284696356E4_METHOD_2_FB1640F63143C0EA_OFFSET UNITYSDK_OFFSET(0x17FB9060)
#define CLASS_2_9571B284696356E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FBC450)
#define CLASS_2_9571B284696356E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FB8260)
#define CLASS_2_9571B284696356E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8250)

inline static constexpr unsigned int Class_2_9571B284696356E4_TypeDefinitionIndex = 66499;

class Class_2_9571B284696356E4 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9571B284696356E4_TypeDefinitionIndex)->GetStaticField(0xBE20);
	}
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_1; // 0x38
	::Class_1_E34FF29EE1CCACD4* Field_2_2; // 0x40
	::Class_1_E34FF29EE1CCACD4* Field_2_3; // 0x48
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_4; // 0x50
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_5; // 0x58
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_6; // 0x60
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_7; // 0x68
	::RPG::Client::BattleTransitionModuleConfig* Field_2_8; // 0x70
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_9; // 0x78
	::Class_2_9571B284696356E4_TransitionShotData* Field_2_10; // 0x80
	::System::Single Field_2_11; // 0x88
	::System::Single Field_2_12; // 0x8C
	::System::Single Field_2_13; // 0x90
	::System::Single Field_2_14; // 0x94
	::System::Single Field_2_15; // 0x98
	::System::Single Field_2_16; // 0x9C
	::UnityEngine::Vector3 Field_2_17; // 0xA0
	::UnityEngine::Vector3 Field_2_18; // 0xAC
	::System::Int32 Field_2_19; // 0xB8
	::System::Single Field_2_20; // 0xBC
	::System::Single Field_2_21; // 0xC0
	::System::Single Field_2_22; // 0xC4
	::UnityEngine::Vector3 Field_2_23; // 0xC8
	::System::Boolean Field_2_24; // 0xD4
	::System::Boolean Field_2_25; // 0xD5
	::System::Boolean Field_2_26; // 0xD6
	::System::Boolean Field_2_27; // 0xD7
	::Class_2_9571B284696356E4_TransitionMode Field_2_28; // 0xD8
	::UnityEngine::Vector3 Field_2_29; // 0xDC

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

	::System::Boolean Method_2_3415D88EE6078A04()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_3415D88EE6078A04_OFFSET))(this);
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

	::System::Boolean Method_2_C44CC3EA33DA9D3D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_C44CC3EA33DA9D3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9571B284696356E4_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
