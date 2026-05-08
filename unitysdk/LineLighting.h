#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LineLighting_CalcType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define LINELIGHTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C4F4040)
#define LINELIGHTING_COLLECTLINPOS_OFFSET UNITYSDK_OFFSET(0x1C4F46F0)
#define LINELIGHTING_DOSETLINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C4F4460)
#define LINELIGHTING_FORCEUPDATEWITHPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1C4F46A0)
#define LINELIGHTING_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C4F4670)
#define LINELIGHTING_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4F3A80)
#define LINELIGHTING_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4F38C0)
#define LINELIGHTING_GET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C4F38B0)
#define LINELIGHTING_RESETPARAM_OFFSET UNITYSDK_OFFSET(0x1C4F4960)
#define LINELIGHTING_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1C4F4140)
#define LINELIGHTING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4F4110)
#define LINELIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F4AF0)

inline static constexpr unsigned int LineLighting_TypeDefinitionIndex = 33090;

class LineLighting : public ::UnityEngine::MonoBehaviour
{
public:
	::LineLighting_CalcType calcType; // 0x18
	::System::Single detail; // 0x1C
	::System::Single displacement; // 0x20
	::System::Int32 segment; // 0x24
	::System::Boolean adjustByDistance; // 0x28
	::UnityEngine::Vector3 amp; // 0x2C
	::UnityEngine::Transform* StartTransform; // 0x38
	::UnityEngine::Vector3 StartOffsetPos; // 0x40
	::UnityEngine::Vector3 StartOffsetRot; // 0x4C
	::UnityEngine::Transform* EndTransform; // 0x58
	::UnityEngine::Vector3 EndOffsetPos; // 0x60
	::UnityEngine::Vector3 StartPosition; // 0x6C
	::UnityEngine::Vector3 EndPosition; // 0x78
	::System::Single length; // 0x84
	::UnityEngine::Vector3 direction; // 0x88
	::UnityEngine::Vector3 dir; // 0x94
	::System::Single fps; // 0xA0
	::System::Boolean UpdateEveryFrame; // 0xA4
	::System::Boolean enableMonoUpdate; // 0xA5
	::System::Boolean KeepPos; // 0xA6
	::UnityEngine::LineRenderer* _lineRender; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _linePosList; // 0xB0
	::System::Single _time; // 0xB8
	::System::Single _frameThreshhold; // 0xBC
	::System::Single _displacement; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING__CTOR_OFFSET))(this);
	}

	::UnityEngine::LineRenderer* get_LineRenderer()
	{
		return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_GET_LINERENDERER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetStartPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_GETSTARTPOSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetEndPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_GETENDPOSITION_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_UPDATE_OFFSET))(this);
	}

	::System::Void Simulate(::System::Single dt)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LINELIGHTING_SIMULATE_OFFSET))(this, dt);
	}

	::System::Void ForceUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_FORCEUPDATE_OFFSET))(this);
	}

	::System::Void ForceUpdateWithPositions(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LINELIGHTING_FORCEUPDATEWITHPOSITIONS_OFFSET))(this, startPos, endPos);
	}

	::System::Void DoSetLineRenderer(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LINELIGHTING_DOSETLINERENDERER_OFFSET))(this, startPos, endPos);
	}

	::System::Void CollectLinPos(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 destPos, ::System::Single displace, ::System::Int32 depth, ::System::Int32 maxDepth)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LINELIGHTING_COLLECTLINPOS_OFFSET))(this, startPos, destPos, displace, depth, maxDepth);
	}

	::System::Void ResetParam()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINELIGHTING_RESETPARAM_OFFSET))(this);
	}
};
