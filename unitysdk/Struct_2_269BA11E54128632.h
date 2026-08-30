#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_269BA11E54128632_METHOD_2_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x2F2CCE0)
#define STRUCT_2_269BA11E54128632_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x3B85BE0)

inline static constexpr unsigned int Struct_2_269BA11E54128632_TypeDefinitionIndex = 10800;

struct alignas(8) Struct_2_269BA11E54128632
{
	::System::UInt64 BCOEGBEBNDO; // 0x10

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_269BA11E54128632_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_269BA11E54128632_METHOD_2_5A6434846524FCDB_OFFSET))(this, a1);
	}
};
