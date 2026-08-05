#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PerObjectShadowContext.h"
#include "unitysdk/PerObjectShadowCullResult.h"
#include "unitysdk/PerObjectShadowDataBlock.h"
#include "unitysdk/RenderEntityType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class IPerObjectShadowRenderer;
class PerObjectShadowGizmos;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }

inline static constexpr unsigned int IPerObjectShadowEntity_TypeDefinitionIndex = 27331;

class IPerObjectShadowEntity
{
public:
};
