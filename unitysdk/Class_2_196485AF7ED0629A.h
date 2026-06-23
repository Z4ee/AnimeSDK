#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_196485AF7ED0629A_Struct_2_18E794CDBE104DC1.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_50CC9E2C2D97979C;
class Class_1_8DC4A6B2DA67EF18;
class Class_1_D65512A83CF70AB7;
namespace Foundation { template <typename T> class ObjectProxy_1; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_196485AF7ED0629A_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xA6452D0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_014D8AE702435ACA_OFFSET UNITYSDK_OFFSET(0xA642F00)
#define CLASS_2_196485AF7ED0629A_METHOD_2_1CFA9C02CDDB465F_OFFSET UNITYSDK_OFFSET(0xA645390)
#define CLASS_2_196485AF7ED0629A_METHOD_2_1D2E0D34E5B80FE9_OFFSET UNITYSDK_OFFSET(0xA645410)
#define CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xA645F80)
#define CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0xA646170)
#define CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0xA6462D0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA645E80)
#define CLASS_2_196485AF7ED0629A_METHOD_2_20CB55310DA00017_OFFSET UNITYSDK_OFFSET(0xA645FD0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_29F33D10DC7006CA_OFFSET UNITYSDK_OFFSET(0xA6454C0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_38A9F7C3020AC7E7_OFFSET UNITYSDK_OFFSET(0xA645E60)
#define CLASS_2_196485AF7ED0629A_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xA646540)
#define CLASS_2_196485AF7ED0629A_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0xA646550)
#define CLASS_2_196485AF7ED0629A_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA646330)
#define CLASS_2_196485AF7ED0629A_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0xA646040)
#define CLASS_2_196485AF7ED0629A_METHOD_2_7C2013E05F36FDC3_OFFSET UNITYSDK_OFFSET(0xA646340)
#define CLASS_2_196485AF7ED0629A_METHOD_2_A41A4126E09888A8_OFFSET UNITYSDK_OFFSET(0xA646560)
#define CLASS_2_196485AF7ED0629A_METHOD_2_B632E3BE93938E42_OFFSET UNITYSDK_OFFSET(0xA642C50)
#define CLASS_2_196485AF7ED0629A_METHOD_2_C12DBE468567E77A_OFFSET UNITYSDK_OFFSET(0xA645340)
#define CLASS_2_196485AF7ED0629A_METHOD_2_C4B97B51666ED6D0_OFFSET UNITYSDK_OFFSET(0xA6453D0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_CFAC03C3080DD000_1_OFFSET UNITYSDK_OFFSET(0xA646230)
#define CLASS_2_196485AF7ED0629A_METHOD_2_CFAC03C3080DD000_OFFSET UNITYSDK_OFFSET(0xA645EE0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_DF5A267FFE811F7B_OFFSET UNITYSDK_OFFSET(0xA6459F0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_E399EAE92DB03529_OFFSET UNITYSDK_OFFSET(0xA6461D0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_EFD899C616187CA8_OFFSET UNITYSDK_OFFSET(0xA6454A0)
#define CLASS_2_196485AF7ED0629A_METHOD_2_F208B1D6556B4846_OFFSET UNITYSDK_OFFSET(0xA644B80)
#define CLASS_2_196485AF7ED0629A_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xA642C30)
#define CLASS_2_196485AF7ED0629A_RELEASE_OFFSET UNITYSDK_OFFSET(0xA645240)
#define CLASS_2_196485AF7ED0629A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA645440)
#define CLASS_2_196485AF7ED0629A__CTOR_OFFSET UNITYSDK_OFFSET(0xA642540)

inline static constexpr unsigned int Class_2_196485AF7ED0629A_TypeDefinitionIndex = 48871;

class Class_2_196485AF7ED0629A : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_2_6()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_2_196485AF7ED0629A_TypeDefinitionIndex)->GetStaticField(0xF440);
	}
	// static const ::System::Single Field_2_7; // 0x0
	::Il2CppArray<::System::UInt32>* Field_2_10; // 0x60
	::Class_1_50CC9E2C2D97979C* Field_2_0; // 0x68
	::System::Action_1<::Class_2_196485AF7ED0629A_Struct_2_18E794CDBE104DC1>* Field_2_2; // 0x70
	::Class_1_8DC4A6B2DA67EF18* Field_2_5; // 0x78
	::Nap::NapECS::EcsWorld* Field_2_11; // 0x80
	::Foundation::Variable_2<::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>> Field_2_8; // 0x88
	::Foundation::ObjectProxy_1<::Class_2_196485AF7ED0629A*>* Field_2_4; // 0xC8
	::MoleMole::InLevelMultiChatConfig Field_2_1; // 0xD0
	::System::UInt32 Field_2_9; // 0xDC
	::Class_2_196485AF7ED0629A_Struct_2_18E794CDBE104DC1 Field_2_3; // 0xE0
	::PipelineCamera::WorldBasicCameraData Field_2_12; // 0xE4

	::System::Void _ctor(::Class_1_50CC9E2C2D97979C* a1, ::MoleMole::InLevelMultiChatConfig a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_50CC9E2C2D97979C*, ::MoleMole::InLevelMultiChatConfig, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_2_B632E3BE93938E42()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_B632E3BE93938E42_OFFSET))(this);
	}

	::System::Void Method_2_014D8AE702435ACA(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_014D8AE702435ACA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F208B1D6556B4846()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_F208B1D6556B4846_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_GET_HANDLE_OFFSET))(this);
	}

	::System::Void Method_2_C12DBE468567E77A(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_C12DBE468567E77A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CFA9C02CDDB465F(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_1CFA9C02CDDB465F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C4B97B51666ED6D0(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_C4B97B51666ED6D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D2E0D34E5B80FE9(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_1D2E0D34E5B80FE9_OFFSET))(this, a1);
	}

	::System::Action* Method_2_EFD899C616187CA8()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_EFD899C616187CA8_OFFSET))(this);
	}

	static ::MoleMole::InLevelMultiChatConfig Method_2_29F33D10DC7006CA(::System::String* a1, ::MoleMole::InLevelMultiChatConfig a2)
	{
		return ((::MoleMole::InLevelMultiChatConfig(*)(::System::String*, ::MoleMole::InLevelMultiChatConfig))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_29F33D10DC7006CA_OFFSET))(a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_DF5A267FFE811F7B()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_DF5A267FFE811F7B_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_57C422EDEAAA7766>* Method_2_38A9F7C3020AC7E7()
	{
		return ((::Il2CppArray<::Struct_2_57C422EDEAAA7766>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_38A9F7C3020AC7E7_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_CFAC03C3080DD000_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_20CB55310DA00017(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_20CB55310DA00017_OFFSET))(this, a1);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_D65512A83CF70AB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Method_2_E399EAE92DB03529()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_E399EAE92DB03529_OFFSET))(this);
	}

	::System::Action* Method_2_CFAC03C3080DD000_1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_CFAC03C3080DD000_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_1D4018D4200358D0_3_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	static ::Class_2_196485AF7ED0629A* Method_2_7C2013E05F36FDC3(::Class_1_50CC9E2C2D97979C* a1)
	{
		return ((::Class_2_196485AF7ED0629A*(*)(::Class_1_50CC9E2C2D97979C*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_7C2013E05F36FDC3_OFFSET))(a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_2_A41A4126E09888A8(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A_METHOD_2_A41A4126E09888A8_OFFSET))(this, a1, a2);
	}
};
