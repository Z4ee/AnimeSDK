#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6A49D2459F37DC4F__CTOR_OFFSET UNITYSDK_OFFSET(0x15987B10)

inline static constexpr unsigned int Class_1_6A49D2459F37DC4F_TypeDefinitionIndex = 59746;

class Class_1_6A49D2459F37DC4F : public ::System::Object
{
public:
	::System::String* FAGFFGNFMNI; // 0x10
	::System::String* JEJGFGCMGDI; // 0x18
	::System::String* GMPGDEINODK; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* GFIHMIOGHDH; // 0x28
	::System::Int64 JDHAOECBIBJ; // 0x30
	::System::Int64 IDGPNJMBMCI; // 0x38
	::System::Int64 LPLJPPEDONN; // 0x40
	::System::Int64 NPKDKJBGJJA; // 0x48
	::System::Int64 GPFJIBPNPML; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A49D2459F37DC4F__CTOR_OFFSET))(this);
	}
};
