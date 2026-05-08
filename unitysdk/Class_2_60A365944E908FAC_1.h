#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C49216E6D597CA02.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_60A365944E908FAC_1_METHOD_2_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x113CDAE0)
#define CLASS_2_60A365944E908FAC_1_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x113CDC50)
#define CLASS_2_60A365944E908FAC_1_METHOD_2_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x113CDF40)
#define CLASS_2_60A365944E908FAC_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x113CE080)
#define CLASS_2_60A365944E908FAC_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113CDFF0)
#define CLASS_2_60A365944E908FAC_1_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x113CE110)
#define CLASS_2_60A365944E908FAC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x113CD930)

inline static constexpr unsigned int Class_2_60A365944E908FAC_1_TypeDefinitionIndex = 82212;

class Class_2_60A365944E908FAC_1 : public ::Class_1_C49216E6D597CA02
{
public:
	::System::Collections::Generic::List_1<::Class_1_C49216E6D597CA02*>* Field_2_0; // 0x20
	::Il2CppArray<::System::Int32>* Field_2_2; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_C49216E6D597CA02*>* Field_2_1; // 0x30

	::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::Class_1_C49216E6D597CA02*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::Class_1_C49216E6D597CA02*>*))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1_METHOD_2_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_C0688C2E36BAE128(::Class_1_C49216E6D597CA02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C49216E6D597CA02*))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1_METHOD_2_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_C49216E6D597CA02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C49216E6D597CA02*))((::PBYTE)hIl2Cpp + CLASS_2_60A365944E908FAC_1_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
