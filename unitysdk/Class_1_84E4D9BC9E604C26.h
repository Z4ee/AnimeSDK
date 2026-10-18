#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A7844E4E1D00B261;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define CLASS_1_84E4D9BC9E604C26_METHOD_1_01ED1C1F22416698_OFFSET UNITYSDK_OFFSET(0x1EBEE490)
#define CLASS_1_84E4D9BC9E604C26_METHOD_1_2512167350A02C3B_OFFSET UNITYSDK_OFFSET(0x1EBEE300)
#define CLASS_1_84E4D9BC9E604C26_METHOD_1_6AC3A5FE99F8BA44_OFFSET UNITYSDK_OFFSET(0x1EBEE7E0)
#define CLASS_1_84E4D9BC9E604C26_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x1EBEE9F0)
#define CLASS_1_84E4D9BC9E604C26_METHOD_1_8CE19C46257EB48F_OFFSET UNITYSDK_OFFSET(0x1EBED700)
#define CLASS_1_84E4D9BC9E604C26_METHOD_1_9B76A6197E236A63_OFFSET UNITYSDK_OFFSET(0x1EBEE040)
#define CLASS_1_84E4D9BC9E604C26_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x1EBED580)
#define CLASS_1_84E4D9BC9E604C26__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBED670)

inline static constexpr unsigned int Class_1_84E4D9BC9E604C26_TypeDefinitionIndex = 35180;

class Class_1_84E4D9BC9E604C26 : public ::System::Object
{
public:
	static ::Class_1_84E4D9BC9E604C26** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_84E4D9BC9E604C26**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84E4D9BC9E604C26_TypeDefinitionIndex)->GetStaticField(0x47D80);
	}
	::System::Collections::Generic::List_1<::Class_1_A7844E4E1D00B261*>* PJOGJOLKPLN; // 0x10
	::System::Int32 EFMGLPMDIIN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26__CTOR_OFFSET))(this);
	}

	static ::Class_1_84E4D9BC9E604C26* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_84E4D9BC9E604C26*(*)())((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::Class_1_A7844E4E1D00B261* Method_1_8CE19C46257EB48F(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
	{
		return ((::Class_1_A7844E4E1D00B261*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_8CE19C46257EB48F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Method_1_9B76A6197E236A63(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_9B76A6197E236A63_OFFSET))(this, a1, a2);
	}

	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Method_1_2512167350A02C3B(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_2512167350A02C3B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_01ED1C1F22416698(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_01ED1C1F22416698_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AC3A5FE99F8BA44(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_6AC3A5FE99F8BA44_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E4D9BC9E604C26_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}
};
