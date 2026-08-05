#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9D74472291B98828_Struct_2_18E794CDBE104DC1_2.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/MoleMole/InLevelChatConfig.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2E68421C054C19B7;
class Class_1_8DC4A6B2DA67EF18;
class Class_2_CEC585D0736F3660;
namespace Foundation { template <typename T> class ObjectProxy_1; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_9D74472291B98828_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9557280)
#define CLASS_2_9D74472291B98828_METHOD_2_014D8AE702435ACA_OFFSET UNITYSDK_OFFSET(0x9554550)
#define CLASS_2_9D74472291B98828_METHOD_2_098499348BBE0FC2_OFFSET UNITYSDK_OFFSET(0x9557810)
#define CLASS_2_9D74472291B98828_METHOD_2_156F124EBBC07B6C_OFFSET UNITYSDK_OFFSET(0x9557500)
#define CLASS_2_9D74472291B98828_METHOD_2_1CFA9C02CDDB465F_OFFSET UNITYSDK_OFFSET(0x9557340)
#define CLASS_2_9D74472291B98828_METHOD_2_1D2E0D34E5B80FE9_OFFSET UNITYSDK_OFFSET(0x95573C0)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x95575C0)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x9557620)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x9557670)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_4_OFFSET UNITYSDK_OFFSET(0x9557F90)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9557560)
#define CLASS_2_9D74472291B98828_METHOD_2_20CB55310DA00017_OFFSET UNITYSDK_OFFSET(0x9557470)
#define CLASS_2_9D74472291B98828_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x9558460)
#define CLASS_2_9D74472291B98828_METHOD_2_2FE578D2AC41E663_OFFSET UNITYSDK_OFFSET(0x95561C0)
#define CLASS_2_9D74472291B98828_METHOD_2_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0x95584C0)
#define CLASS_2_9D74472291B98828_METHOD_2_6772E9913BCB5ED0_OFFSET UNITYSDK_OFFSET(0x9556970)
#define CLASS_2_9D74472291B98828_METHOD_2_6AA2F81454ABF5E6_OFFSET UNITYSDK_OFFSET(0x95581C0)
#define CLASS_2_9D74472291B98828_METHOD_2_7427987D32258DE2_OFFSET UNITYSDK_OFFSET(0x9556F30)
#define CLASS_2_9D74472291B98828_METHOD_2_7536679CFED3B289_OFFSET UNITYSDK_OFFSET(0x141EB110)
#define CLASS_2_9D74472291B98828_METHOD_2_A41A4126E09888A8_OFFSET UNITYSDK_OFFSET(0x9557750)
#define CLASS_2_9D74472291B98828_METHOD_2_C12DBE468567E77A_OFFSET UNITYSDK_OFFSET(0x95572F0)
#define CLASS_2_9D74472291B98828_METHOD_2_C4B97B51666ED6D0_OFFSET UNITYSDK_OFFSET(0x9557380)
#define CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_1_OFFSET UNITYSDK_OFFSET(0x9558120)
#define CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_OFFSET UNITYSDK_OFFSET(0x9557EF0)
#define CLASS_2_9D74472291B98828_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x9557450)
#define CLASS_2_9D74472291B98828_METHOD_2_DF5A267FFE811F7B_OFFSET UNITYSDK_OFFSET(0x95585F0)
#define CLASS_2_9D74472291B98828_METHOD_2_E61BA69BD7ED6B3B_OFFSET UNITYSDK_OFFSET(0x9557FF0)
#define CLASS_2_9D74472291B98828_METHOD_2_EFD899C616187CA8_OFFSET UNITYSDK_OFFSET(0x95577F0)
#define CLASS_2_9D74472291B98828_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x95574E0)
#define CLASS_2_9D74472291B98828_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x9553F90)
#define CLASS_2_9D74472291B98828_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x95576D0)
#define CLASS_2_9D74472291B98828_RELEASE_OFFSET UNITYSDK_OFFSET(0x95571F0)
#define CLASS_2_9D74472291B98828__CCTOR_OFFSET UNITYSDK_OFFSET(0x95573F0)
#define CLASS_2_9D74472291B98828__CTOR_OFFSET UNITYSDK_OFFSET(0x9553FB0)

inline static constexpr unsigned int Class_2_9D74472291B98828_TypeDefinitionIndex = 68108;

