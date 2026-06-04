#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DynamicResolutionHeuristicProxy_FrameTimeInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FrameTiming.h"

namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x18EE2F00)
#define RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE33C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DynamicResolutionHeuristicProxy_TypeDefinitionIndex = 35392;

	class DynamicResolutionHeuristicProxy : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_LastCPUTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionHeuristicProxy_TypeDefinitionIndex)->GetStaticField(0x131E0);
		}
		static ::System::Single* StaticGet_LastGPUTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionHeuristicProxy_TypeDefinitionIndex)->GetStaticField(0x131E4);
		}
		::Il2CppArray<::RPG::CustomRP::DynamicResolutionHeuristicProxy_FrameTimeInfo>* _FrameList; // 0x10
		::Il2CppArray<::UnityEngine::FrameTiming>* _TmpFrameTimings; // 0x18
		::System::Int32 _FrameCount; // 0x20
		::System::Int32 _TailIndex; // 0x24
		::System::Single _CurFrameRenderScale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Update(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY_UPDATE_OFFSET))(this, a1);
		}
	};
}
