#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/EntityLocationPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x134F2540)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GETDATA_OFFSET UNITYSDK_OFFSET(0x134F26E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x134F2F50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_1_OFFSET UNITYSDK_OFFSET(0x134F37B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_OFFSET UNITYSDK_OFFSET(0x134F3210)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_1_OFFSET UNITYSDK_OFFSET(0x134F3700)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_OFFSET UNITYSDK_OFFSET(0x134F32C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_31B87C19ACA94133_OFFSET UNITYSDK_OFFSET(0x134F3110)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x134F35C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x134F3370)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_1_OFFSET UNITYSDK_OFFSET(0x134F3510)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_2_OFFSET UNITYSDK_OFFSET(0x134F3650)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x134F3460)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_SETPATH_OFFSET UNITYSDK_OFFSET(0x134F24A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x134F2F80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x134F2F60)

namespace MoleMole::Config::CameraSequence::Utils::EntityLocation
{
	inline static constexpr unsigned int EntityLocationProviderByStretch_TypeDefinitionIndex = 59644;

	class EntityLocationProviderByStretch : public ::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainPointVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x11980);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x11988);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fallbackVerticalRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x11990);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_attachPointsVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x11998);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainPointHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x119A0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stretchRatioVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x119A8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stretchRatioHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x119B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_attachPointsHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x119B8);
		}
		::System::String* mainPointHorizontal; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* attachPointsHorizontal; // 0x48
		::System::Single stretchRatioHorizontal; // 0x50
		::System::String* mainPointVertical; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* attachPointsVertical; // 0x60
		::System::Single stretchRatioVertical; // 0x68
		::UnityEngine::Vector3 offset; // 0x6C
		::System::Single fallbackVerticalRatio; // 0x78
		::System::Boolean makeContextDependent; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_4_31B87C19ACA94133(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_31B87C19ACA94133_OFFSET))(this, a1);
		}

		::System::String* Method_4_17BD2B7D2D15CA8E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_256257DB669E870E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_256257DB669E870E_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_1_OFFSET))(this, a1);
		}

		::System::String* Method_4_17BD2B7D2D15CA8E_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_1_OFFSET))(this, a1);
		}
	};
}
