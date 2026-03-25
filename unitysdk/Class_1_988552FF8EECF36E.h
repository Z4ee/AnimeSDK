#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define CLASS_1_988552FF8EECF36E_METHOD_1_2F826C75065915AB_OFFSET UNITYSDK_OFFSET(0x18312F50)
#define CLASS_1_988552FF8EECF36E_METHOD_1_4B5B0B4E28D31F7A_OFFSET UNITYSDK_OFFSET(0x18312EE0)
#define CLASS_1_988552FF8EECF36E_METHOD_1_AFED030F11A55199_OFFSET UNITYSDK_OFFSET(0x18314CB0)
#define CLASS_1_988552FF8EECF36E_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x183133C0)
#define CLASS_1_988552FF8EECF36E_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x18314900)
#define CLASS_1_988552FF8EECF36E_METHOD_1_E28EDB6F9E6321FE_OFFSET UNITYSDK_OFFSET(0x18314D30)
#define CLASS_1_988552FF8EECF36E__CTOR_OFFSET UNITYSDK_OFFSET(0x183148C0)

inline static constexpr unsigned int Class_1_988552FF8EECF36E_TypeDefinitionIndex = 9414;

class Class_1_988552FF8EECF36E : public ::System::Object
{
public:
	static ::Class_1_988552FF8EECF36E** StaticGet_Field_1_1()
	{
		return (::Class_1_988552FF8EECF36E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_988552FF8EECF36E_TypeDefinitionIndex)->GetStaticField(0x24110);
	}
	::System::Collections::Generic::SortedList_2<::System::String*, ::System::ValueTuple_2<::System::IO::MemoryMappedFiles::MemoryMappedFile*, ::System::Int32>>* Field_1_0; // 0x10

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

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_AFED030F11A55199()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_AFED030F11A55199_OFFSET))(this);
	}

	::System::Boolean Method_1_E28EDB6F9E6321FE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_988552FF8EECF36E_METHOD_1_E28EDB6F9E6321FE_OFFSET))(this, a1);
	}
};
