#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SLIDINGCONFIG_GETACCELERATION_OFFSET UNITYSDK_OFFSET(0x183996C0)
#define MOLEMOLE_SLIDINGCONFIG_GETCHECKINGRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0x18399AD0)
#define MOLEMOLE_SLIDINGCONFIG_GETFRICTION_OFFSET UNITYSDK_OFFSET(0x18399540)
#define MOLEMOLE_SLIDINGCONFIG_GETGRAVITY_OFFSET UNITYSDK_OFFSET(0x18399BF0)
#define MOLEMOLE_SLIDINGCONFIG_GETMAXDELTAANGLEPERSECONDINAIR_OFFSET UNITYSDK_OFFSET(0x18399A70)
#define MOLEMOLE_SLIDINGCONFIG_GETMAXDELTAANGLEPERSECOND_OFFSET UNITYSDK_OFFSET(0x18399930)
#define MOLEMOLE_SLIDINGCONFIG_GETMAXXZSPEEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18399880)
#define MOLEMOLE_SLIDINGCONFIG_GETMAXYSPEEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x183998D0)
#define MOLEMOLE_SLIDINGCONFIG_GETMINVELOCITYTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18399830)
#define MOLEMOLE_SLIDINGCONFIG_GETSLIDINGDELTATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18399D90)
#define MOLEMOLE_SLIDINGCONFIG_GETSLIDINGRAYCASTLENGTH2_OFFSET UNITYSDK_OFFSET(0x18399B30)
#define MOLEMOLE_SLIDINGCONFIG_GETSLIDINGRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0x18399B90)
#define MOLEMOLE_SLIDINGCONFIG_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x18399450)
#define MOLEMOLE_SLIDINGCONFIG_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x18399230)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGSMOOTHVALUE_OFFSET UNITYSDK_OFFSET(0x18399C50)
#define MOLEMOLE_SLIDINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18399DF0)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingConfig_TypeDefinitionIndex = 42545;

	class SlidingConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::SlidingConfig** StaticGet__instance()
		{
			return (::MoleMole::SlidingConfig**)Il2CppClass::FromTypeDefinitionIndex(SlidingConfig_TypeDefinitionIndex)->GetStaticField(0x411F0);
		}
		::System::Single defaultFrictionCoefficient; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* _surface2FrictionCoefficient; // 0x60
		::UnityEngine::AnimationCurve* slopeAccelerationCurve; // 0x68
		::UnityEngine::AnimationCurve* _surface2slopeAccelerationCurve; // 0x70
		::System::Single minVelocityThreshold; // 0x78
		::System::Single maxXZSpeedThreshold; // 0x7C
		::System::Single maxYSpeedThreshold; // 0x80
		::System::Single maxDeltaAnglePreSecond; // 0x84
		::System::Single maxDeltaAnglePreSecondInAir; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _surface2MaxDeltaAnglePreSecond; // 0x90
		::System::Single checkingRaycastLength; // 0x98
		::System::Single slidingRaycastLength; // 0x9C
		::System::Single slidingRaycastLength2; // 0xA0
		::System::Single gravity; // 0xA4
		::System::Single slidingSmoothValue; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _surface2SlidingSmoothValue; // 0xB0
		::System::Single slidingDeltaThreshold; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void ReloadFromFile(::System::Boolean async, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_RELOADFROMFILE_OFFSET))(async, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single span, ::System::Action_1<::System::Single>* oneStep, ::System::Action_1<::System::String*>* finish, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_RELOADFROMFILEASYNC_OFFSET))(span, oneStep, finish, name);
		}

		static ::System::Single GetFriction(::System::String* key, ::System::Single downhillAngle)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETFRICTION_OFFSET))(key, downhillAngle);
		}

		static ::System::Single GetAcceleration(::System::String* key, ::System::Single angle)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETACCELERATION_OFFSET))(key, angle);
		}

		static ::System::Single GetMinVelocityThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETMINVELOCITYTHRESHOLD_OFFSET))();
		}

		static ::System::Single GetMaxXZSpeedThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETMAXXZSPEEDTHRESHOLD_OFFSET))();
		}

		static ::System::Single GetMaxYSpeedThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETMAXYSPEEDTHRESHOLD_OFFSET))();
		}

		static ::System::Single GetMaxDeltaAnglePerSecond(::System::String* key)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETMAXDELTAANGLEPERSECOND_OFFSET))(key);
		}

		static ::System::Single GetMaxDeltaAnglePerSecondInAir()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETMAXDELTAANGLEPERSECONDINAIR_OFFSET))();
		}

		static ::System::Single GetCheckingRaycastLength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETCHECKINGRAYCASTLENGTH_OFFSET))();
		}

		static ::System::Single GetSlidingRaycastLength2()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETSLIDINGRAYCASTLENGTH2_OFFSET))();
		}

		static ::System::Single GetSlidingRaycastLength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETSLIDINGRAYCASTLENGTH_OFFSET))();
		}

		static ::System::Single GetGravity()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETGRAVITY_OFFSET))();
		}

		static ::System::Single SlidingSmoothValue(::System::String* tag)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGSMOOTHVALUE_OFFSET))(tag);
		}

		static ::System::Single GetSlidingDeltaThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_GETSLIDINGDELTATHRESHOLD_OFFSET))();
		}
	};
}
