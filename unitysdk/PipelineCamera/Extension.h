#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataChannel.h"
#include "unitysdk/PipelineCamera/ValueDoubleBuffer_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraDebugger2D; }
namespace PipelineCamera { class ICameraDebugger3D; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceCollection; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define PIPELINECAMERA_EXTENSION_ASEULER_OFFSET UNITYSDK_OFFSET(0x1D87E340)
#define PIPELINECAMERA_EXTENSION_ASPERIODIC_1_OFFSET UNITYSDK_OFFSET(0x1D87DBB0)
#define PIPELINECAMERA_EXTENSION_ASPERIODIC_OFFSET UNITYSDK_OFFSET(0x1D87DAF0)
#define PIPELINECAMERA_EXTENSION_CLAMPTO_OFFSET UNITYSDK_OFFSET(0x1D87D9A0)
#define PIPELINECAMERA_EXTENSION_CONTAINNAN_OFFSET UNITYSDK_OFFSET(0x1D87DC60)
#define PIPELINECAMERA_EXTENSION_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1D87C030)
#define PIPELINECAMERA_EXTENSION_DRAWELLIPSE_OFFSET UNITYSDK_OFFSET(0x1D87B920)
#define PIPELINECAMERA_EXTENSION_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1D87B120)
#define PIPELINECAMERA_EXTENSION_ENSUREINRANGE_OFFSET UNITYSDK_OFFSET(0x1D87DA40)
#define PIPELINECAMERA_EXTENSION_ENSURENOTZERO_OFFSET UNITYSDK_OFFSET(0x1D87D810)
#define PIPELINECAMERA_EXTENSION_FORWARD_OFFSET UNITYSDK_OFFSET(0x1D87E260)
#define PIPELINECAMERA_EXTENSION_GETBLENDINGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D87D020)
#define PIPELINECAMERA_EXTENSION_GETELLIPSEDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1D87B660)
#define PIPELINECAMERA_EXTENSION_GETSECTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1D87D490)
#define PIPELINECAMERA_EXTENSION_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1D87E4E0)
#define PIPELINECAMERA_EXTENSION_ISNEARLYEQUAL_1_OFFSET UNITYSDK_OFFSET(0x1D87DDD0)
#define PIPELINECAMERA_EXTENSION_ISNEARLYEQUAL_2_OFFSET UNITYSDK_OFFSET(0x1D87DF40)
#define PIPELINECAMERA_EXTENSION_ISNEARLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1D87D890)
#define PIPELINECAMERA_EXTENSION_ISNEARLYZERO_1_OFFSET UNITYSDK_OFFSET(0x1D87DE90)
#define PIPELINECAMERA_EXTENSION_ISNEARLYZERO_2_OFFSET UNITYSDK_OFFSET(0x1D87DFE0)
#define PIPELINECAMERA_EXTENSION_ISNEARLYZERO_OFFSET UNITYSDK_OFFSET(0x1D87D930)
#define PIPELINECAMERA_EXTENSION_LERPEULERROTATION_OFFSET UNITYSDK_OFFSET(0x1D87CBA0)
#define PIPELINECAMERA_EXTENSION_LERPEULER_OFFSET UNITYSDK_OFFSET(0x1D87CDC0)
#define PIPELINECAMERA_EXTENSION_LERPFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1D87CB00)
#define PIPELINECAMERA_EXTENSION_LERPOFFSET_OFFSET UNITYSDK_OFFSET(0x1D87CA10)
#define PIPELINECAMERA_EXTENSION_LERPPIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1D87C850)
#define PIPELINECAMERA_EXTENSION_LERPRADIUS_OFFSET UNITYSDK_OFFSET(0x1D87C970)
#define PIPELINECAMERA_EXTENSION_MEMBERWISEMULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1D87E0D0)
#define PIPELINECAMERA_EXTENSION_MEMBERWISEMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D87E060)
#define PIPELINECAMERA_EXTENSION_MINMAX_OFFSET UNITYSDK_OFFSET(0x1D87E570)
#define PIPELINECAMERA_EXTENSION_MIRROR_OFFSET UNITYSDK_OFFSET(0x1D87D060)
#define PIPELINECAMERA_EXTENSION_PROJECTON_OFFSET UNITYSDK_OFFSET(0x1D87DCC0)
#define PIPELINECAMERA_EXTENSION_REALASPECT_OFFSET UNITYSDK_OFFSET(0x1D87D710)
#define PIPELINECAMERA_EXTENSION_RIGHT_1_OFFSET UNITYSDK_OFFSET(0x1D87E450)
#define PIPELINECAMERA_EXTENSION_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D87E2B0)
#define PIPELINECAMERA_EXTENSION_ROTATEBYSHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x1D87C7F0)
#define PIPELINECAMERA_EXTENSION_SIZEXZ_OFFSET UNITYSDK_OFFSET(0x1D87E3E0)
#define PIPELINECAMERA_EXTENSION_TESTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D87C110)
#define PIPELINECAMERA_EXTENSION_TESTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1D87C1F0)
#define PIPELINECAMERA_EXTENSION_TESTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D87C150)
#define PIPELINECAMERA_EXTENSION_TESTEVALUATE_OFFSET UNITYSDK_OFFSET(0x1D87C290)
#define PIPELINECAMERA_EXTENSION_TESTFLUSH_OFFSET UNITYSDK_OFFSET(0x1D87C2E0)
#define PIPELINECAMERA_EXTENSION_TESTPOSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1D87C240)
#define PIPELINECAMERA_EXTENSION_TESTPREPARE_OFFSET UNITYSDK_OFFSET(0x1D87C1A0)
#define PIPELINECAMERA_EXTENSION_TESTTOUCH_OFFSET UNITYSDK_OFFSET(0x1D87C330)
#define PIPELINECAMERA_EXTENSION_TESTTRACKINCOLLECT_OFFSET UNITYSDK_OFFSET(0x1D87C380)
#define PIPELINECAMERA_EXTENSION_TOPRECISESTRING_OFFSET UNITYSDK_OFFSET(0x1D87E160)
#define PIPELINECAMERA_EXTENSION_TOTRANSLATIONROTATIONSCALE_OFFSET UNITYSDK_OFFSET(0x1D87D2C0)
#define PIPELINECAMERA_EXTENSION_UPDATED_OFFSET UNITYSDK_OFFSET(0x1D87AF70)
#define PIPELINECAMERA_EXTENSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D87C3D0)
#define PIPELINECAMERA_EXTENSION_UP_1_OFFSET UNITYSDK_OFFSET(0x1D87E490)
#define PIPELINECAMERA_EXTENSION_UP_OFFSET UNITYSDK_OFFSET(0x1D87E2F0)
#define PIPELINECAMERA_EXTENSION_VERTICAL_OFFSET UNITYSDK_OFFSET(0x1D87E520)
#define PIPELINECAMERA_EXTENSION__GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_OFFSET UNITYSDK_OFFSET(0x1D87B8D0)
#define PIPELINECAMERA_EXTENSION__GETELLIPSEDIRECTIONS_G__SAMPLELIST_8_0_OFFSET UNITYSDK_OFFSET(0x1D87B870)

namespace PipelineCamera
{
	inline static constexpr unsigned int Extension_TypeDefinitionIndex = 37568;

