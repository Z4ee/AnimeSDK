#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TIMEREWINDNODEINDEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F4750)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindNodeIndexInfo_TypeDefinitionIndex = 58761;

	class TimeRewindNodeIndexInfo : public ::System::Object
	{
	public:
		::System::Int32 ControlNodeIndex; // 0x10
		::System::Int32 NodeIndex; // 0x14
		::System::Int32 ParentNodeIndex; // 0x18
		::Il2CppArray<::System::Int32>* ChildNodeIndex; // 0x20
		::System::Boolean EnableRedo; // 0x28
		::System::Boolean IsTransitionNode; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDNODEINDEXINFO__CTOR_OFFSET))(this);
		}
	};
}
