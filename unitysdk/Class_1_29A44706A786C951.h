#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_29A44706A786C951_METHOD_1_37FFC0ACB135CB5D_OFFSET UNITYSDK_OFFSET(0x1EC059B0)
#define CLASS_1_29A44706A786C951_METHOD_1_47C3094B9BEBAE50_OFFSET UNITYSDK_OFFSET(0x1EC05AA0)
#define CLASS_1_29A44706A786C951_METHOD_1_4E223EEBDEE581A7_OFFSET UNITYSDK_OFFSET(0x1EC05C30)
#define CLASS_1_29A44706A786C951_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x1EC05790)
#define CLASS_1_29A44706A786C951_METHOD_1_D76FFCBCE49D064B_OFFSET UNITYSDK_OFFSET(0x1EC057E0)
#define CLASS_1_29A44706A786C951_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x1EC05730)
#define CLASS_1_29A44706A786C951__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC056A0)

inline static constexpr unsigned int Class_1_29A44706A786C951_TypeDefinitionIndex = 35238;

class Class_1_29A44706A786C951 : public ::System::Object
{
public:
	// static const ::System::Int32 PDNNIGAEAKH = 0x100000; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<::System::Byte>*>*>* BDBOGJHLEIG; // 0x10
	::System::Boolean IDBHEIBEGBA; // 0x18
	::System::Int32 KEGPELALGIM; // 0x1C
	::System::UInt32 AALAOIPDKBP; // 0x20
	::System::UInt32 IJBCBFCJMFB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D76FFCBCE49D064B(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951_METHOD_1_D76FFCBCE49D064B_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_37FFC0ACB135CB5D(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951_METHOD_1_37FFC0ACB135CB5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_47C3094B9BEBAE50()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951_METHOD_1_47C3094B9BEBAE50_OFFSET))(this);
	}

	::System::Boolean Method_1_4E223EEBDEE581A7(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_29A44706A786C951_METHOD_1_4E223EEBDEE581A7_OFFSET))(this, a1);
	}
};