	class Extension : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>** StaticGet__ellipseDirection()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Extension_TypeDefinitionIndex)->GetStaticField(0x28D90);
		}

		static ::PipelineCamera::ICameraDataBlenderBuilder* Updated(::PipelineCamera::ICameraDataBlenderBuilder* self, ::PipelineCamera::ICameraDataBlenderBuilder* other)
		{
			return ((::PipelineCamera::ICameraDataBlenderBuilder*(*)(::PipelineCamera::ICameraDataBlenderBuilder*, ::PipelineCamera::ICameraDataBlenderBuilder*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_UPDATED_OFFSET))(self, other);
		}

		static ::PipelineCamera::ICameraDebugger2D* DrawRectangle(::PipelineCamera::ICameraDebugger2D* self, ::Foundation::Unreal::FName identifier, ::UnityEngine::Vector2& leftBottom, ::UnityEngine::Vector2& size, ::System::Boolean fill, ::UnityEngine::Color color, ::System::Single depth, ::System::Single duration)
		{
			return ((::PipelineCamera::ICameraDebugger2D*(*)(::PipelineCamera::ICameraDebugger2D*, ::Foundation::Unreal::FName, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_DRAWRECTANGLE_OFFSET))(self, identifier, leftBottom, size, fill, color, depth, duration);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* GetEllipseDirections(::System::Int32 value)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_GETELLIPSEDIRECTIONS_OFFSET))(value);
		}

		static ::PipelineCamera::ICameraDebugger2D* DrawEllipse(::PipelineCamera::ICameraDebugger2D* self, ::Foundation::Unreal::FName identifier, ::UnityEngine::Vector2& position, ::UnityEngine::Vector2 axes, ::System::Int32 segment, ::System::Boolean fill, ::UnityEngine::Color color, ::System::Single depth, ::System::Single duration)
		{
			return ((::PipelineCamera::ICameraDebugger2D*(*)(::PipelineCamera::ICameraDebugger2D*, ::Foundation::Unreal::FName, ::UnityEngine::Vector2&, ::UnityEngine::Vector2, ::System::Int32, ::System::Boolean, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_DRAWELLIPSE_OFFSET))(self, identifier, position, axes, segment, fill, color, depth, duration);
		}

		static ::PipelineCamera::ICameraDebugger3D* DrawArrow(::PipelineCamera::ICameraDebugger3D* self, ::Foundation::Unreal::FName identifier, ::UnityEngine::Vector3& lineStart, ::UnityEngine::Vector3& lineEnd, ::System::Single arrowSize, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::PipelineCamera::ICameraDebugger3D*(*)(::PipelineCamera::ICameraDebugger3D*, ::Foundation::Unreal::FName, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_DRAWARROW_OFFSET))(self, identifier, lineStart, lineEnd, arrowSize, color, duration);
		}

		static ::System::Boolean TestActivate(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTACTIVATE_OFFSET))(self);
		}

		static ::System::Boolean TestDeactivate(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTDEACTIVATE_OFFSET))(self);
		}

		static ::System::Boolean TestPrepare(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTPREPARE_OFFSET))(self);
		}

		static ::System::Boolean TestCollect(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTCOLLECT_OFFSET))(self);
		}

		static ::System::Boolean TestPostCollect(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTPOSTCOLLECT_OFFSET))(self);
		}

		static ::System::Boolean TestEvaluate(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTEVALUATE_OFFSET))(self);
		}

		static ::System::Boolean TestFlush(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTFLUSH_OFFSET))(self);
		}

		static ::System::Boolean TestTouch(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTTOUCH_OFFSET))(self);
		}

		static ::System::Boolean TestTrackInCollect(::PipelineCamera::CameraModuleFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraModuleFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TESTTRACKINCOLLECT_OFFSET))(self);
		}

		static ::PipelineCamera::WorldBasicCameraData Update(::PipelineCamera::WorldBasicCameraData& self, ::PipelineCamera::WorldBasicCameraData& original, ::PipelineCamera::Module::WorldBasicCameraDataChannel channel)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::Module::WorldBasicCameraDataChannel))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_UPDATE_OFFSET))(self, original, channel);
		}

		static ::System::Boolean RotateByShortestPath(::PipelineCamera::WorldBasicCameraDataDeltaFlag self)
		{
			return ((::System::Boolean(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ROTATEBYSHORTESTPATH_OFFSET))(self);
		}

		static ::UnityEngine::Vector3 LerpPivotLocation(::PipelineCamera::WorldBasicCameraDataDeltaFlag self, ::UnityEngine::Vector3& source, ::UnityEngine::Vector3& target, ::System::Single alpha)
		{
			return ((::UnityEngine::Vector3(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_LERPPIVOTLOCATION_OFFSET))(self, source, target, alpha);
		}

		static ::System::Single LerpRadius(::PipelineCamera::WorldBasicCameraDataDeltaFlag self, ::System::Single source, ::System::Single target, ::System::Single alpha)
		{
			return ((::System::Single(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_LERPRADIUS_OFFSET))(self, source, target, alpha);
		}

		static ::UnityEngine::Vector2 LerpOffset(::PipelineCamera::WorldBasicCameraDataDeltaFlag self, ::UnityEngine::Vector2& source, ::UnityEngine::Vector2& target, ::System::Single alpha)
		{
			return ((::UnityEngine::Vector2(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_LERPOFFSET_OFFSET))(self, source, target, alpha);
		}

		static ::System::Single LerpFieldOfView(::PipelineCamera::WorldBasicCameraDataDeltaFlag self, ::System::Single source, ::System::Single target, ::System::Single alpha)
		{
			return ((::System::Single(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_LERPFIELDOFVIEW_OFFSET))(self, source, target, alpha);
		}

		static ::UnityEngine::Quaternion LerpEulerRotation(::PipelineCamera::WorldBasicCameraDataDeltaFlag self, ::UnityEngine::Quaternion& source, ::UnityEngine::Quaternion& target, ::System::Single alpha)
		{
			return ((::UnityEngine::Quaternion(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_LERPEULERROTATION_OFFSET))(self, source, target, alpha);
		}

		static ::UnityEngine::Vector3 LerpEuler(::PipelineCamera::WorldBasicCameraDataDeltaFlag self, ::UnityEngine::Vector3& source, ::UnityEngine::Vector3& target, ::System::Single alpha)
		{
			return ((::UnityEngine::Vector3(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_LERPEULER_OFFSET))(self, source, target, alpha);
		}

		static ::System::Int32 GetBlendingCategory(::PipelineCamera::WorldBasicCameraDataDeltaFlag self)
		{
			return ((::System::Int32(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_GETBLENDINGCATEGORY_OFFSET))(self);
		}

		static ::System::Void Mirror(::UnityEngine::Matrix4x4& self, ::UnityEngine::Animations::Axis mirrorAxis, ::UnityEngine::Animations::Axis flipAxis)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Animations::Axis, ::UnityEngine::Animations::Axis))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_MIRROR_OFFSET))(self, mirrorAxis, flipAxis);
		}

		static ::System::Boolean ToTranslationRotationScale(::UnityEngine::Matrix4x4& self, ::UnityEngine::Vector3& translation, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale3D, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TOTRANSLATIONROTATIONSCALE_OFFSET))(self, translation, rotation, scale3D, tolerance);
		}

		static ::System::Single GetSectionStartTime(::PipelineCamera::CameraSequence::ICameraSequenceCollection* cameraSequence, ::Foundation::Unreal::FName sectionName)
		{
			return ((::System::Single(*)(::PipelineCamera::CameraSequence::ICameraSequenceCollection*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_GETSECTIONSTARTTIME_OFFSET))(cameraSequence, sectionName);
		}

		static ::System::Single RealAspect(::UnityEngine::Camera* camera)
		{
			return ((::System::Single(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_REALASPECT_OFFSET))(camera);
		}

		static ::System::Single EnsureNotZero(::System::Single self, ::System::Single tolerance)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ENSURENOTZERO_OFFSET))(self, tolerance);
		}

		static ::System::Boolean IsNearlyEqual(::System::Double self, ::System::Double other, ::System::Double tolerance)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ISNEARLYEQUAL_OFFSET))(self, other, tolerance);
		}

		static ::System::Boolean IsNearlyZero(::System::Double self, ::System::Double tolerance)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ISNEARLYZERO_OFFSET))(self, tolerance);
		}

		static ::System::Double ClampTo(::System::Double self, ::System::Double min, ::System::Double max)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_CLAMPTO_OFFSET))(self, min, max);
		}

		static ::System::Nullable_1<::System::Double> EnsureInRange(::System::Double self, ::System::Double min, ::System::Double max)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ENSUREINRANGE_OFFSET))(self, min, max);
		}

		static ::System::Double AsPeriodic(::System::Double self, ::System::Double period, ::System::Double min)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ASPERIODIC_OFFSET))(self, period, min);
		}

		static ::System::Single AsPeriodic_1(::System::Single self, ::System::Single period, ::System::Single min)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ASPERIODIC_1_OFFSET))(self, period, min);
		}

		static ::System::Boolean ContainNaN(::UnityEngine::Vector2& self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_CONTAINNAN_OFFSET))(self);
		}

		static ::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single> ProjectOn(::UnityEngine::Vector3& self, ::UnityEngine::Vector3& forwardVector, ::UnityEngine::Vector3& rightVector, ::UnityEngine::Vector3& upVector)
		{
			return ((::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_PROJECTON_OFFSET))(self, forwardVector, rightVector, upVector);
		}

		static ::System::Boolean IsNearlyEqual_1(::UnityEngine::Vector4& self, ::UnityEngine::Vector4& other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ISNEARLYEQUAL_1_OFFSET))(self, other, tolerance);
		}

		static ::System::Boolean IsNearlyZero_1(::UnityEngine::Vector4& self, ::UnityEngine::Vector4& other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ISNEARLYZERO_1_OFFSET))(self, other, tolerance);
		}

		static ::System::Boolean IsNearlyEqual_2(::UnityEngine::Vector2& self, ::UnityEngine::Vector2 other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ISNEARLYEQUAL_2_OFFSET))(self, other, tolerance);
		}

		static ::System::Boolean IsNearlyZero_2(::UnityEngine::Vector2& self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ISNEARLYZERO_2_OFFSET))(self, tolerance);
		}

		static ::UnityEngine::Vector2 MemberWiseMultiply(::UnityEngine::Vector2& self, ::UnityEngine::Vector2& other)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_MEMBERWISEMULTIPLY_OFFSET))(self, other);
		}

		static ::UnityEngine::Vector3 MemberWiseMultiply_1(::UnityEngine::Vector3& self, ::UnityEngine::Vector3& other)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_MEMBERWISEMULTIPLY_1_OFFSET))(self, other);
		}

		static ::System::String* ToPreciseString(::UnityEngine::Vector3& self)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_TOPRECISESTRING_OFFSET))(self);
		}

		static ::System::Single Forward(::UnityEngine::Vector3& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_FORWARD_OFFSET))(self);
		}

		static ::System::Single Right(::UnityEngine::Vector3& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_RIGHT_OFFSET))(self);
		}

		static ::System::Single Up(::UnityEngine::Vector3& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_UP_OFFSET))(self);
		}

		static ::UnityEngine::Quaternion AsEuler(::UnityEngine::Vector3& self)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_ASEULER_OFFSET))(self);
		}

		static ::System::Single SizeXZ(::UnityEngine::Vector3& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_SIZEXZ_OFFSET))(self);
		}

		static ::System::Single Right_1(::UnityEngine::Vector2& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_RIGHT_1_OFFSET))(self);
		}

		static ::System::Single Up_1(::UnityEngine::Vector2& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_UP_1_OFFSET))(self);
		}

		static ::System::Single Horizontal(::UnityEngine::Vector2& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_HORIZONTAL_OFFSET))(self);
		}

		static ::System::Single Vertical(::UnityEngine::Vector2& self)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_VERTICAL_OFFSET))(self);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> MinMax(::UnityEngine::Vector2& self)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION_MINMAX_OFFSET))(self);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* _GetEllipseDirections_g__SampleList_8_0(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* list, ::System::Int32 start, ::System::Int32 step)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION__GETELLIPSEDIRECTIONS_G__SAMPLELIST_8_0_OFFSET))(list, start, step);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* _GetEllipseDirections_g__GenerateList_8_1(::System::Int32 segment)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTENSION__GETELLIPSEDIRECTIONS_G__GENERATELIST_8_1_OFFSET))(segment);
		}
	};
}
