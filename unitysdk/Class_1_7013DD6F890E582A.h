#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashFOVChannel.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_7013DD6F890E582A_GET_BLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x15B31460)
#define CLASS_1_7013DD6F890E582A_GET_BLENDINTIME_OFFSET UNITYSDK_OFFSET(0x15B31480)
#define CLASS_1_7013DD6F890E582A_GET_BLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x15B314A0)
#define CLASS_1_7013DD6F890E582A_GET_BLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x15B314C0)
#define CLASS_1_7013DD6F890E582A_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x15B313C0)
#define CLASS_1_7013DD6F890E582A_GET_CURRENTWEIGHT_OFFSET UNITYSDK_OFFSET(0x15B31540)
#define CLASS_1_7013DD6F890E582A_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15B31400)
#define CLASS_1_7013DD6F890E582A_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x15B31420)
#define CLASS_1_7013DD6F890E582A_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x15B31440)
#define CLASS_1_7013DD6F890E582A_GET_FADEOUTELAPSED_OFFSET UNITYSDK_OFFSET(0x15B31500)
#define CLASS_1_7013DD6F890E582A_GET_FADEOUTSTARTWEIGHT_OFFSET UNITYSDK_OFFSET(0x15B31520)
#define CLASS_1_7013DD6F890E582A_GET_INSTANCEKEY_OFFSET UNITYSDK_OFFSET(0x15B313E0)
#define CLASS_1_7013DD6F890E582A_GET_ISFADINGOUT_OFFSET UNITYSDK_OFFSET(0x15B314E0)
#define CLASS_1_7013DD6F890E582A_SET_BLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x15B31470)
#define CLASS_1_7013DD6F890E582A_SET_BLENDINTIME_OFFSET UNITYSDK_OFFSET(0x15B31490)
#define CLASS_1_7013DD6F890E582A_SET_BLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x15B314B0)
#define CLASS_1_7013DD6F890E582A_SET_BLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x15B314D0)
#define CLASS_1_7013DD6F890E582A_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x15B313D0)
#define CLASS_1_7013DD6F890E582A_SET_CURRENTWEIGHT_OFFSET UNITYSDK_OFFSET(0x15B31550)
#define CLASS_1_7013DD6F890E582A_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x15B31410)
#define CLASS_1_7013DD6F890E582A_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x15B31430)
#define CLASS_1_7013DD6F890E582A_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x15B31450)
#define CLASS_1_7013DD6F890E582A_SET_FADEOUTELAPSED_OFFSET UNITYSDK_OFFSET(0x15B31510)
#define CLASS_1_7013DD6F890E582A_SET_FADEOUTSTARTWEIGHT_OFFSET UNITYSDK_OFFSET(0x15B31530)
#define CLASS_1_7013DD6F890E582A_SET_INSTANCEKEY_OFFSET UNITYSDK_OFFSET(0x15B313F0)
#define CLASS_1_7013DD6F890E582A_SET_ISFADINGOUT_OFFSET UNITYSDK_OFFSET(0x15B314F0)
#define CLASS_1_7013DD6F890E582A__CTOR_OFFSET UNITYSDK_OFFSET(0x15B31560)

inline static constexpr unsigned int Class_1_7013DD6F890E582A_TypeDefinitionIndex = 75521;

class Class_1_7013DD6F890E582A : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* _BlendInCurve_k__BackingField; // 0x10
	::UnityEngine::AnimationCurve* _BlendOutCurve_k__BackingField; // 0x18
	::System::Single _Delta_k__BackingField; // 0x20
	::System::Single _Elapsed_k__BackingField; // 0x24
	::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel _Channel_k__BackingField; // 0x28
	::System::Single _FadeOutStartWeight_k__BackingField; // 0x2C
	::System::Single _CurrentWeight_k__BackingField; // 0x30
	::System::Single _BlendOutTime_k__BackingField; // 0x34
	::System::Single _FadeOutElapsed_k__BackingField; // 0x38
	::System::Single _Duration_k__BackingField; // 0x3C
	::System::Int32 _InstanceKey_k__BackingField; // 0x40
	::System::Boolean _IsFadingOut_k__BackingField; // 0x44
	::System::Single _BlendInTime_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel get_Channel()
	{
		return ((::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_CHANNEL_OFFSET))(this);
	}

	::System::Void set_Channel(::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_CHANNEL_OFFSET))(this, a1);
	}

	::System::Int32 get_InstanceKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_INSTANCEKEY_OFFSET))(this);
	}

	::System::Void set_InstanceKey(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_INSTANCEKEY_OFFSET))(this, a1);
	}

	::System::Single get_Delta()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_DELTA_OFFSET))(this);
	}

	::System::Void set_Delta(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_DELTA_OFFSET))(this, a1);
	}

	::System::Single get_Duration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_DURATION_OFFSET))(this);
	}

	::System::Void set_Duration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_DURATION_OFFSET))(this, a1);
	}

	::System::Single get_Elapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_ELAPSED_OFFSET))(this);
	}

	::System::Void set_Elapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_ELAPSED_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_BlendInCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_BLENDINCURVE_OFFSET))(this);
	}

	::System::Void set_BlendInCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_BLENDINCURVE_OFFSET))(this, a1);
	}

	::System::Single get_BlendInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_BLENDINTIME_OFFSET))(this);
	}

	::System::Void set_BlendInTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_BLENDINTIME_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_BlendOutCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_BLENDOUTCURVE_OFFSET))(this);
	}

	::System::Void set_BlendOutCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_BLENDOUTCURVE_OFFSET))(this, a1);
	}

	::System::Single get_BlendOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_BLENDOUTTIME_OFFSET))(this);
	}

	::System::Void set_BlendOutTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_BLENDOUTTIME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFadingOut()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_ISFADINGOUT_OFFSET))(this);
	}

	::System::Void set_IsFadingOut(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_ISFADINGOUT_OFFSET))(this, a1);
	}

	::System::Single get_FadeOutElapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_FADEOUTELAPSED_OFFSET))(this);
	}

	::System::Void set_FadeOutElapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_FADEOUTELAPSED_OFFSET))(this, a1);
	}

	::System::Single get_FadeOutStartWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_FADEOUTSTARTWEIGHT_OFFSET))(this);
	}

	::System::Void set_FadeOutStartWeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_FADEOUTSTARTWEIGHT_OFFSET))(this, a1);
	}

	::System::Single get_CurrentWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_GET_CURRENTWEIGHT_OFFSET))(this);
	}

	::System::Void set_CurrentWeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7013DD6F890E582A_SET_CURRENTWEIGHT_OFFSET))(this, a1);
	}
};
