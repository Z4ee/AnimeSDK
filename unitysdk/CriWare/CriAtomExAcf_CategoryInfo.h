#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_CATEGORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2DFF280)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_CategoryInfo_TypeDefinitionIndex = 38733;

	struct alignas(8) CriAtomExAcf_CategoryInfo
	{
		::System::UInt32 groupNo; // 0x10
		::System::UInt32 id; // 0x14
		::System::String* name; // 0x18
		::System::UInt32 numCueLimits; // 0x20
		::System::Single volume; // 0x24

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CATEGORYINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
