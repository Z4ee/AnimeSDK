#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/Class_2_2D85C3C5517A2A08_TransitionMode.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_30B5FE4AA7ABAB8C;
class Class_1_E34FF29EE1CCACD4;
class Class_2_2D85C3C5517A2A08_TransitionShotData;
namespace RPG::Client { class BattleTransitionModuleConfig; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_2D85C3C5517A2A08_METHOD_2_0081FD9A528DAA13_OFFSET UNITYSDK_OFFSET(0x8BC56A0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_02C9D3E4CF92A0EA_OFFSET UNITYSDK_OFFSET(0x8BC86C0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x8BC5AC0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8BC6F00)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x8BC6F70)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x8BC6DC0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x8BC7600)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_3FD7F404CBE15205_OFFSET UNITYSDK_OFFSET(0x8BC7780)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8BC9130)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8BC9490)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_61743D762B88668C_OFFSET UNITYSDK_OFFSET(0x8BC5470)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_65115CD0067642FB_OFFSET UNITYSDK_OFFSET(0x8BC9420)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_6DB394AEB9D6B279_OFFSET UNITYSDK_OFFSET(0x8BC8EE0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x8BC8060)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8BC5620)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x8BC58C0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x8BC57F0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x8BC9380)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_B71A1FD8E76D8130_OFFSET UNITYSDK_OFFSET(0x8BC78C0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8BC8010)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BC60E0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x8BC6470)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x8BC8AE0)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_F27A64F8FEB174E3_OFFSET UNITYSDK_OFFSET(0x8BC6120)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_F6A9BCB6F5A4C097_OFFSET UNITYSDK_OFFSET(0x8BC7660)
#define CLASS_2_2D85C3C5517A2A08_METHOD_2_FB1640F63143C0EA_OFFSET UNITYSDK_OFFSET(0x8BC6080)
#define CLASS_2_2D85C3C5517A2A08__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BC9350)
#define CLASS_2_2D85C3C5517A2A08__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8BC5430)
#define CLASS_2_2D85C3C5517A2A08__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC5420)

inline static constexpr unsigned int Class_2_2D85C3C5517A2A08_TypeDefinitionIndex = 56923;

class Class_2_2D85C3C5517A2A08 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2D85C3C5517A2A08_TypeDefinitionIndex)->GetStaticField(0x12C90);
	}
	::RPG::Client::BattleTransitionModuleConfig* Field_2_28; // 0x38
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_10; // 0x40
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_8; // 0x48
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_6; // 0x50
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_11; // 0x58
	::Class_1_E34FF29EE1CCACD4* Field_2_17; // 0x60
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_7; // 0x68
	::Class_1_E34FF29EE1CCACD4* Field_2_1; // 0x70
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_5; // 0x78
	::Class_2_2D85C3C5517A2A08_TransitionShotData* Field_2_9; // 0x80
	::System::Single Field_2_22; // 0x88
	::System::Single Field_2_14; // 0x8C
	::System::Single Field_2_4; // 0x90
	::UnityEngine::Vector3 Field_2_18; // 0x94
	::System::Single Field_2_20; // 0xA0
	::System::Single Field_2_15; // 0xA4
	::System::Int32 Field_2_16; // 0xA8
	::System::Single Field_2_23; // 0xAC
	::System::Single Field_2_21; // 0xB0
	::UnityEngine::Vector3 Field_2_3; // 0xB4
	::System::Boolean Field_2_26; // 0xC0
	::System::Boolean Field_2_12; // 0xC1
	::System::Boolean Field_2_29; // 0xC2
	::System::Boolean Field_2_13; // 0xC3
	::UnityEngine::Vector3 Field_2_19; // 0xC4
	::System::Single Field_2_25; // 0xD0
	::Class_2_2D85C3C5517A2A08_TransitionMode Field_2_0; // 0xD4
	::System::Single Field_2_24; // 0xD8
	::UnityEngine::Vector3 Field_2_2; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08__CCTOR_OFFSET))();
	}

	::System::Void Method_2_61743D762B88668C(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_61743D762B88668C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0081FD9A528DAA13(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_0081FD9A528DAA13_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Void Method_2_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_050D955490C4C3D0_OFFSET))(this);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_FB1640F63143C0EA(::Class_2_2D85C3C5517A2A08_TransitionMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_2D85C3C5517A2A08_TransitionMode))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_FB1640F63143C0EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F27A64F8FEB174E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_F27A64F8FEB174E3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_B71A1FD8E76D8130()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_B71A1FD8E76D8130_OFFSET))(this);
	}

	::Class_2_2D85C3C5517A2A08_TransitionShotData* Method_2_F6A9BCB6F5A4C097()
	{
		return ((::Class_2_2D85C3C5517A2A08_TransitionShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_F6A9BCB6F5A4C097_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3FD7F404CBE15205(::Class_2_2D85C3C5517A2A08_TransitionShotData* a1, ::Class_2_2D85C3C5517A2A08_TransitionShotData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2D85C3C5517A2A08_TransitionShotData*, ::Class_2_2D85C3C5517A2A08_TransitionShotData*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_3FD7F404CBE15205_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_02C9D3E4CF92A0EA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_02C9D3E4CF92A0EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_6DB394AEB9D6B279(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_6DB394AEB9D6B279_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_65115CD0067642FB(::Class_1_30B5FE4AA7ABAB8C* P0, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_65115CD0067642FB_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D85C3C5517A2A08_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
