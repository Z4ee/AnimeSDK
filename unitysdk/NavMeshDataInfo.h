#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::AI { class NavMeshData; }

#define NAVMESHDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF61ACF0)

inline static constexpr unsigned int NavMeshDataInfo_TypeDefinitionIndex = 80197;

class NavMeshDataInfo : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::UnityEngine::AI::NavMeshData* navMeshData; // 0x18
	::System::Boolean includeInCalculation; // 0x20
	::System::Single calculatedArea; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHDATAINFO__CTOR_OFFSET))(this);
	}
};
