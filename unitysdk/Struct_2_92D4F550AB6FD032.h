#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_146;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_92D4F550AB6FD032_DISPOSE_OFFSET UNITYSDK_OFFSET(0x76F180)
#define STRUCT_2_92D4F550AB6FD032_METHOD_2_1019344C49350A62_OFFSET UNITYSDK_OFFSET(0x139C9FA0)

inline static constexpr unsigned int Struct_2_92D4F550AB6FD032_TypeDefinitionIndex = 53913;

struct alignas(8) Struct_2_92D4F550AB6FD032
{
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_146*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_146*>* Field_2_1; // 0x18
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_146*>*> Field_2_2; // 0x20
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_146*>*> Field_2_3; // 0x30

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_92D4F550AB6FD032_DISPOSE_OFFSET))(this);
	}

	static ::Struct_2_92D4F550AB6FD032 Method_2_1019344C49350A62()
	{
		return ((::Struct_2_92D4F550AB6FD032(*)())((::PBYTE)hIl2Cpp + STRUCT_2_92D4F550AB6FD032_METHOD_2_1019344C49350A62_OFFSET))();
	}
};
