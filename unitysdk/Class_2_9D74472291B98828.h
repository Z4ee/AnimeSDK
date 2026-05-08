#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9D74472291B98828_Struct_2_18E794CDBE104DC1_3.h"
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

class Class_1_891075BBC2B4C33E;
class Class_1_8DC4A6B2DA67EF18;
class Class_1_D65512A83CF70AB7;
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

#define CLASS_2_9D74472291B98828_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1050A8C0)
#define CLASS_2_9D74472291B98828_METHOD_2_014D8AE702435ACA_OFFSET UNITYSDK_OFFSET(0x10507BC0)
#define CLASS_2_9D74472291B98828_METHOD_2_098499348BBE0FC2_OFFSET UNITYSDK_OFFSET(0x1050B6A0)
#define CLASS_2_9D74472291B98828_METHOD_2_156F124EBBC07B6C_OFFSET UNITYSDK_OFFSET(0x1050BF30)
#define CLASS_2_9D74472291B98828_METHOD_2_1CFA9C02CDDB465F_OFFSET UNITYSDK_OFFSET(0x1050A990)
#define CLASS_2_9D74472291B98828_METHOD_2_1D2E0D34E5B80FE9_OFFSET UNITYSDK_OFFSET(0x1050AA30)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1050B390)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x1050B3F0)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x1050BED0)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_4_OFFSET UNITYSDK_OFFSET(0x1050BF90)
#define CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1050AB40)
#define CLASS_2_9D74472291B98828_METHOD_2_20CB55310DA00017_OFFSET UNITYSDK_OFFSET(0x1050B450)
#define CLASS_2_9D74472291B98828_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x1050AAD0)
#define CLASS_2_9D74472291B98828_METHOD_2_2FE578D2AC41E663_OFFSET UNITYSDK_OFFSET(0x10509840)
#define CLASS_2_9D74472291B98828_METHOD_2_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0x1050C4E0)
#define CLASS_2_9D74472291B98828_METHOD_2_6772E9913BCB5ED0_OFFSET UNITYSDK_OFFSET(0x1050A000)
#define CLASS_2_9D74472291B98828_METHOD_2_6AA2F81454ABF5E6_OFFSET UNITYSDK_OFFSET(0x1050B100)
#define CLASS_2_9D74472291B98828_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x1050B4C0)
#define CLASS_2_9D74472291B98828_METHOD_2_7536679CFED3B289_OFFSET UNITYSDK_OFFSET(0x1050ABB0)
#define CLASS_2_9D74472291B98828_METHOD_2_92DDFB61A2DC6128_OFFSET UNITYSDK_OFFSET(0x1050A5C0)
#define CLASS_2_9D74472291B98828_METHOD_2_A41A4126E09888A8_OFFSET UNITYSDK_OFFSET(0x1050BFF0)
#define CLASS_2_9D74472291B98828_METHOD_2_C12DBE468567E77A_OFFSET UNITYSDK_OFFSET(0x1050A930)
#define CLASS_2_9D74472291B98828_METHOD_2_C4B97B51666ED6D0_OFFSET UNITYSDK_OFFSET(0x1050A9E0)
#define CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_1_OFFSET UNITYSDK_OFFSET(0x1050BE30)
#define CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_OFFSET UNITYSDK_OFFSET(0x1050B600)
#define CLASS_2_9D74472291B98828_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1050B0E0)
#define CLASS_2_9D74472291B98828_METHOD_2_DF5A267FFE811F7B_OFFSET UNITYSDK_OFFSET(0x1050C090)
#define CLASS_2_9D74472291B98828_METHOD_2_EFD899C616187CA8_OFFSET UNITYSDK_OFFSET(0x1050BD90)
#define CLASS_2_9D74472291B98828_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1050BD70)
#define CLASS_2_9D74472291B98828_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x10507620)
#define CLASS_2_9D74472291B98828_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1050BDB0)
#define CLASS_2_9D74472291B98828_RELEASE_OFFSET UNITYSDK_OFFSET(0x1050A830)
#define CLASS_2_9D74472291B98828__CCTOR_OFFSET UNITYSDK_OFFSET(0x1050AA70)
#define CLASS_2_9D74472291B98828__CTOR_OFFSET UNITYSDK_OFFSET(0x10507640)