class Class_2_9D74472291B98828 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_2_5()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D74472291B98828_TypeDefinitionIndex)->GetStaticField(0x129F0);
	}
	// static const ::System::Single Field_2_4; // 0x0
	::Class_1_2E68421C054C19B7* Field_2_3; // 0x60
	::Foundation::ObjectProxy_1<::Class_2_9D74472291B98828*>* Field_2_0; // 0x68
	::Class_1_8DC4A6B2DA67EF18* Field_2_7; // 0x70
	::Nap::NapECS::EcsWorld* Field_2_8; // 0x78
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Field_2_11; // 0x80
	::System::Action_1<::Class_2_9D74472291B98828_Struct_2_18E794CDBE104DC1_2>* Field_2_1; // 0xC0
	::System::Boolean Field_2_15; // 0xC8
	::Class_2_9D74472291B98828_Struct_2_18E794CDBE104DC1_2 Field_2_6; // 0xC9
	::System::Boolean Field_2_14; // 0xCA
	::MoleMole::InLevelChatConfig Field_2_2; // 0xCC
	::System::Single Field_2_9; // 0xD8
	::System::UInt32 Field_2_10; // 0xDC
	::PipelineCamera::WorldBasicCameraData Field_2_13; // 0xE0

	::System::Void _ctor(::Class_1_2E68421C054C19B7* a1, ::MoleMole::InLevelChatConfig a2, ::System::UInt32 a3, ::System::Single a4, ::Nap::NapECS::EcsWorld* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E68421C054C19B7*, ::MoleMole::InLevelChatConfig, ::System::UInt32, ::System::Single, ::Nap::NapECS::EcsWorld*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_014D8AE702435ACA(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_014D8AE702435ACA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2FE578D2AC41E663()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_2FE578D2AC41E663_OFFSET))(this);
	}

	::System::Boolean Method_2_7427987D32258DE2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_7427987D32258DE2_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_GET_HANDLE_OFFSET))(this);
	}

	::System::Void Method_2_C12DBE468567E77A(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_C12DBE468567E77A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CFA9C02CDDB465F(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1CFA9C02CDDB465F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C4B97B51666ED6D0(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_C4B97B51666ED6D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D2E0D34E5B80FE9(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D2E0D34E5B80FE9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_20CB55310DA00017(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_20CB55310DA00017_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Method_2_156F124EBBC07B6C()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_156F124EBBC07B6C_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_3_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_A41A4126E09888A8(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_A41A4126E09888A8_OFFSET))(this, a1, a2);
	}

	::System::Action* Method_2_EFD899C616187CA8()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_EFD899C616187CA8_OFFSET))(this);
	}

	static ::System::Void Method_2_098499348BBE0FC2(::System::UInt32 a1, ::System::UInt32 a2, ::Nap::NapECS::EcsWorld* a3, ::System::Boolean& a4, ::System::Boolean& a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_098499348BBE0FC2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Action* Method_2_CFAC03C3080DD000()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_4_OFFSET))(this);
	}

	::System::Void Method_2_E61BA69BD7ED6B3B(::Class_2_CEC585D0736F3660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CEC585D0736F3660*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_E61BA69BD7ED6B3B_OFFSET))(this, a1);
	}

	::System::Action* Method_2_CFAC03C3080DD000_1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_1_OFFSET))(this);
	}

	static ::Class_2_9D74472291B98828* Method_2_6AA2F81454ABF5E6(::Class_1_2E68421C054C19B7* a1)
	{
		return ((::Class_2_9D74472291B98828*(*)(::Class_1_2E68421C054C19B7*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_6AA2F81454ABF5E6_OFFSET))(a1);
	}

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	::System::Single Method_2_431B41F82025C3EE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_431B41F82025C3EE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_DF5A267FFE811F7B()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_DF5A267FFE811F7B_OFFSET))(this);
	}

	::System::Void Method_2_6772E9913BCB5ED0(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_6772E9913BCB5ED0_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::InLevelChatConfig Method_2_7536679CFED3B289(::System::String* a1, ::MoleMole::InLevelChatConfig a2)
	{
		return ((::MoleMole::InLevelChatConfig(*)(::System::String*, ::MoleMole::InLevelChatConfig))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_7536679CFED3B289_OFFSET))(a1, a2);
	}
};
