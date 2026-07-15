#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IPlaneReflection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define PLANEREFLECTIONPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177F82F0)
#define PLANEREFLECTIONPROXY_ORDERBYPRIORITY_OFFSET UNITYSDK_OFFSET(0x177F7730)
#define PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET UNITYSDK_OFFSET(0x177F7D40)
#define PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTION_OFFSET UNITYSDK_OFFSET(0x177F6E80)
#define PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET UNITYSDK_OFFSET(0x177F8090)
#define PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTION_OFFSET UNITYSDK_OFFSET(0x177F7AB0)
#define PLANEREFLECTIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x177F6DA0)

inline static constexpr unsigned int PlaneReflectionProxy_TypeDefinitionIndex = 35931;

class PlaneReflectionProxy : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::IPlaneReflection*>* _PlaneReflectionMap; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* _PendingCasterRendererMap; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY__CTOR_OFFSET))(this);
	}

	::System::Void RegisterPlaneReflection(::RPG::CustomRP::IPlaneReflection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IPlaneReflection*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTION_OFFSET))(this, a1);
	}

	::System::Void UnregisterPlaneReflection(::RPG::CustomRP::IPlaneReflection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IPlaneReflection*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTION_OFFSET))(this, a1);
	}

	::System::Boolean RegisterPlaneReflectionCasterRenderer(::System::String* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET))(this, a1, a2);
	}

	::System::Void UnregisterPlaneReflectionCasterRenderer(::System::String* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_DISPOSE_OFFSET))(this);
	}

	static ::System::Void OrderByPriority(::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_ORDERBYPRIORITY_OFFSET))(a1);
	}
};
