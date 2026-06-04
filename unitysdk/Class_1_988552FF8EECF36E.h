#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define CLASS_1_988552FF8EECF36E_METHOD_1_281A2023DEE5E80E_OFFSET UNITYSDK_OFFSET(0x1AC0D960)
#define CLASS_1_988552FF8EECF36E_METHOD_1_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x1AC0D5E0)
#define CLASS_1_988552FF8EECF36E_METHOD_1_2F826C75065915AB_OFFSET UNITYSDK_OFFSET(0x1ABE8410)
#define CLASS_1_988552FF8EECF36E_METHOD_1_4B5B0B4E28D31F7A_OFFSET UNITYSDK_OFFSET(0x1ABE83A0)
#define CLASS_1_988552FF8EECF36E_METHOD_1_99250689080BB82A_OFFSET UNITYSDK_OFFSET(0x1AC0D9C0)
#define CLASS_1_988552FF8EECF36E_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1ABE8B20)
#define CLASS_1_988552FF8EECF36E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC0D5A0)

inline static constexpr unsigned int Class_1_988552FF8EECF36E_TypeDefinitionIndex = 33381;

class Class_1_988552FF8EECF36E : public ::System::Object
{
public:
	static ::Class_1_988552FF8EECF36E** StaticGet_Field_1_0()
	{
		return (::Class_1_988552FF8EECF36E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_988552FF8EECF36E_TypeDefinitionIndex)->GetStaticField(0x47C20);
	}
	::System::Collections::Generic::SortedList_2<::System::String*, ::System::ValueTuple_2<::System::IO::MemoryMappedFiles::MemoryMappedFile*, ::System::Int32>>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E__CTOR_OFFSET))(this);
	}

	static ::Class_1_988552FF8EECF36E* Method_1_4B5B0B4E28D31F7A()
	{
		return ((::Class_1_988552FF8EECF36E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_4B5B0B4E28D31F7A_OFFSET))();
	}

	::System::IO::MemoryMappedFiles::MemoryMappedFile* Method_1_2F826C75065915AB(::System::String* a1)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_2F826C75065915AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_D7D0CD092E7E5457_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_2C825E716CE9F2F9_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_281A2023DEE5E80E()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_281A2023DEE5E80E_OFFSET))(this);
	}

	::System::Boolean Method_1_99250689080BB82A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_99250689080BB82A_OFFSET))(this, a1);
	}
};
