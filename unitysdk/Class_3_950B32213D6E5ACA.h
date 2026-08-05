#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_950B32213D6E5ACA_METHOD_3_42AE4B7779F3CD9E_OFFSET UNITYSDK_OFFSET(0x17D0E290)
#define CLASS_3_950B32213D6E5ACA_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17D0E200)
#define CLASS_3_950B32213D6E5ACA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D0E450)
#define CLASS_3_950B32213D6E5ACA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0E3B0)

inline static constexpr unsigned int Class_3_950B32213D6E5ACA_TypeDefinitionIndex = 48924;

class Class_3_950B32213D6E5ACA : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_950B32213D6E5ACA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_950B32213D6E5ACA_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_42AE4B7779F3CD9E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_950B32213D6E5ACA_METHOD_3_42AE4B7779F3CD9E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_950B32213D6E5ACA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
