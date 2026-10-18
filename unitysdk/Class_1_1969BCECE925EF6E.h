#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define CLASS_1_1969BCECE925EF6E_METHOD_1_46F13104D3ADB8BE_OFFSET UNITYSDK_OFFSET(0x1EC3BB30)
#define CLASS_1_1969BCECE925EF6E_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x1EC3B4F0)
#define CLASS_1_1969BCECE925EF6E_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x1EC3AEF0)
#define CLASS_1_1969BCECE925EF6E_METHOD_1_AFED030F11A55199_OFFSET UNITYSDK_OFFSET(0x1EC3BAA0)
#define CLASS_1_1969BCECE925EF6E_METHOD_1_EEABFB4864DCFD4F_OFFSET UNITYSDK_OFFSET(0x1EC3B370)
#define CLASS_1_1969BCECE925EF6E_METHOD_1_FF1BB0A3017841D0_OFFSET UNITYSDK_OFFSET(0x1EC3AFC0)
#define CLASS_1_1969BCECE925EF6E__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3AF80)

inline static constexpr unsigned int Class_1_1969BCECE925EF6E_TypeDefinitionIndex = 35181;

class Class_1_1969BCECE925EF6E : public ::System::Object
{
public:
	static ::Class_1_1969BCECE925EF6E** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_1969BCECE925EF6E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1969BCECE925EF6E_TypeDefinitionIndex)->GetStaticField(0x44360);
	}
	::System::Collections::Generic::SortedList_2<::System::String*, ::System::ValueTuple_2<::System::IO::MemoryMappedFiles::MemoryMappedFile*, ::System::Int32>>* LKEAPHDFKGJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E__CTOR_OFFSET))(this);
	}

	static ::Class_1_1969BCECE925EF6E* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_1969BCECE925EF6E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::IO::MemoryMappedFiles::MemoryMappedFile* Method_1_FF1BB0A3017841D0(::System::String* a1)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E_METHOD_1_FF1BB0A3017841D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEABFB4864DCFD4F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E_METHOD_1_EEABFB4864DCFD4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_AFED030F11A55199()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E_METHOD_1_AFED030F11A55199_OFFSET))(this);
	}

	::System::Boolean Method_1_46F13104D3ADB8BE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1969BCECE925EF6E_METHOD_1_46F13104D3ADB8BE_OFFSET))(this, a1);
	}
};
