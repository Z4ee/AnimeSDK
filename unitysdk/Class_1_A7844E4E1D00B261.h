#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define CLASS_1_A7844E4E1D00B261_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBC0680)
#define CLASS_1_A7844E4E1D00B261_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EBC8860)
#define CLASS_1_A7844E4E1D00B261_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1EBC8850)
#define CLASS_1_A7844E4E1D00B261_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x1EBC10C0)
#define CLASS_1_A7844E4E1D00B261_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1EBC0920)
#define CLASS_1_A7844E4E1D00B261_METHOD_1_481E25E9ED170E55_OFFSET UNITYSDK_OFFSET(0x1EBC0D70)
#define CLASS_1_A7844E4E1D00B261_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EBC0670)
#define CLASS_1_A7844E4E1D00B261_METHOD_1_FE822593A16C3B3A_OFFSET UNITYSDK_OFFSET(0x1EBC0700)
#define CLASS_1_A7844E4E1D00B261__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC0910)

inline static constexpr unsigned int Class_1_A7844E4E1D00B261_TypeDefinitionIndex = 35179;

class Class_1_A7844E4E1D00B261 : public ::System::Object
{
public:
	::System::String* CEKHDBPOJHO; // 0x10
	::System::IO::MemoryMappedFiles::MemoryMappedFile* CIAECCNJEMN; // 0x18
	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* FHKALMCNJGO; // 0x20
	::System::String* PFIEAFJIJIP; // 0x28
	::System::UInt16 IAGAMAOEKGJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FE822593A16C3B3A(::System::String* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_METHOD_1_FE822593A16C3B3A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_DISPOSE_OFFSET))(this);
	}

	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Method_1_481E25E9ED170E55()
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_METHOD_1_481E25E9ED170E55_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7844E4E1D00B261_FINALIZE_OFFSET))(this);
	}
};
