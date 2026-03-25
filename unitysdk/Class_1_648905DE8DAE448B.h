#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_327;
class Class_2_92F96E13C9577099;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_648905DE8DAE448B_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x114ACBD0)
#define CLASS_1_648905DE8DAE448B_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x114ACBB0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x114AC800)
#define CLASS_1_648905DE8DAE448B_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x114AC530)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x114ACE20)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x114ACE70)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x114AC940)
#define CLASS_1_648905DE8DAE448B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x114AC1D0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x114AC400)
#define CLASS_1_648905DE8DAE448B_METHOD_1_5DFFE922C2406CCE_OFFSET UNITYSDK_OFFSET(0x114AC740)
#define CLASS_1_648905DE8DAE448B_METHOD_1_651A585E3ED0787A_OFFSET UNITYSDK_OFFSET(0x114AC190)
#define CLASS_1_648905DE8DAE448B_METHOD_1_79C6CF7920BBB63A_OFFSET UNITYSDK_OFFSET(0x114AC460)
#define CLASS_1_648905DE8DAE448B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x114AC410)
#define CLASS_1_648905DE8DAE448B_METHOD_1_9C45022812211693_OFFSET UNITYSDK_OFFSET(0x114AC5C0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x114AC990)
#define CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x114AC620)
#define CLASS_1_648905DE8DAE448B_METHOD_1_B7252E7FA488DD14_OFFSET UNITYSDK_OFFSET(0x114AC2B0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_C2C10E2BA8A55C5E_OFFSET UNITYSDK_OFFSET(0x114ACA70)
#define CLASS_1_648905DE8DAE448B_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x114ACAC0)
#define CLASS_1_648905DE8DAE448B_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x114ACC60)
#define CLASS_1_648905DE8DAE448B_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x114ACC10)
#define CLASS_1_648905DE8DAE448B_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x114ACBC0)
#define CLASS_1_648905DE8DAE448B__CTOR_OFFSET UNITYSDK_OFFSET(0x114ACEC0)

inline static constexpr unsigned int Class_1_648905DE8DAE448B_TypeDefinitionIndex = 40252;

class Class_1_648905DE8DAE448B : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* _mappingCurve; // 0x10
	::System::String* _fmChannelName; // 0x18
	::System::Collections::Generic::List_1<::Class_2_92F96E13C9577099*>* Field_1_1; // 0x20
	::Class_0_16E4307DCC419505_327* _OwnerFMSystem_k__BackingField; // 0x28
	::UnityEngine::Vector2 _outputRange; // 0x30
	::System::Boolean Field_1_9; // 0x38
	::System::Boolean _enableFMControl; // 0x39
	::System::Boolean Field_1_8; // 0x3A
	::System::Single Field_1_0; // 0x3C
	::System::Single _fmSampleDelay; // 0x40
	::UnityEngine::Vector2 _inputRange; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B__CTOR_OFFSET))(this);
	}

	::EnviromentSystemV2Space::EnvCallbackCurveType Method_1_651A585E3ED0787A()
	{
		return ((::EnviromentSystemV2Space::EnvCallbackCurveType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_651A585E3ED0787A_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_79C6CF7920BBB63A(::Class_2_92F96E13C9577099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92F96E13C9577099*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_79C6CF7920BBB63A_OFFSET))(this, a1);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_92F96E13C9577099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92F96E13C9577099*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7252E7FA488DD14()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_B7252E7FA488DD14_OFFSET))(this);
	}

	::System::Void Method_1_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DFFE922C2406CCE(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector2> a2, ::System::Nullable_1<::UnityEngine::Vector2> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_5DFFE922C2406CCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_C2C10E2BA8A55C5E(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_C2C10E2BA8A55C5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_327* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_327*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_327* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_SET_OWNERFMSYSTEM_OFFSET))(this, value);
	}

	::System::String* ChannelName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_CHANNELNAME_OFFSET))(this);
	}

	::System::Single SampleDelay()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_SAMPLEDELAY_OFFSET))(this);
	}

	::System::Void OnSample(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_ONSAMPLE_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_1_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_2_OFFSET))(this);
	}
};
