#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4266CA7D1A31BD8B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8625C0)
#define STRUCT_2_4266CA7D1A31BD8B_METHOD_2_35AA1256336E8112_OFFSET UNITYSDK_OFFSET(0x862620)
#define STRUCT_2_4266CA7D1A31BD8B_METHOD_2_9E18077320785B6F_OFFSET UNITYSDK_OFFSET(0x862630)
#define STRUCT_2_4266CA7D1A31BD8B__CTOR_OFFSET UNITYSDK_OFFSET(0x862450)

inline static constexpr unsigned int Struct_2_4266CA7D1A31BD8B_TypeDefinitionIndex = 70929;

struct alignas(8) Struct_2_4266CA7D1A31BD8B
{
	::System::UInt32 Field_2_0; // 0x10
	::Struct_2_9DFB39885391F41D Field_2_7; // 0x18
	::Struct_2_9DFB39885391F41D Field_2_6; // 0x30
	::Struct_2_9DFB39885391F41D Field_2_5; // 0x48

	::System::Void _ctor(::Struct_2_9DFB39885391F41D a1, ::Struct_2_9DFB39885391F41D a2, ::Struct_2_9DFB39885391F41D a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9DFB39885391F41D, ::Struct_2_9DFB39885391F41D, ::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + STRUCT_2_4266CA7D1A31BD8B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4266CA7D1A31BD8B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_35AA1256336E8112(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_4266CA7D1A31BD8B_METHOD_2_35AA1256336E8112_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9E18077320785B6F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4266CA7D1A31BD8B_METHOD_2_9E18077320785B6F_OFFSET))(this);
	}
};
