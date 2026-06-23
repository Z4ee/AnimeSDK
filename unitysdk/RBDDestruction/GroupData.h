#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RBDDESTRUCTION_GROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C435F50)

namespace RBDDestruction
{
	inline static constexpr unsigned int GroupData_TypeDefinitionIndex = 26661;

	class GroupData : public ::System::Object
	{
	public:
		::UnityEngine::Color color; // 0x10
		::System::Int32 id; // 0x20
		::System::Single weight; // 0x24
		::System::Single hp; // 0x28
		::System::Single weaknessFactor; // 0x2C
		::System::Int32 fragmentCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_GROUPDATA__CTOR_OFFSET))(this);
		}
	};
}
