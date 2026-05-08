#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NapStreaming/POIMODE.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace NapStreaming { class NapStreamingData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD594D0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_INIT_OFFSET UNITYSDK_OFFSET(0xCD595A0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SAFEINSTANTIATE_OFFSET UNITYSDK_OFFSET(0xCD59650)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xCD58F30)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOHLOD_OFFSET UNITYSDK_OFFSET(0xCD57650)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOLOADING_OFFSET UNITYSDK_OFFSET(0xCD57090)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOUNLOAD_OFFSET UNITYSDK_OFFSET(0xCD57C60)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADHLOD_OFFSET UNITYSDK_OFFSET(0xCD57D40)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADOBJECTS_OFFSET UNITYSDK_OFFSET(0xCD57FF0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD59850)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__20_0_OFFSET UNITYSDK_OFFSET(0xCD59860)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__20_1_OFFSET UNITYSDK_OFFSET(0xCD59A50)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__23_0_OFFSET UNITYSDK_OFFSET(0xCD59C20)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__23_1_OFFSET UNITYSDK_OFFSET(0xCD59E00)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingGridData_TypeDefinitionIndex = 68167;

	class NapStreamingData_StreamingGridData : public ::System::Object
	{
	public:
		::System::Boolean hasHlod; // 0x10
		::System::String* hlodPathHash; // 0x18
		::System::String* originObjectPathHash; // 0x20
		::UnityEngine::Bounds bounds; // 0x28
		::NapStreaming::StreamingLayer layer; // 0x40
		::System::Boolean isMobileOff; // 0x44
		::System::Int32 poiIndex; // 0x48
		::NapStreaming::POIMODE poiMode; // 0x4C
		::Foundation::AssetPath hlodPath; // 0x50
		::Foundation::AssetPath originObjectPath; // 0x60
		::UnityEngine::GameObject* originObject; // 0x70
		::Foundation::AssetRequestHandle originHandle; // 0x78
		::UnityEngine::GameObject* hlod; // 0x98
		::Foundation::AssetRequestHandle hlodHandle; // 0xA0
		::NapStreaming::NapStreamingData* streamingData; // 0xC0
		::System::Int32 gridIndex; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::NapStreaming::NapStreamingData* data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingData*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_INIT_OFFSET))(this, data, index);
		}

		::UnityEngine::GameObject* SafeInstantiate(::UnityEngine::Object* o)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SAFEINSTANTIATE_OFFSET))(this, o);
		}

		::System::Void UnloadHLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADHLOD_OFFSET))(this);
		}

		::System::Void UnloadObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADOBJECTS_OFFSET))(this);
		}

		::System::Void SwitchToHLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOHLOD_OFFSET))(this);
		}

		::System::Void SwitchToUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOUNLOAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SwitchToLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOLOADING_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SETVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Void _SwitchToHLOD_b__20_0(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__20_0_OFFSET))(this, o, a);
		}

		::System::Void _SwitchToHLOD_b__20_1(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__20_1_OFFSET))(this, o, a);
		}

		::System::Void _SwitchToLoading_b__23_0(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__23_0_OFFSET))(this, o, a);
		}

		::System::Void _SwitchToLoading_b__23_1(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__23_1_OFFSET))(this, o, a);
		}
	};
}
