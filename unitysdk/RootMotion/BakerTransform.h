#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_BAKERTRANSFORM_ADDLOOPFRAME_OFFSET UNITYSDK_OFFSET(0x1DAEF700)
#define ROOTMOTION_BAKERTRANSFORM_ADDROOTMOTIONCURVES_OFFSET UNITYSDK_OFFSET(0x1DAEF010)
#define ROOTMOTION_BAKERTRANSFORM_REDUCEKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1DAEF2D0)
#define ROOTMOTION_BAKERTRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x1DAEEC00)
#define ROOTMOTION_BAKERTRANSFORM_SETCURVES_OFFSET UNITYSDK_OFFSET(0x1DAEED30)
#define ROOTMOTION_BAKERTRANSFORM_SETKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1DAEF420)
#define ROOTMOTION_BAKERTRANSFORM_SETRELATIVESPACE_OFFSET UNITYSDK_OFFSET(0x1DAEED10)
#define ROOTMOTION_BAKERTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEEBD0)

namespace RootMotion
{
	inline static constexpr unsigned int BakerTransform_TypeDefinitionIndex = 38173;

	class BakerTransform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::AnimationCurve* posX; // 0x18
		::UnityEngine::AnimationCurve* posY; // 0x20
		::UnityEngine::AnimationCurve* posZ; // 0x28
		::UnityEngine::AnimationCurve* rotX; // 0x30
		::UnityEngine::AnimationCurve* rotY; // 0x38
		::UnityEngine::AnimationCurve* rotZ; // 0x40
		::UnityEngine::AnimationCurve* rotW; // 0x48
		::System::String* relativePath; // 0x50
		::System::Boolean recordPosition; // 0x58
		::UnityEngine::Vector3 relativePosition; // 0x5C
		::System::Boolean isRootNode; // 0x68
		::UnityEngine::Quaternion relativeRotation; // 0x6C

		::System::Void _ctor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* root, ::System::Boolean recordPosition, ::System::Boolean isRootNode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM__CTOR_OFFSET))(this, transform, root, recordPosition, isRootNode);
		}

		::System::Void SetRelativeSpace(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_SETRELATIVESPACE_OFFSET))(this, position, rotation);
		}

		::System::Void SetCurves(::UnityEngine::AnimationClip*& clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_SETCURVES_OFFSET))(this, clip);
		}

		::System::Void AddRootMotionCurves(::UnityEngine::AnimationClip*& clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_ADDROOTMOTIONCURVES_OFFSET))(this, clip);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_RESET_OFFSET))(this);
		}

		::System::Void ReduceKeyframes(::System::Single maxError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_REDUCEKEYFRAMES_OFFSET))(this, maxError);
		}

		::System::Void SetKeyframes(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_SETKEYFRAMES_OFFSET))(this, time);
		}

		::System::Void AddLoopFrame(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_BAKERTRANSFORM_ADDLOOPFRAME_OFFSET))(this, time);
		}
	};
}
