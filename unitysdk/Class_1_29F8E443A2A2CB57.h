#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E91CFCE8860407C4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define CLASS_1_29F8E443A2A2CB57_METHOD_1_002D507EC1335E0E_OFFSET UNITYSDK_OFFSET(0x19D6F060)
#define CLASS_1_29F8E443A2A2CB57_METHOD_1_06203D43FC0EF766_OFFSET UNITYSDK_OFFSET(0x19D6F510)
#define CLASS_1_29F8E443A2A2CB57_METHOD_1_0E8BCCD41E17ADA6_OFFSET UNITYSDK_OFFSET(0x19D6E8C0)
#define CLASS_1_29F8E443A2A2CB57_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x19D6F6C0)
#define CLASS_1_29F8E443A2A2CB57_METHOD_1_A5822C919A4EEE9E_OFFSET UNITYSDK_OFFSET(0x19D6F1F0)
#define CLASS_1_29F8E443A2A2CB57_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0x19D6E770)
#define CLASS_1_29F8E443A2A2CB57_METHOD_1_CF018877E18305F0_OFFSET UNITYSDK_OFFSET(0x19D6F040)
#define CLASS_1_29F8E443A2A2CB57__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6E830)

inline static constexpr unsigned int Class_1_29F8E443A2A2CB57_TypeDefinitionIndex = 9611;

class Class_1_29F8E443A2A2CB57 : public ::System::Object
{
public:
	static ::Class_1_29F8E443A2A2CB57** StaticGet_Field_1_2()
	{
		return (::Class_1_29F8E443A2A2CB57**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29F8E443A2A2CB57_TypeDefinitionIndex)->GetStaticField(0x17560);
	}
	::System::Collections::Generic::List_1<::Class_1_E91CFCE8860407C4*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57__CTOR_OFFSET))(this);
	}

	static ::Class_1_29F8E443A2A2CB57* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_29F8E443A2A2CB57*(*)())((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}

	::Class_1_E91CFCE8860407C4* Method_1_0E8BCCD41E17ADA6(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
	{
		return ((::Class_1_E91CFCE8860407C4*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_0E8BCCD41E17ADA6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Method_1_CF018877E18305F0(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_CF018877E18305F0_OFFSET))(this, a1, a2);
	}

	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Method_1_002D507EC1335E0E(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_002D507EC1335E0E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A5822C919A4EEE9E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_A5822C919A4EEE9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_06203D43FC0EF766(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_06203D43FC0EF766_OFFSET))(this, a1);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29F8E443A2A2CB57_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}
};
