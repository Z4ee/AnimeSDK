#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xABBC3E0)

inline static constexpr unsigned int RootPoint_TypeDefinitionIndex = 38053;

class RootPoint : public ::System::Object
{
public:
	::System::String* PointName; // 0x10
	::UnityEngine::Transform* PointTransform; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTPOINT__CTOR_OFFSET))(this);
	}
};
