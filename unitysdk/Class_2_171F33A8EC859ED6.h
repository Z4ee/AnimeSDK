#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_4E1FD763A8B8D9C6.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_442;
namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace MoleMole { class AdvancedCollisionConfigData; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_1_OFFSET UNITYSDK_OFFSET(0x14ED5B70)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_2_OFFSET UNITYSDK_OFFSET(0x14ED62B0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_OFFSET UNITYSDK_OFFSET(0x14ED5610)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_207A21270EC6D991_OFFSET UNITYSDK_OFFSET(0x14ED6340)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_40F18DBBCD7E2418_OFFSET UNITYSDK_OFFSET(0x14ED6760)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_642924277A8C33E3_OFFSET UNITYSDK_OFFSET(0x14ED5CE0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_1_OFFSET UNITYSDK_OFFSET(0x14ED58E0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_OFFSET UNITYSDK_OFFSET(0x14ED56A0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x14ED60A0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x14ED5C60)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0x14ED5F80)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x14ED5C40)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x14ED5A60)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x14ED5970)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14ED5C20)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14ED5C00)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F0E4FAC8E5EC9E93_1_OFFSET UNITYSDK_OFFSET(0x14ED61C0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x14ED5A80)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x14ED65B0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x14ED5730)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_1_OFFSET UNITYSDK_OFFSET(0x14ED6870)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x14ED6120)
#define CLASS_2_171F33A8EC859ED6__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED54A0)

inline static constexpr unsigned int Class_2_171F33A8EC859ED6_TypeDefinitionIndex = 67106;

class Class_2_171F33A8EC859ED6 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_2_19; // 0x60
	::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* Field_2_4; // 0x68
	::Foundation::ReferenceValue_1<::System::Single>* Field_2_5; // 0x70
	::Struct_2_4E1FD763A8B8D9C6 Field_2_14; // 0x78
	::Class_0_16E4307DCC419505_442* Field_2_13; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_10; // 0xB0
	::Foundation::ReferenceValue_1<::System::Single>* Field_2_11; // 0xB8
	::Class_0_16E4307DCC419505_442* Field_2_12; // 0xC0
	::Nap::NapECS::EcsWorld* Field_2_2; // 0xC8
	::PipelineCamera::WorldBasicCameraData Field_2_0; // 0xD0
	::System::Single Field_2_17; // 0xFC
	::System::Single Field_2_1; // 0x100
	::System::Single Field_2_22; // 0x104
	::Foundation::Unreal::FTransform Field_2_18; // 0x108
	::Foundation::Unreal::FTransform Field_2_23; // 0x128
	::System::Int32 Field_2_16; // 0x148
	::System::Int32 Field_2_21; // 0x14C
	::System::Boolean Field_2_7; // 0x150
	::System::Boolean Field_2_6; // 0x151
	::System::Boolean Field_2_15; // 0x152
	::System::Single Field_2_8; // 0x154

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6__CTOR_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_8EE6C10C77964FB6()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_D3CDDBF95A81E584_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::UInt32 Method_2_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_8EE6C10C77964FB6_1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	static ::System::Void Method_2_642924277A8C33E3(::Class_0_16E4307DCC419505_442* a1, ::Nap::NapECS::EcsWorld* a2, ::System::Int32& a3, ::Foundation::Unreal::FTransform& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_442*, ::Nap::NapECS::EcsWorld*, ::System::Int32&, ::Foundation::Unreal::FTransform&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_642924277A8C33E3_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_B67DCF72B717FA9F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_B67DCF72B717FA9F_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::UInt32 Method_2_F0E4FAC8E5EC9E93_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F0E4FAC8E5EC9E93_1_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E_2()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_2_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_207A21270EC6D991()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_207A21270EC6D991_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::MoleMole::AdvancedCollisionConfigData* Method_2_40F18DBBCD7E2418()
	{
		return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_40F18DBBCD7E2418_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_1_OFFSET))(this);
	}
};
