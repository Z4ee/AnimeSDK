#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/MoveByBlending_MoveTargetDataProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xF640E50)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_AVATARID_OFFSET UNITYSDK_OFFSET(0xF641150)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_ENTITYWORLD_OFFSET UNITYSDK_OFFSET(0xF641200)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xF640FF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_HEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xF6410A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_GETDATA_OFFSET UNITYSDK_OFFSET(0xF6406E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_GETDESIREDRADIUS_OFFSET UNITYSDK_OFFSET(0xF6404E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF640DA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_SETPATH_OFFSET UNITYSDK_OFFSET(0xF640DB0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO__CCTOR_OFFSET UNITYSDK_OFFSET(0xF641300)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0xF6412B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xF641410)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0xF641500)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int MoveForwardTargetByHeightRatio_TypeDefinitionIndex = 68822;

	class MoveForwardTargetByHeightRatio : public ::PipelineCamera::CameraSequence::MoveByBlending_MoveTargetDataProvider
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveForwardTargetByHeightRatio_TypeDefinitionIndex)->GetStaticField(0xF5E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_AvatarId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveForwardTargetByHeightRatio_TypeDefinitionIndex)->GetStaticField(0xF5E8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveForwardTargetByHeightRatio_TypeDefinitionIndex)->GetStaticField(0xF5F0);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveForwardTargetByHeightRatio_TypeDefinitionIndex)->GetStaticField(0xF5F8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveForwardTargetByHeightRatio_TypeDefinitionIndex)->GetStaticField(0xF600);
		}
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x40
		::System::Single fieldOfView; // 0x48
		::System::UInt32 AvatarId; // 0x4C
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x50
		::System::Single heightRatio; // 0x58
		::System::Boolean makeContextDependent; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO__CCTOR_OFFSET))();
		}

		static ::System::Single GetDesiredRadius(::System::Single heightRatio, ::System::Single fieldOfView, ::System::Single aspectRatio, ::System::UInt32 avatarId, ::Nap::NapECS::EcsWorld* ecsWorld)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_GETDESIREDRADIUS_OFFSET))(heightRatio, fieldOfView, aspectRatio, avatarId, ecsWorld);
		}

		::UnityEngine::Vector3 GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_fieldOfView(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_FIELDOFVIEW_OFFSET))(this, context);
		}

		::System::Single fetch_heightRatio(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_HEIGHTRATIO_OFFSET))(this, context);
		}

		::System::UInt32 fetch_AvatarId(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_AVATARID_OFFSET))(this, context);
		}

		::Nap::NapECS::EcsWorld* fetch_EntityWorld(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO_FETCH_ENTITYWORLD_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVEFORWARDTARGETBYHEIGHTRATIO___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
