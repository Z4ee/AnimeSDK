#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CURRENTMAXLOOPOFFSETCOUNT_OFFSET UNITYSDK_OFFSET(0x16AAF760)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CURRENTMAXLOOPOFFSET_OFFSET UNITYSDK_OFFSET(0x16AAF7A0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_GETFIXEDTIMER_OFFSET UNITYSDK_OFFSET(0x16AAF850)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x16AAF7F0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_ONLOOPOFFSETCHANGED_OFFSET UNITYSDK_OFFSET(0x16AAF6B0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_ONLOOPOFFSETCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x16AAF710)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAF8F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAnimationCurveGroup_TypeDefinitionIndex = 64130;

	class ConfigAnimationCurveGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* curveDict; // 0x10
		::System::String* clipPath; // 0x18
		::System::Single duration; // 0x20
		::System::Int32 loopOffsetCount; // 0x24
		::System::Single loopOffset; // 0x28
		::System::Boolean isLoop; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP__CTOR_OFFSET))(this);
		}

		::System::Void OnLoopOffsetChanged(::System::Single target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_ONLOOPOFFSETCHANGED_OFFSET))(this, target);
		}

		::System::Void OnLoopOffsetCountChanged(::System::Int32 target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_ONLOOPOFFSETCOUNTCHANGED_OFFSET))(this, target);
		}

		::System::Int32 CurrentMaxLoopOffsetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CURRENTMAXLOOPOFFSETCOUNT_OFFSET))(this);
		}

		::System::Single CurrentMaxLoopOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_CURRENTMAXLOOPOFFSET_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_GET_LENGTH_OFFSET))(this);
		}

		::System::Single GetFixedTimer(::System::Single timer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_GETFIXEDTIMER_OFFSET))(this, timer);
		}
	};
}
