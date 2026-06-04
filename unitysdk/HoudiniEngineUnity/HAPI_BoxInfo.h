#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_BOXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2D4A830)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_BoxInfo_TypeDefinitionIndex = 37552;

	struct alignas(8) HAPI_BoxInfo
	{
		::Il2CppArray<::System::Single>* center; // 0x10
		::Il2CppArray<::System::Single>* size; // 0x18
		::Il2CppArray<::System::Single>* rotation; // 0x20

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_BOXINFO__CTOR_OFFSET))(this, a1);
		}
	};
}
