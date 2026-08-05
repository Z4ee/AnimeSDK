#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointComponentRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x11921400)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_INITCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x119210D0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x11921080)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0x11921590)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x11921700)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointRuntime_TypeDefinitionIndex = 74661;

	class PathGraphFeaturePointRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointComponentRuntime*>* _components; // 0x10
		::NPCCrowd::AI::PathGraphFeaturePointV2Config* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void InitComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_INITCOMPONENTS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}
	};
}
