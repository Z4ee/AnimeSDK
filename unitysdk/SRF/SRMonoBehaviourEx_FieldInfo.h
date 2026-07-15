#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

namespace SRF
{
	inline static constexpr unsigned int SRMonoBehaviourEx_FieldInfo_TypeDefinitionIndex = 33929;

	struct alignas(8) SRMonoBehaviourEx_FieldInfo
	{
		::System::Boolean AutoCreate; // 0x10
		::System::Boolean AutoSet; // 0x11
		::System::Reflection::FieldInfo* Field; // 0x18
		::System::Boolean Import; // 0x20
		::System::Type* ImportType; // 0x28
	};
}
