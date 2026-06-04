#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define CLASS_1_E91CFCE8860407C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ABE56C0)
#define CLASS_1_E91CFCE8860407C4_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ABEB6D0)
#define CLASS_1_E91CFCE8860407C4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1ABEB6C0)
#define CLASS_1_E91CFCE8860407C4_METHOD_1_4C2F600EE7E7928C_OFFSET UNITYSDK_OFFSET(0x1ABE5B80)
#define CLASS_1_E91CFCE8860407C4_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1ABE5EF0)
#define CLASS_1_E91CFCE8860407C4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1ABE59E0)
#define CLASS_1_E91CFCE8860407C4_METHOD_1_BE8FDBC39A573030_OFFSET UNITYSDK_OFFSET(0x1ABE57D0)
#define CLASS_1_E91CFCE8860407C4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1ABE56B0)
#define CLASS_1_E91CFCE8860407C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE59D0)

inline static constexpr unsigned int Class_1_E91CFCE8860407C4_TypeDefinitionIndex = 33379;

class Class_1_E91CFCE8860407C4 : public ::System::Object
{
public:
	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::IO::MemoryMappedFiles::MemoryMappedFile* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::UInt16 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE8FDBC39A573030(::System::String* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_METHOD_1_BE8FDBC39A573030_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_DISPOSE_OFFSET))(this);
	}

	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Method_1_4C2F600EE7E7928C()
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_METHOD_1_4C2F600EE7E7928C_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E91CFCE8860407C4_FINALIZE_OFFSET))(this);
	}
};
