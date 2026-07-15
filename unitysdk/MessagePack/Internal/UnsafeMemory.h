#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FA3990)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeMemory_TypeDefinitionIndex = 7265;

	class UnsafeMemory : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Is32Bit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UnsafeMemory_TypeDefinitionIndex)->GetStaticField(0x4220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY__CCTOR_OFFSET))();
		}
	};
}
