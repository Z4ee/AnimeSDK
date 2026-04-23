#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_AisacGraphType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACF_AISACGRAPHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16244E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AisacGraphInfo_TypeDefinitionIndex = 36778;

	struct alignas(4) CriAtomExAcf_AisacGraphInfo
	{
		::CriWare::CriAtomExAcf_AisacGraphType type; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_AISACGRAPHINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
