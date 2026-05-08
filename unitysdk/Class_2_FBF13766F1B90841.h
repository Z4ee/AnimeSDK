#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1_2.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FBF13766F1B90841_METHOD_2_01FEAF3DAF11C3FD_OFFSET UNITYSDK_OFFSET(0x1395EF80)
#define CLASS_2_FBF13766F1B90841_METHOD_2_2FE578D2AC41E663_OFFSET UNITYSDK_OFFSET(0x1395E550)
#define CLASS_2_FBF13766F1B90841_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1395F070)
#define CLASS_2_FBF13766F1B90841_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1395E9F0)
#define CLASS_2_FBF13766F1B90841_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1395F060)
#define CLASS_2_FBF13766F1B90841_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1395EF70)
#define CLASS_2_FBF13766F1B90841_METHOD_2_98613641D704BA3E_OFFSET UNITYSDK_OFFSET(0x1395EE90)
#define CLASS_2_FBF13766F1B90841_METHOD_2_DF5A267FFE811F7B_OFFSET UNITYSDK_OFFSET(0x1395EA40)
#define CLASS_2_FBF13766F1B90841_METHOD_2_E399EAE92DB03529_OFFSET UNITYSDK_OFFSET(0x1395E990)
#define CLASS_2_FBF13766F1B90841__CCTOR_OFFSET UNITYSDK_OFFSET(0x1395E4F0)
#define CLASS_2_FBF13766F1B90841__CTOR_OFFSET UNITYSDK_OFFSET(0x1395DED0)

inline static constexpr unsigned int Class_2_FBF13766F1B90841_TypeDefinitionIndex = 65275;

class Class_2_FBF13766F1B90841 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_2_3()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBF13766F1B90841_TypeDefinitionIndex)->GetStaticField(0xC900);
	}
	// static const ::System::Single Field_2_4; // 0x0
	::Nap::NapECS::EcsWorld* Field_2_7; // 0x60
	::System::Action_1<::Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1_2>* Field_2_2; // 0x68
	::Il2CppArray<::System::UInt32>* Field_2_6; // 0x70
	::Struct_2_733B8EC4B9916061 Field_2_0; // 0x78
	::System::UInt32 Field_2_5; // 0x80
	::Enum_3_F00DC819D834EFD2 Field_2_1; // 0x84
	::PipelineCamera::WorldBasicCameraData Field_2_8; // 0x88

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::Enum_3_F00DC819D834EFD2 a2, ::Struct_2_733B8EC4B9916061 a3, ::System::UInt32 a4, ::Nap::NapECS::EcsWorld* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::Enum_3_F00DC819D834EFD2, ::Struct_2_733B8EC4B9916061, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_2FE578D2AC41E663()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_2FE578D2AC41E663_OFFSET))(this);
	}

	::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Method_2_E399EAE92DB03529()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_E399EAE92DB03529_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_DF5A267FFE811F7B()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_DF5A267FFE811F7B_OFFSET))(this);
	}

	::System::Void Method_2_98613641D704BA3E(::System::Nullable_1<::System::Boolean> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_98613641D704BA3E_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	static ::Class_2_FBF13766F1B90841* Method_2_01FEAF3DAF11C3FD(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::Enum_3_F00DC819D834EFD2 a2, ::Struct_2_733B8EC4B9916061 a3, ::System::UInt32 a4, ::Nap::NapECS::EcsWorld* a5)
	{
		return ((::Class_2_FBF13766F1B90841*(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::Enum_3_F00DC819D834EFD2, ::Struct_2_733B8EC4B9916061, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_01FEAF3DAF11C3FD_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}
};
