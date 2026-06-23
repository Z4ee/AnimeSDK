#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EFFECTCASTRECORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1591D340)
#define EFFECTCASTRECORDER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1591D640)
#define EFFECTCASTRECORDER_END_OFFSET UNITYSDK_OFFSET(0x1591D7D0)
#define EFFECTCASTRECORDER_GET_ENABLEERRORWHILELIMIT_OFFSET UNITYSDK_OFFSET(0x1591D630)
#define EFFECTCASTRECORDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1591D0F0)
#define EFFECTCASTRECORDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1591E3D0)
#define EFFECTCASTRECORDER_SET_ENABLEERRORWHILELIMIT_OFFSET UNITYSDK_OFFSET(0x1591D570)
#define EFFECTCASTRECORDER_START_OFFSET UNITYSDK_OFFSET(0x1591D3D0)
#define EFFECTCASTRECORDER_TIMEFILENAMEPATH_OFFSET UNITYSDK_OFFSET(0x1591D6B0)
#define EFFECTCASTRECORDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1591D820)
#define EFFECTCASTRECORDER_WRITEFILEIFNEED_OFFSET UNITYSDK_OFFSET(0x1591D8C0)
#define EFFECTCASTRECORDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1591E4B0)
#define EFFECTCASTRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1591E440)

inline static constexpr unsigned int EffectCastRecorder_TypeDefinitionIndex = 76353;

class EffectCastRecorder : public ::UnityEngine::MonoBehaviour
{
public:
	static ::EffectCastRecorder** StaticGet_s_instance()
	{
		return (::EffectCastRecorder**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder_TypeDefinitionIndex)->GetStaticField(0x3DDC0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_s_HashSet()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder_TypeDefinitionIndex)->GetStaticField(0x3DDC8);
	}
	::System::Boolean m_EnableErrorWhileLimit; // 0x18
	::System::Single interval; // 0x1C
	::System::Boolean isRecording; // 0x20
	::System::String* fileName; // 0x28
	::System::Single leftTime; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER__CCTOR_OFFSET))();
	}

	static ::EffectCastRecorder* get_Instance()
	{
		return ((::EffectCastRecorder*(*)())((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_START_OFFSET))(this);
	}

	::System::Boolean get_EnableErrorWhileLimit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_GET_ENABLEERRORWHILELIMIT_OFFSET))(this);
	}

	::System::Void set_EnableErrorWhileLimit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_SET_ENABLEERRORWHILELIMIT_OFFSET))(this, value);
	}

	::System::Void Begin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_BEGIN_OFFSET))(this);
	}

	::System::Void End()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_END_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_ONDESTROY_OFFSET))(this);
	}

	::System::Void WriteFileIfNeed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_WRITEFILEIFNEED_OFFSET))(this);
	}

	::System::Void TimeFileNamePath()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER_TIMEFILENAMEPATH_OFFSET))(this);
	}
};
