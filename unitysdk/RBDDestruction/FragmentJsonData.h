#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RBDDESTRUCTION_FRAGMENTJSONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FC210)

namespace RBDDestruction
{
	inline static constexpr unsigned int FragmentJsonData_TypeDefinitionIndex = 26525;

	class FragmentJsonData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* bbox_size; // 0x10
		::Il2CppArray<::System::Single>* pivot; // 0x18
		::System::Single crack; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_FRAGMENTJSONDATA__CTOR_OFFSET))(this);
		}
	};
}