inline static constexpr unsigned int Class_2_9D74472291B98828_TypeDefinitionIndex = 68977;

class Class_2_9D74472291B98828 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_2_6()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D74472291B98828_TypeDefinitionIndex)->GetStaticField(0xF8D0);
	}
	// static const ::System::Single Field_2_7; // 0x0
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Field_2_8; // 0x60
	::Class_1_8DC4A6B2DA67EF18* Field_2_4; // 0xA0
	::Foundation::ObjectProxy_1<::Class_2_9D74472291B98828*>* Field_2_3; // 0xA8
	::Class_1_891075BBC2B4C33E* Field_2_0; // 0xB0
	::System::Action_1<::Class_2_9D74472291B98828_Struct_2_18E794CDBE104DC1_3>* Field_2_2; // 0xB8
	::Nap::NapECS::EcsWorld* Field_2_11; // 0xC0
	::PipelineCamera::WorldBasicCameraData Field_2_14; // 0xC8
	::Class_2_9D74472291B98828_Struct_2_18E794CDBE104DC1_3 Field_2_5; // 0xF4
	::System::Boolean Field_2_13; // 0xF5
	::System::Boolean Field_2_12; // 0xF6
	::System::Single Field_2_10; // 0xF8
	::System::UInt32 Field_2_9; // 0xFC
	::MoleMole::InLevelChatConfig Field_2_1; // 0x100

	::System::Void _ctor(::Class_1_891075BBC2B4C33E* a1, ::MoleMole::InLevelChatConfig a2, ::System::UInt32 a3, ::System::Single a4, ::Nap::NapECS::EcsWorld* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_891075BBC2B4C33E*, ::MoleMole::InLevelChatConfig, ::System::UInt32, ::System::Single, ::Nap::NapECS::EcsWorld*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

	::System::Boolean Method_2_92DDFB61A2DC6128()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_92DDFB61A2DC6128_OFFSET))(this);
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

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_6772E9913BCB5ED0(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_6772E9913BCB5ED0_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::InLevelChatConfig Method_2_7536679CFED3B289(::System::String* a1, ::MoleMole::InLevelChatConfig a2)
	{
		return ((::MoleMole::InLevelChatConfig(*)(::System::String*, ::MoleMole::InLevelChatConfig))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_7536679CFED3B289_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	static ::Class_2_9D74472291B98828* Method_2_6AA2F81454ABF5E6(::Class_1_891075BBC2B4C33E* a1)
	{
		return ((::Class_2_9D74472291B98828*(*)(::Class_1_891075BBC2B4C33E*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_6AA2F81454ABF5E6_OFFSET))(a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_20CB55310DA00017(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_20CB55310DA00017_OFFSET))(this, a1);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_D65512A83CF70AB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	::System::Action* Method_2_CFAC03C3080DD000()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_OFFSET))(this);
	}

	static ::System::Void Method_2_098499348BBE0FC2(::System::UInt32 a1, ::System::UInt32 a2, ::Nap::NapECS::EcsWorld* a3, ::System::Boolean& a4, ::System::Boolean& a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_098499348BBE0FC2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Action* Method_2_EFD899C616187CA8()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_EFD899C616187CA8_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000_1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_CFAC03C3080DD000_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_3_OFFSET))(this);
	}

	static ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Method_2_156F124EBBC07B6C()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_156F124EBBC07B6C_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_1D4018D4200358D0_4_OFFSET))(this);
	}

	::System::Void Method_2_A41A4126E09888A8(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_A41A4126E09888A8_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_DF5A267FFE811F7B()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_DF5A267FFE811F7B_OFFSET))(this);
	}

	::System::Single Method_2_431B41F82025C3EE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D74472291B98828_METHOD_2_431B41F82025C3EE_OFFSET))(this);
	}
};
