#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_AREAEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xDBD2FB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AreaEdge_TypeDefinitionIndex = 77747;

	class AreaEdge : public ::System::Object
	{
	public:
		::System::Int32 PointA; // 0x10
		::System::Int32 PointB; // 0x14
		::System::Single ForwardWeight; // 0x18
		::System::Single BackwardWeight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_AREAEDGE__CTOR_OFFSET))(this);
		}
	};
}
