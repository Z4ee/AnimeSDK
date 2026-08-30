#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_391;
class Class_2_8600F499583BD153;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_648905DE8DAE448B_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xBA6EE10)
#define CLASS_1_648905DE8DAE448B_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xBA6EDF0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_15A11EB4EAAB3892_OFFSET UNITYSDK_OFFSET(0xBA6E790)
#define CLASS_1_648905DE8DAE448B_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xBA6EA50)
#define CLASS_1_648905DE8DAE448B_METHOD_1_3BF60D4DE5C2C206_OFFSET UNITYSDK_OFFSET(0xBA6E660)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0xBA6F060)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0xBA6F0B0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xBA6EB80)
#define CLASS_1_648905DE8DAE448B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBA6E3F0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBA6E600)
#define CLASS_1_648905DE8DAE448B_METHOD_1_5DFFE922C2406CCE_OFFSET UNITYSDK_OFFSET(0xBA6E990)
#define CLASS_1_648905DE8DAE448B_METHOD_1_651A585E3ED0787A_OFFSET UNITYSDK_OFFSET(0xBA6E3B0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBA6E610)
#define CLASS_1_648905DE8DAE448B_METHOD_1_9C45022812211693_OFFSET UNITYSDK_OFFSET(0xBA6E820)
#define CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0xBA6EBD0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xBA6E880)
#define CLASS_1_648905DE8DAE448B_METHOD_1_C20A7E9DF3996211_OFFSET UNITYSDK_OFFSET(0xBA6E4D0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_C2C10E2BA8A55C5E_OFFSET UNITYSDK_OFFSET(0xBA6ECB0)
#define CLASS_1_648905DE8DAE448B_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0xBA6ED00)
#define CLASS_1_648905DE8DAE448B_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xBA6EEA0)
#define CLASS_1_648905DE8DAE448B_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xBA6EE50)
#define CLASS_1_648905DE8DAE448B_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xBA6EE00)
#define CLASS_1_648905DE8DAE448B__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6F100)

inline static constexpr unsigned int Class_1_648905DE8DAE448B_TypeDefinitionIndex = 49990;

class Class_1_648905DE8DAE448B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_8600F499583BD153*>* DAOGCNIBHIL; // 0x10
	::Class_0_16E4307DCC419505_391* _OwnerFMSystem_k__BackingField; // 0x18
	::UnityEngine::AnimationCurve* _mappingCurve; // 0x20
	::System::String* _fmChannelName; // 0x28
	::System::Single LLICGDGPMJL; // 0x30
	::System::Single _fmSampleDelay; // 0x34
	::UnityEngine::Vector2 _inputRange; // 0x38
	::UnityEngine::Vector2 _outputRange; // 0x40
	::System::Boolean _enableFMControl; // 0x48
	::System::Boolean DIHHHPECEFM; // 0x49
	::System::Boolean AECPKJBMMED; // 0x4A

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

	::System::Void Method_1_3BF60D4DE5C2C206(::Class_2_8600F499583BD153* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8600F499583BD153*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_3BF60D4DE5C2C206_OFFSET))(this, a1);
	}

	::System::Void Method_1_15A11EB4EAAB3892(::Class_2_8600F499583BD153* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8600F499583BD153*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_15A11EB4EAAB3892_OFFSET))(this, a1);
	}

	::System::Void Method_1_C20A7E9DF3996211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_METHOD_1_C20A7E9DF3996211_OFFSET))(this);
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

	::Class_0_16E4307DCC419505_391* get_OwnerFMSystem()
	{
		return ((::Class_0_16E4307DCC419505_391*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_GET_OWNERFMSYSTEM_OFFSET))(this);
	}

	::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_391* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_391*))((::PBYTE)hIl2Cpp + CLASS_1_648905DE8DAE448B_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
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
