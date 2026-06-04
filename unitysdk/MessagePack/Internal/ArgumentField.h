#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLDARG_OFFSET UNITYSDK_OFFSET(0x3826A50)
#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLOAD_OFFSET UNITYSDK_OFFSET(0x3826A30)
#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3826910)
#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x3826900)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ArgumentField_TypeDefinitionIndex = 7249;

	struct alignas(8) ArgumentField
	{
		::System::Int32 i; // 0x10
		::System::Boolean ref; // 0x14
		::System::Reflection::Emit::ILGenerator* il; // 0x18

		::System::Void _ctor(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLOAD_OFFSET))(this);
		}

		::System::Void EmitLdarg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLDARG_OFFSET))(this);
		}
	};
}
